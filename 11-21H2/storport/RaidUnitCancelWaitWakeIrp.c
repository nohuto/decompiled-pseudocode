/*
 * XREFs of RaidUnitCancelWaitWakeIrp @ 0x1C0049D28
 * Callers:
 *     RaUnitDeregisterFromIdleDetection @ 0x1C001ED90 (RaUnitDeregisterFromIdleDetection.c)
 *     StorPortUnitDirectedPowerDownCompletion @ 0x1C004AF60 (StorPortUnitDirectedPowerDownCompletion.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C004B62C (StorPortUnitPoFxD0Completion.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C004B780 (StorPortUnitPoFxD3Completion.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 */

BOOLEAN __fastcall RaidUnitCancelWaitWakeIrp(__int64 a1)
{
  BOOLEAN v2; // di
  IRP *v3; // rcx

  v2 = 1;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v3 = *(IRP **)(*(_QWORD *)(a1 + 1744) + 72LL);
    if ( v3 )
    {
      v2 = IoCancelIrp(v3);
      *(_QWORD *)(*(_QWORD *)(a1 + 1744) + 72LL) = 0LL;
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
  return v2;
}
