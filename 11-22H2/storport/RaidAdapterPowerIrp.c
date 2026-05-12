/*
 * XREFs of RaidAdapterPowerIrp @ 0x1C0011558
 * Callers:
 *     RaDriverPowerIrp @ 0x1C00114B0 (RaDriverPowerIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007534 (RaidAcquireAdapterRemoveLock.c)
 *     RaidAdapterSetPowerIrp @ 0x1C00117C8 (RaidAdapterSetPowerIrp.c)
 *     RaidAdapterQueryPowerIrp @ 0x1C0011A78 (RaidAdapterQueryPowerIrp.c)
 *     RaForwardIrp @ 0x1C0013754 (RaForwardIrp.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C003EB54 (WPP_SF_qqDD.c)
 */

__int64 __fastcall RaidAdapterPowerIrp(__int64 a1, IRP *a2)
{
  signed int v4; // eax
  int MinorFunction; // ebp
  unsigned int PowerIrp; // eax
  unsigned int v7; // ebx
  __int64 v9; // rbx

  v4 = RaidAcquireAdapterRemoveLock(a1);
  if ( v4 < 0 )
  {
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, v4);
  }
  else
  {
    MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        11LL,
        &WPP_bfabe38cf0023b35987f16eff51d2245_Traceguids,
        a1,
        a2,
        MinorFunction);
    }
    if ( MinorFunction == 2 )
    {
      PowerIrp = RaidAdapterSetPowerIrp(a1, a2);
    }
    else if ( MinorFunction == 3 )
    {
      PowerIrp = RaidAdapterQueryPowerIrp(a1, a2);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 24);
      PoStartNextPowerIrp(a2);
      PowerIrp = RaForwardIrp(v9, a2);
    }
    v7 = PowerIrp;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqDD(
        WPP_GLOBAL_Control->AttachedDevice,
        12LL,
        &WPP_bfabe38cf0023b35987f16eff51d2245_Traceguids,
        a1,
        a2,
        MinorFunction,
        PowerIrp);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 296));
    return v7;
  }
}
