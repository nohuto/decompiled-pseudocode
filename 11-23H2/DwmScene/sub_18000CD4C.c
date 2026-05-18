/*
 * XREFs of sub_18000CD4C @ 0x18000CD4C
 * Callers:
 *     sub_18000DAB4 @ 0x18000DAB4 (sub_18000DAB4.c)
 * Callees:
 *     sub_18000CB18 @ 0x18000CB18 (sub_18000CB18.c)
 *     sub_18000E55C @ 0x18000E55C (sub_18000E55C.c)
 */

void __fastcall __noreturn sub_18000CD4C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v6; // r8d
  int v7; // r9d
  int v8; // [rsp+20h] [rbp-58h]
  __int64 v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-18h] BYREF
  int v12; // [rsp+68h] [rbp-10h]

  LODWORD(v9) = -2147418113;
  HIDWORD(v9) = sub_18000E55C(2147549183LL);
  LOBYTE(v10) = 0;
  v12 = v10;
  v11 = v9;
  sub_18000CB18(v6, 2925, v6, v7, v8, a6, (__int64)&v11);
}
