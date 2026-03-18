/*
 * XREFs of PopQueryPowerButtonSuppressionCount @ 0x140878E2C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C78A0 (PopCaptureSleepStudyStatistics.c)
 *     PopCalculateCsSummary @ 0x1405913C4 (PopCalculateCsSummary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopQueryPowerButtonSuppressionCount(_DWORD *a1)
{
  __int64 result; // rax

  result = (unsigned int)PopPowerButtonSuppressionActionCount;
  *a1 = PopPowerButtonSuppressionActionCount;
  return result;
}
