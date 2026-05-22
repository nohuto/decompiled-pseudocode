/*
 * XREFs of PerfCounter::_dynamic_initializer_for__c_ticksPerSecond__ @ 0x180001F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL PerfCounter::_dynamic_initializer_for__c_ticksPerSecond__()
{
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  return QueryPerformanceFrequency(&Frequency);
}
