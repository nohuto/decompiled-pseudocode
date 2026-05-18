/*
 * XREFs of sub_18000D318 @ 0x18000D318
 * Callers:
 *     sub_18000CAD4 @ 0x18000CAD4 (sub_18000CAD4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000E9F8 @ 0x18000E9F8 (sub_18000E9F8.c)
 *     _alloca_probe @ 0x1800FEE40 (_alloca_probe.c)
 */

__int64 __fastcall sub_18000D318(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v9; // [rsp+48h] [rbp-1500h]
  __int64 v10[20]; // [rsp+80h] [rbp-14C8h] BYREF
  __int64 v11[128]; // [rsp+120h] [rbp-1428h] BYREF
  WCHAR OutputString[2048]; // [rsp+520h] [rbp-1028h] BYREF

  LOBYTE(v9) = 0;
  return sub_18000E9F8(a1, a2, a3, a4, a5, a6, 2, a7, a8, v9, OutputString, 2048, (__int64)v11, 1024, (__int64)v10);
}
