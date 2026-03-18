/*
 * XREFs of CalculateTimeDurationIn100ns @ 0x1C00179B4
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0005860 (NVMeHwAdapterControl.c)
 *     IoQueuesCreationAsync @ 0x1C0006850 (IoQueuesCreationAsync.c)
 *     IoQueuesCreation @ 0x1C0017D90 (IoQueuesCreation.c)
 *     NVMeIsAllowedWithinThrottleLimit @ 0x1C001DEC8 (NVMeIsAllowedWithinThrottleLimit.c)
 *     RecordCommandTimingHistory @ 0x1C0025214 (RecordCommandTimingHistory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CalculateTimeDurationIn100ns(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    return 10000 * (1000 * (a1 % a2) % a2) / a2 + 10000 * (1000 * (a1 % a2) / a2 + 1000 * (a1 / a2));
  return v2;
}
