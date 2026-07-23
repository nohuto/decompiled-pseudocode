/*
 * XREFs of PopCalculateTotalHwDripsResidency @ 0x140591D80
 * Callers:
 *     PopCalculateCsSummary @ 0x140591824 (PopCalculateCsSummary.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140993454 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopCalculateTotalHwDripsResidency(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdx

  if ( a1 == -1LL || a2 == -1LL )
    return -1LL;
  if ( a2 < a1 )
    return 0LL;
  v3 = a2 - a1;
  if ( v3 > a3 )
    return a3;
  return v3;
}
