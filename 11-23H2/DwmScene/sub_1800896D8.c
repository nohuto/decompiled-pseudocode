/*
 * XREFs of sub_1800896D8 @ 0x1800896D8
 * Callers:
 *     sub_180089780 @ 0x180089780 (sub_180089780.c)
 * Callees:
 *     sub_1800488C8 @ 0x1800488C8 (sub_1800488C8.c)
 *     sub_1800892EC @ 0x1800892EC (sub_1800892EC.c)
 */

__int64 *sub_1800896D8(__int64 a1, __int64 *a2, int a3, int a4, ...)
{
  int v5; // r10d
  int v6; // r11d
  int v7; // r10d
  int v8; // eax
  int v9; // r11d
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+60h] [rbp+18h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF
  __int64 v14; // [rsp+70h] [rbp+28h] BYREF
  va_list va; // [rsp+70h] [rbp+28h]
  __int64 v16; // [rsp+78h] [rbp+30h] BYREF
  va_list va1; // [rsp+78h] [rbp+30h]
  va_list va2; // [rsp+80h] [rbp+38h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v13 = a4;
  v12 = a3;
  v11 = a1;
  if ( (_DWORD)v16 == 23 || (_DWORD)v16 == 24 )
  {
    v8 = sub_1800488C8(v16);
    v7 = ((v9 + 1) & 0xFFFFFFFE) * v8;
  }
  else
  {
    v5 = sub_1800488C8(v16);
    v7 = v6 * v5;
  }
  LODWORD(v11) = v7;
  sub_1800892EC(a2, &v12, &v11, &v13, (__int64 *)va1, (__int64 *)va, (int *)va2);
  return a2;
}
