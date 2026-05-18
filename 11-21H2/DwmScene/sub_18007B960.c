/*
 * XREFs of sub_18007B960 @ 0x18007B960
 * Callers:
 *     sub_180027068 @ 0x180027068 (sub_180027068.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_180029A18 @ 0x180029A18 (sub_180029A18.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_18007B960(__int64 *a1)
{
  int v2; // r14d
  __int64 *v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  _BYTE *v7; // rax
  char *v9[3]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp-30h]
  char *v11[3]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+70h] [rbp-10h]

  sub_18000C8D4((__int64)a1, 40LL, 64LL);
  v2 = 0;
  v3 = a1 + 1;
  v4 = 31LL;
  do
  {
    sub_180029A18((__int64 *)v11, v2);
    v5 = sub_18001DD3C((__int64)v9, (__int64)"System", v11);
    if ( v3 != (__int64 *)v5 )
    {
      v6 = v3[3];
      if ( v6 >= 0x10 )
        sub_180010884((char *)*v3, v6 + 1);
      v3[2] = 0LL;
      v3[3] = 15LL;
      *(_BYTE *)v3 = 0;
      *(_OWORD *)v3 = *(_OWORD *)v5;
      *((_OWORD *)v3 + 1) = *(_OWORD *)(v5 + 16);
      *(_QWORD *)(v5 + 16) = 0LL;
      *(_QWORD *)(v5 + 24) = 15LL;
      *(_BYTE *)v5 = 0;
    }
    if ( v10 >= 0x10 )
      sub_180010884(v9[0], v10 + 1);
    v9[2] = 0LL;
    v10 = 15LL;
    LOBYTE(v9[0]) = 0;
    if ( v12 >= 0x10 )
      sub_180010884(v11[0], v12 + 1);
    *((_BYTE *)v3 - 8) = 1;
    ++v2;
    v3 += 5;
  }
  while ( v2 <= 31 );
  sub_180012190(a1 + 1, "System0_Enable", 0xEuLL);
  sub_180012190(a1 + 6, "System1_Visible", 0xFuLL);
  sub_180012190(a1 + 11, "System2_VisibleTree", 0x13uLL);
  sub_180012190(a1 + 16, "System3_Renderable", 0x12uLL);
  sub_180012190(a1 + 21, "System4_Debug", 0xDuLL);
  sub_180012190(a1 + 26, "System5_Loading", 0xFuLL);
  sub_180012190(a1 + 41, "System8_Transparent", 0x13uLL);
  sub_180012190(a1 + 46, "System9_OpaqueMask", 0x12uLL);
  sub_180012190(a1 + 81, "System16_ShadowCaster", 0x15uLL);
  v7 = a1 + 160;
  do
  {
    *v7 = 0;
    v7 += 40;
    --v4;
  }
  while ( v4 );
  return a1;
}
