/*
 * XREFs of sub_1800DC450 @ 0x1800DC450
 * Callers:
 *     sub_1800DC4E4 @ 0x1800DC4E4 (sub_1800DC4E4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 *     sub_1800DE488 @ 0x1800DE488 (sub_1800DE488.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800DC450(__int64 a1, _QWORD *a2, double a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  _QWORD v7[4]; // [rsp+28h] [rbp-40h] BYREF

  v3 = (__int64)a2;
  v4 = a1 + 64;
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  sub_18001E3BC(v7, (__int64)a2);
  v5 = sub_1800DE488(v4, v7);
  *(double *)(v5 + 48) = a3;
  *(_DWORD *)v5 = 2;
  sub_180013348((__int64)v7);
  return sub_180013348(v3);
}
