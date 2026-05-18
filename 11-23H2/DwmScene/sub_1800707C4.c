/*
 * XREFs of sub_1800707C4 @ 0x1800707C4
 * Callers:
 *     sub_180025598 @ 0x180025598 (sub_180025598.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000C8C8 @ 0x18000C8C8 (sub_18000C8C8.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_180017C00 @ 0x180017C00 (sub_180017C00.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_180027C80 @ 0x180027C80 (sub_180027C80.c)
 */

// Hidden C++ exception states: #wind=2
void **__fastcall sub_1800707C4(void **a1)
{
  int v2; // edi
  _BYTE *v3; // r14
  _OWORD *v4; // rbp
  __int64 v5; // rsi
  _QWORD *v6; // rax
  _BYTE *v7; // rax
  _BYTE v9[32]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-48h] BYREF

  sub_18000C8C8((__int64)a1, 40LL, 64LL);
  v2 = 0;
  v3 = a1;
  v4 = a1 + 1;
  v5 = 31LL;
  do
  {
    sub_180027C80((__int64)v9, v2);
    v6 = sub_18001C6E8(v10, (__int64)"System", v9);
    sub_180017C00(v4, (__int64)v6);
    sub_180011B24((__int64)v10);
    sub_180011B24((__int64)v9);
    *v3 = 1;
    ++v2;
    v4 = (_OWORD *)((char *)v4 + 40);
    v3 += 40;
  }
  while ( v2 <= 31 );
  sub_180011BA0(a1 + 1, "System0_Enable", 0xEuLL);
  sub_180011BA0(a1 + 6, "System1_Visible", 0xFuLL);
  sub_180011BA0(a1 + 11, "System2_VisibleTree", 0x13uLL);
  sub_180011BA0(a1 + 16, "System3_Renderable", 0x12uLL);
  sub_180011BA0(a1 + 21, "System4_Debug", 0xDuLL);
  sub_180011BA0(a1 + 26, "System5_Loading", 0xFuLL);
  sub_180011BA0(a1 + 41, "System8_Transparent", 0x13uLL);
  sub_180011BA0(a1 + 46, "System9_OpaqueMask", 0x12uLL);
  sub_180011BA0(a1 + 81, "System16_ShadowCaster", 0x15uLL);
  v7 = a1 + 160;
  do
  {
    *v7 = 0;
    v7 += 40;
    --v5;
  }
  while ( v5 );
  return a1;
}
