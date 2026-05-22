/*
 * XREFs of PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___4 @ 0x180001C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___4()
{
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  return QueryPerformanceFrequency(&Frequency);
}
