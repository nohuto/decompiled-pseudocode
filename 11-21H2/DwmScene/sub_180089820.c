/*
 * XREFs of sub_180089820 @ 0x180089820
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18005470C @ 0x18005470C (sub_18005470C.c)
 *     sub_180056C78 @ 0x180056C78 (sub_180056C78.c)
 *     sub_180067498 @ 0x180067498 (sub_180067498.c)
 *     sub_18006C3A8 @ 0x18006C3A8 (sub_18006C3A8.c)
 *     sub_180088E2C @ 0x180088E2C (sub_180088E2C.c)
 *     sub_18008918C @ 0x18008918C (sub_18008918C.c)
 *     sub_180089950 @ 0x180089950 (sub_180089950.c)
 *     sub_1800A956C @ 0x1800A956C (sub_1800A956C.c)
 *     sub_1800AAA68 @ 0x1800AAA68 (sub_1800AAA68.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180089820(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rax
  __m128i v7; // [rsp+20h] [rbp-19h] BYREF
  __int64 v8[2]; // [rsp+30h] [rbp-9h] BYREF
  __int64 v9[2]; // [rsp+40h] [rbp+7h] BYREF
  char *v10[3]; // [rsp+50h] [rbp+17h] BYREF
  __int64 v11[4]; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v12; // [rsp+88h] [rbp+4Fh] BYREF

  LOBYTE(a3) = 1;
  sub_1800AAA68(a1, a2, a3);
  sub_18008918C(a1, a2);
  sub_180089950(a1, a2);
  sub_18001875C(v11, (__int64)&qword_1801F5D98);
  v7.m128i_i64[0] = (__int64)v11;
  v7.m128i_i64[1] = (__int64)&v12;
  sub_18006C3A8((__int64)v9, &v7);
  sub_18000B4C0((__int64)v11, 32LL, 1LL);
  v5 = sub_180067498(v8, v9);
  v7 = (__m128i)(unsigned __int64)sub_180056C78(a2, v5);
  v8[0] = (__int64)&v7;
  v8[1] = (__int64)v8;
  sub_180088E2C(v10, (__int64)v8);
  sub_1800A956C(a1, a2, v10);
  if ( v10[0] )
    sub_180010884(v10[0], (v10[2] - v10[0]) & 0xFFFFFFFFFFFFFFF8uLL);
  return sub_18005470C(v9, (__int64)v9);
}
