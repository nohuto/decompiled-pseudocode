/*
 * XREFs of PopQueryInputSuppressionCount @ 0x1407EAF7C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C7F00 (PopCaptureSleepStudyStatistics.c)
 *     PopCalculateCsSummary @ 0x140591334 (PopCalculateCsSummary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopQueryInputSuppressionCount(_DWORD *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&PopInputSuppressionActionCount, 0);
  *a1 = result;
  return result;
}
