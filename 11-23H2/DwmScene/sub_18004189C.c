/*
 * XREFs of sub_18004189C @ 0x18004189C
 * Callers:
 *     sub_1800148B0 @ 0x1800148B0 (sub_1800148B0.c)
 *     sub_180015090 @ 0x180015090 (sub_180015090.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_1800401E8 @ 0x1800401E8 (sub_1800401E8.c)
 *     sub_1800410C0 @ 0x1800410C0 (sub_1800410C0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004189C(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+28h] [rbp-40h]
  _QWORD v12[5]; // [rsp+30h] [rbp-38h] BYREF

  v12[4] = a2;
  v4 = sub_180012440(v12, a2);
  v5 = sub_1800410C0(a1, &v10, (__int64)v4);
  LOBYTE(v6) = 1;
  sub_1800401E8(*v5 + 72LL, v6, v7, v8);
  if ( v11 )
    sub_180010530(v11);
  return sub_180013348(a2);
}
