/*
 * XREFs of PopSstDiagQueryResumeTimestamp @ 0x140AAA5C0
 * Callers:
 *     PopDiagTraceHiberStats @ 0x14098FA28 (PopDiagTraceHiberStats.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER PopSstDiagQueryResumeTimestamp()
{
  return (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C393D0);
}
