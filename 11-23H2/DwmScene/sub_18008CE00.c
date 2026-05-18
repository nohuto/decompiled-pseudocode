/*
 * XREFs of sub_18008CE00 @ 0x18008CE00
 * Callers:
 *     sub_1800727D0 @ 0x1800727D0 (sub_1800727D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800160D8 @ 0x1800160D8 (sub_1800160D8.c)
 *     sub_1800294DC @ 0x1800294DC (sub_1800294DC.c)
 *     sub_180048440 @ 0x180048440 (sub_180048440.c)
 *     sub_180049274 @ 0x180049274 (sub_180049274.c)
 *     sub_180049288 @ 0x180049288 (sub_180049288.c)
 *     sub_1800496A8 @ 0x1800496A8 (sub_1800496A8.c)
 *     sub_1800497F8 @ 0x1800497F8 (sub_1800497F8.c)
 *     sub_180049A80 @ 0x180049A80 (sub_180049A80.c)
 *     sub_180049B14 @ 0x180049B14 (sub_180049B14.c)
 *     sub_180049D94 @ 0x180049D94 (sub_180049D94.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18008CE00(__int64 *a1, __int64 a2)
{
  __int64 v4; // r8
  _OWORD v6[2]; // [rsp+30h] [rbp-69h] BYREF
  _OWORD v7[3]; // [rsp+50h] [rbp-49h] BYREF
  _OWORD v8[3]; // [rsp+80h] [rbp-19h] BYREF
  int v9; // [rsp+B0h] [rbp+17h]
  int v10; // [rsp+B4h] [rbp+1Bh]
  int v11; // [rsp+B8h] [rbp+1Fh]

  sub_1800294DC((__int64)v7, 12LL, 4LL, sub_180010200);
  sub_1800294DC((__int64)v6, 8LL, 4LL, (__int64 (__fastcall *)(__int64))sub_180017900);
  sub_1800294DC((__int64)v8, 12LL, 4LL, sub_180010200);
  v7[0] = xmmword_180108530;
  v7[1] = xmmword_180108550;
  v7[2] = xmmword_18019BA40;
  v8[0] = xmmword_18019B7C0;
  v8[1] = xmmword_18019B780;
  v8[2] = xmmword_18019BA10;
  v6[0] = xmmword_18019BA30;
  v6[1] = xmmword_18019B7C0;
  v9 = 0x10000;
  v10 = 65538;
  v11 = 131075;
  sub_1800160D8(a2, a1);
  sub_180049D94(*a1, 4);
  sub_180049274(*a1, 6);
  sub_180049A80(*a1);
  sub_1800497F8(*a1);
  sub_180049288(*a1);
  sub_1800496A8(*a1);
  sub_180049B14(*a1);
  sub_180048440(*a1, 0LL, v4);
  return a1;
}
