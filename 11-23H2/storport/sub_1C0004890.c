/*
 * XREFs of sub_1C0004890 @ 0x1C0004890
 * Callers:
 *     sub_1C00011C0 @ 0x1C00011C0 (sub_1C00011C0.c)
 *     sub_1C00013E0 @ 0x1C00013E0 (sub_1C00013E0.c)
 *     sub_1C00129D8 @ 0x1C00129D8 (sub_1C00129D8.c)
 *     sub_1C0012AE4 @ 0x1C0012AE4 (sub_1C0012AE4.c)
 *     sub_1C0013D54 @ 0x1C0013D54 (sub_1C0013D54.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x1C0016FE4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_1C001DDAC @ 0x1C001DDAC (sub_1C001DDAC.c)
 *     sub_1C0022594 @ 0x1C0022594 (sub_1C0022594.c)
 *     sub_1C0022C18 @ 0x1C0022C18 (sub_1C0022C18.c)
 *     sub_1C0022DB0 @ 0x1C0022DB0 (sub_1C0022DB0.c)
 *     sub_1C0026290 @ 0x1C0026290 (sub_1C0026290.c)
 *     sub_1C0026320 @ 0x1C0026320 (sub_1C0026320.c)
 *     sub_1C004DB9C @ 0x1C004DB9C (sub_1C004DB9C.c)
 *     sub_1C004DC78 @ 0x1C004DC78 (sub_1C004DC78.c)
 *     sub_1C004EDF0 @ 0x1C004EDF0 (sub_1C004EDF0.c)
 *     sub_1C004F2C0 @ 0x1C004F2C0 (sub_1C004F2C0.c)
 *     sub_1C004F920 @ 0x1C004F920 (sub_1C004F920.c)
 *     sub_1C004FCC0 @ 0x1C004FCC0 (sub_1C004FCC0.c)
 *     sub_1C005D530 @ 0x1C005D530 (sub_1C005D530.c)
 *     sub_1C00A25F4 @ 0x1C00A25F4 (sub_1C00A25F4.c)
 *     sub_1C00A2788 @ 0x1C00A2788 (sub_1C00A2788.c)
 *     sub_1C00A408C @ 0x1C00A408C (sub_1C00A408C.c)
 *     sub_1C00AB070 @ 0x1C00AB070 (sub_1C00AB070.c)
 * Callees:
 *     sub_1C0018524 @ 0x1C0018524 (sub_1C0018524.c)
 *     sub_1C0022E74 @ 0x1C0022E74 (sub_1C0022E74.c)
 */

char __fastcall sub_1C0004890(__int64 a1, int a2)
{
  __int64 v2; // rbx
  char v3; // di
  __int64 v4; // rsi
  __int64 v6; // rcx
  _DWORD *v7; // r9
  __int64 v8; // rcx
  _DWORD *v9; // r9
  __int64 v10; // rcx
  _DWORD *v11; // r9

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v4 = a2;
  if ( **(_DWORD **)(v2 + 568) == 208 )
  {
    if ( (*(_BYTE *)(v2 + 584) & 8) != 0 )
      return *(_BYTE *)(v4 + v2 + 592);
    *(_QWORD *)(v2 + 592) = 0LL;
    *(_QWORD *)(v2 + 600) = 0LL;
    *(_DWORD *)(v2 + 588) = 12;
    if ( (unsigned __int8)sub_1C0022E74(v2 + 336, 0LL) )
      *v7 = 13;
    if ( (unsigned __int8)sub_1C0022E74(v6, 1LL) )
      *v9 = 14;
    if ( (unsigned __int8)sub_1C0022E74(v8, 4LL) )
      *v11 = 15;
    if ( (int)sub_1C0018524(v10, 0LL, v11) >= 0 )
    {
      *(_BYTE *)(v2 + 584) |= 8u;
      return *(_BYTE *)(v4 + v2 + 592);
    }
  }
  return v3;
}
