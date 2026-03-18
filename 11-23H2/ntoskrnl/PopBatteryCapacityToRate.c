/*
 * XREFs of PopBatteryCapacityToRate @ 0x140598BDC
 * Callers:
 *     PopCalculateCsSummary @ 0x140591334 (PopCalculateCsSummary.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x14099C8E4 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopBatteryCapacityToRate(unsigned int a1, unsigned __int64 a2)
{
  if ( a2 )
    return 3600000000u * (unsigned __int64)a1 / a2;
  else
    return 0LL;
}
