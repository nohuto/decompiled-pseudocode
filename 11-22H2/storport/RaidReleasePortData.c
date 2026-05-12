/*
 * XREFs of RaidReleasePortData @ 0x1C00216D4
 * Callers:
 *     StorpLogStatistics @ 0x1C001B410 (StorpLogStatistics.c)
 *     StorEtwResetCounters @ 0x1C00214EC (StorEtwResetCounters.c)
 *     RaUnitGetInstances @ 0x1C005DD38 (RaUnitGetInstances.c)
 *     StorEtwEnableCallback @ 0x1C0067570 (StorEtwEnableCallback.c)
 *     RaDeleteDriver @ 0x1C00A8568 (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleasePortData(void *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    RaidpPortData = 0LL;
    ExFreePoolWithTag(a1, 0x44506152u);
  }
}
