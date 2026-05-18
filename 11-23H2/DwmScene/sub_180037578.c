/*
 * XREFs of sub_180037578 @ 0x180037578
 * Callers:
 *     sub_180033CA0 @ 0x180033CA0 (sub_180033CA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 *     sub_180024BC0 @ 0x180024BC0 (sub_180024BC0.c)
 *     sub_18003212C @ 0x18003212C (sub_18003212C.c)
 *     sub_1800328A0 @ 0x1800328A0 (sub_1800328A0.c)
 *     sub_1800340DC @ 0x1800340DC (sub_1800340DC.c)
 *     sub_1800A043C @ 0x1800A043C (sub_1800A043C.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180037578(__int64 a1)
{
  __int64 v2; // rdi
  _DWORD *v3; // rbx
  _QWORD *v4; // rax
  float v5; // xmm0_4
  __int64 v6; // rax
  float v7; // xmm1_4
  __int64 v8; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9; // [rsp+28h] [rbp-60h]
  _BYTE v10[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v12[4]; // [rsp+40h] [rbp-48h] BYREF

  sub_1800340DC(a1, &v8);
  v2 = v8;
  v3 = (_DWORD *)sub_1800A043C(v8, v10);
  v4 = sub_180011CA0(&v11);
  v5 = sub_180024BC0(*(_DWORD *)v4 - *v3);
  v6 = *(_QWORD *)(v2 + 280);
  if ( *(_QWORD *)(v2 + 272) == v6 )
    v7 = -3.4028235e38;
  else
    v7 = *(float *)(v6 - 4);
  sub_18001E3BC(v12, (__int64)L"CPU");
  sub_18003212C((char *)(a1 + 1392), (char *)v12);
  sub_180013348((__int64)v12);
  sub_1800328A0(a1 + 1368, v5 - v7);
  if ( v9 )
    sub_180010530(v9);
}
