/*
 * XREFs of sub_1800DEF90 @ 0x1800DEF90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_1800DC7E0 @ 0x1800DC7E0 (sub_1800DC7E0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DEF90(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 **v8; // rax
  _QWORD v10[5]; // [rsp+28h] [rbp-60h] BYREF

  v10[4] = a3;
  v8 = (__int64 **)sub_180012440(v10, a3);
  LODWORD(a1) = sub_1800DC7E0(a1, a2, v8, a4);
  sub_180013348(a3);
  return (unsigned int)a1;
}
