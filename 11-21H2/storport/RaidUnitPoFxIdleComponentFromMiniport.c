/*
 * XREFs of RaidUnitPoFxIdleComponentFromMiniport @ 0x1C003B960
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidPnPPassToMiniPort @ 0x1C001D6D0 (RaidPnPPassToMiniPort.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00546E0 (RaidUnitCompleteResetRequest.c)
 *     RaWmiPassToMiniPort @ 0x1C0089714 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C00117BC (RaidUnitPoFxIdleComponent.c)
 */

__int64 __fastcall RaidUnitPoFxIdleComponentFromMiniport(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  bool v4; // di
  __int64 v5; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v4 = RaidUnitPoFxIdleComponent(a1, a2, 0, 0LL);
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1744) + 40LL));
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1744) + 160LL));
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
  v5 = *(_QWORD *)(v2 + 4832);
  if ( v5 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(v5 + 80));
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v2 + 4832) + 96LL));
  }
  return !v4 ? 0xC100000C : 0;
}
