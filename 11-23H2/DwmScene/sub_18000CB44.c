/*
 * XREFs of sub_18000CB44 @ 0x18000CB44
 * Callers:
 *     sub_18000FBAC @ 0x18000FBAC (sub_18000FBAC.c)
 * Callees:
 *     sub_18000CB18 @ 0x18000CB18 (sub_18000CB18.c)
 *     sub_18000DFD4 @ 0x18000DFD4 (sub_18000DFD4.c)
 *     sub_18000E55C @ 0x18000E55C (sub_18000E55C.c)
 */

void __fastcall __noreturn sub_18000CB44(int a1, int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  int v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-18h] BYREF
  int v15; // [rsp+68h] [rbp-10h]

  v8 = sub_18000DFD4(a1, a2, (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h", a4);
  if ( v8 > 0 )
    v8 = (unsigned __int16)v8 | 0x80070000;
  LODWORD(v12) = v8;
  HIDWORD(v12) = sub_18000E55C((unsigned int)v8);
  LOBYTE(v13) = 0;
  v15 = v13;
  v14 = v12;
  sub_18000CB18(a1, a2, v9, v10, v11, a6, (__int64)&v14);
}
