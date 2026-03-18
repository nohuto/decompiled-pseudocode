/*
 * XREFs of PopQueryPowerButtonSuppressionCount @ 0x14087895C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C7F00 (PopCaptureSleepStudyStatistics.c)
 *     PopCalculateCsSummary @ 0x140591334 (PopCalculateCsSummary.c)
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
