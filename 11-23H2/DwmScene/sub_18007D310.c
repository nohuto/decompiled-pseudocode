/*
 * XREFs of sub_18007D310 @ 0x18007D310
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_1800105A8 @ 0x1800105A8 (sub_1800105A8.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18004D8C4 @ 0x18004D8C4 (sub_18004D8C4.c)
 *     sub_18004FBD8 @ 0x18004FBD8 (sub_18004FBD8.c)
 *     sub_18005EA14 @ 0x18005EA14 (sub_18005EA14.c)
 *     sub_180063D24 @ 0x180063D24 (sub_180063D24.c)
 *     sub_18007CA8C @ 0x18007CA8C (sub_18007CA8C.c)
 *     sub_18007CD0C @ 0x18007CD0C (sub_18007CD0C.c)
 *     sub_18007D430 @ 0x18007D430 (sub_18007D430.c)
 *     sub_180098B8C @ 0x180098B8C (sub_180098B8C.c)
 *     sub_180099DE8 @ 0x180099DE8 (sub_180099DE8.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18007D310(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // r8
  __int64 v6; // r8
  __m128i v8; // [rsp+20h] [rbp-19h] BYREF
  void *v9[2]; // [rsp+30h] [rbp-9h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp+7h] BYREF
  __int64 v11[3]; // [rsp+50h] [rbp+17h] BYREF
  _QWORD v12[4]; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v13; // [rsp+88h] [rbp+4Fh] BYREF

  LOBYTE(a3) = 1;
  sub_180099DE8(a1, a2, a3);
  sub_18007CD0C(a1, a2);
  sub_18007D430(a1, a2);
  sub_180017648(v12, (__int64)&unk_1801D7E68);
  v8.m128i_i64[0] = (__int64)v12;
  v8.m128i_i64[1] = (__int64)&v13;
  sub_180063D24((__int64 *)v9, &v8);
  sub_18000B4B0((__int64)v12, 32LL, 1LL);
  sub_18005EA14(v8.m128i_i64, v9, v5);
  v8 = (__m128i)(unsigned __int64)sub_18004FBD8(a2, (void **)&v8);
  v10[0] = &v8;
  v10[1] = v9;
  sub_18007CA8C(v11, (__int64)v10, v6);
  sub_180098B8C(a1, a2, v11);
  sub_1800105A8((__int64)v11);
  return sub_18004D8C4(v9, (__int64)v9);
}
