#include<iostream>
using namespace std;
int main()
{
	long int num = NULL, a = NULL;
	cout << "Enter the number for sum: ";
	cin >> num;
	a = num*(num + 1) / 2;
	cout << a;
	cout << endl;
	system("pause");
	return 0;
}