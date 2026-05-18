/*
 * XREFs of sub_18000D130 @ 0x18000D130
 * Callers:
 *     sub_18000CAD4 @ 0x18000CAD4 (sub_18000CAD4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000E764 @ 0x18000E764 (sub_18000E764.c)
 *     sub_18000FA88 @ 0x18000FA88 (sub_18000FA88.c)
 *     __alloca_probe @ 0x1800E3900 (__alloca_probe.c)
 */

__int64 __fastcall sub_18000D130(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 result; // rax
  int v9; // [rsp+48h] [rbp-1500h]
  _BYTE v10[160]; // [rsp+80h] [rbp-14C8h] BYREF
  __int64 v11[128]; // [rsp+120h] [rbp-1428h] BYREF
  WCHAR OutputString[2048]; // [rsp+520h] [rbp-1028h] BYREF

  LOBYTE(v9) = 0;
  result = sub_18000E764(a1, a2, a3, a4, a5, a6, 2, a7, a8, v9, OutputString, 2048, (__int64)v11, 1024, (__int64)v10);
  if ( (v10[4] & 1) != 0 )
    sub_18000FA88(v10);
  return result;
}
