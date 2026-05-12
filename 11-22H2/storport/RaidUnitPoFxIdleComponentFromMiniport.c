/*
 * XREFs of RaidUnitPoFxIdleComponentFromMiniport @ 0x1C001A1F8
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0001770 (RaidUnitCompleteRequest.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007B98 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019810 (RaidPnPPassToMiniPort.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00610B0 (RaidUnitCompleteResetRequest.c)
 *     RaWmiPassToMiniPort @ 0x1C00A2B7C (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0008784 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
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
    _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1792) + 40LL));
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1792) + 160LL));
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  }
  v5 = *(_QWORD *)(v2 + 4896);
  if ( v5 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(v5 + 80));
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v2 + 4896) + 96LL));
  }
  return !v4 ? 0xC100000C : 0;
}
