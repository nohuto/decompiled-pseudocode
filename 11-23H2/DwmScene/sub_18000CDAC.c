/*
 * XREFs of sub_18000CDAC @ 0x18000CDAC
 * Callers:
 *     sub_18000CB18 @ 0x18000CB18 (sub_18000CB18.c)
 * Callees:
 *     sub_18000E764 @ 0x18000E764 (sub_18000E764.c)
 *     sub_18000FA88 @ 0x18000FA88 (sub_18000FA88.c)
 *     __alloca_probe @ 0x1800E3900 (__alloca_probe.c)
 */

void __fastcall __noreturn sub_18000CDAC(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v7; // [rsp+48h] [rbp-14E0h]
  int v8; // [rsp+58h] [rbp-14D0h]
  int v9; // [rsp+68h] [rbp-14C0h]
  __int64 v10[20]; // [rsp+80h] [rbp-14A8h] BYREF
  __int64 v11[128]; // [rsp+120h] [rbp-1408h] BYREF
  WCHAR OutputString[2052]; // [rsp+520h] [rbp-1008h] BYREF

  sub_18000E764(
    a1,
    a2,
    (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
    0,
    0LL,
    a6,
    3,
    a7,
    0LL,
    v7,
    OutputString,
    v8,
    (__int64)v11,
    v9,
    (__int64)v10);
  sub_18000FA88(v10);
}
