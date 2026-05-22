/*
 * XREFs of PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___0 @ 0x180001FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___0()
{
  LARGE_INTEGER result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceFrequency(&Frequency);
  result = Frequency;
  qword_1802778B0 = Frequency.QuadPart;
  return result;
}
