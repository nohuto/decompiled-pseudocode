/*
 * XREFs of RaUnitQueueCounterSetCallback @ 0x1C005E270
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitSendInstanceCounters @ 0x1C005E484 (RaUnitSendInstanceCounters.c)
 */

__int64 __fastcall RaUnitQueueCounterSetCallback(int a1, int a2)
{
  __int64 v3; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  return RaUnitSendInstanceCounters(
           a1,
           a2,
           (unsigned int)&v3,
           8,
           (__int64)&StorpTelemetryGetUnitQueueCounters,
           (__int64)SpPerfAddUnitQueueCounterSet);
}
