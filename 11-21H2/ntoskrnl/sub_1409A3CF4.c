/*
 * XREFs of sub_1409A3CF4 @ 0x1409A3CF4
 * Callers:
 *     sub_1409A3D5C @ 0x1409A3D5C (sub_1409A3D5C.c)
 * Callees:
 *     sub_1409A3E2C @ 0x1409A3E2C (sub_1409A3E2C.c)
 */

_QWORD *__fastcall sub_1409A3CF4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // rdx
  _DWORD *v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  char v9; // al
  _DWORD *v10; // r9
  __int64 v11; // rcx
  _QWORD *result; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[0] = 0LL;
  if ( (unsigned __int8)sub_1409A3E2C(a2, a3, v13) )
  {
    *v6 = 1;
  }
  else
  {
    v9 = sub_1409A3E2C(v8, v5, v13);
    *v10 = 3 - (v9 != 0);
  }
  v11 = v13[0];
  if ( v13[0] )
    v11 = v13[0] - v7;
  result = a5;
  *a5 = v11;
  return result;
}
