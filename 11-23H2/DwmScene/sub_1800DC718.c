/*
 * XREFs of sub_1800DC718 @ 0x1800DC718
 * Callers:
 *     sub_1800DC7E0 @ 0x1800DC7E0 (sub_1800DC7E0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 *     sub_18003212C @ 0x18003212C (sub_18003212C.c)
 *     sub_1800DE488 @ 0x1800DE488 (sub_1800DE488.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800DC718(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdi
  char *v8; // [rsp+20h] [rbp-78h]
  _QWORD v9[6]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-40h] BYREF

  v4 = (__int64)a2;
  v9[4] = a2;
  v9[5] = a3;
  v5 = a1 + 64;
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  sub_18001E3BC(v10, (__int64)a2);
  v6 = sub_1800DE488(v5, v10);
  v8 = (char *)sub_180012440(v9, a3);
  sub_18003212C((char *)(v6 + 8), v8);
  *(_DWORD *)v6 = 0;
  sub_180013348((__int64)v8);
  sub_180013348((__int64)v10);
  sub_180013348(v4);
  return sub_180013348(a3);
}
