/*
 * XREFs of PpmResetPerformanceAccumulation @ 0x1403A69EC
 * Callers:
 *     PpmResetPerfTimes @ 0x1403A6910 (PpmResetPerfTimes.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall PpmResetPerformanceAccumulation(LARGE_INTEGER *a1)
{
  LARGE_INTEGER result; // rax

  if ( _bittest64((const signed __int64 *)&a1[4404], 0x27u) )
    a1[4225].QuadPart = __readmsr(0xDB2u);
  a1[4211].QuadPart = __rdtsc();
  result = KeQueryPerformanceCounter(0LL);
  a1[4215] = result;
  return result;
}
