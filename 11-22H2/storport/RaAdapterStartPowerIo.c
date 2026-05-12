/*
 * XREFs of RaAdapterStartPowerIo @ 0x1C004B4C4
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C004C25C (RaidPowerPassToMiniPort.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0008664 (RaSrbSetMiniportContext.c)
 *     RaidXrbDeallocateResources @ 0x1C0008A38 (RaidXrbDeallocateResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0008BAC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0008C08 (RaidAdapterExecuteXrb.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaAdapterStartPowerIo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v7; // rbp
  __int64 v10; // r15
  char v11; // al
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // esi

  v5 = *(_QWORD *)(a4 + 16);
  v7 = *(_QWORD *)(a1 + 64);
  v10 = 0LL;
  RaidZeroXrb(v5, a2, 0, 0LL);
  v11 = *(_BYTE *)(v5 + 16);
  *(_QWORD *)(v5 + 104) = 0LL;
  *(_QWORD *)(v5 + 160) = a2;
  *(_BYTE *)(v5 + 16) = v11 & 0xE3 | 4;
  *(_QWORD *)(v5 + 168) = a3;
  *(_QWORD *)(v5 + 216) = v7;
  if ( *(_BYTE *)(a3 + 2) == 40 )
  {
    v10 = a3;
    *(_QWORD *)(v5 + 176) = *(_QWORD *)(a3 + 80);
    *(_QWORD *)(v5 + 184) = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(a3 + 96) = v5;
    *(_QWORD *)(a3 + 80) = a2;
  }
  else
  {
    *(_QWORD *)(v5 + 176) = *(_QWORD *)(a3 + 48);
    *(_QWORD *)(v5 + 184) = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(a3 + 48) = v5;
  }
  RaSrbSetMiniportContext(v7, a3, *(_QWORD *)(a4 + 8));
  *(_QWORD *)(v5 + 656) = a5;
  if ( *(_BYTE *)(v7 + 4306) )
    v13 = RaidAdapterRaiseIrqlAndExecuteXrb(v7, v5);
  else
    v13 = RaidAdapterExecuteXrb(v7, (_QWORD *)v5, v12);
  v15 = v13;
  if ( v13 < 0 )
  {
    if ( *(_BYTE *)(a3 + 2) == 40 )
    {
      *(_QWORD *)(v10 + 64) = *(_QWORD *)(v5 + 184);
    }
    else
    {
      *(_QWORD *)(a3 + 48) = *(_QWORD *)(v5 + 176);
      *(_QWORD *)(a3 + 24) = *(_QWORD *)(v5 + 184);
    }
    RaidXrbDeallocateResources(v5, 0, v14);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_bfabe38cf0023b35987f16eff51d2245_Traceguids,
        v7,
        a2,
        *(_DWORD *)(a2 + 48));
    }
  }
  return v15;
}
