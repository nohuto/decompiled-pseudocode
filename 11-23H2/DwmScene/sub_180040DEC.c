/*
 * XREFs of sub_180040DEC @ 0x180040DEC
 * Callers:
 *     sub_180066A60 @ 0x180066A60 (sub_180066A60.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_180040E74 @ 0x180040E74 (sub_180040E74.c)
 *     sub_1800410C0 @ 0x1800410C0 (sub_1800410C0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180040DEC(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rax
  _BYTE v9[16]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v10[5]; // [rsp+38h] [rbp-60h] BYREF

  v10[4] = a3;
  v6 = sub_180012440(v10, a3);
  v7 = sub_1800410C0(a1, v9, v6);
  sub_180040E74(a1, a2, v7);
  sub_180013348(a3);
  return a2;
}
