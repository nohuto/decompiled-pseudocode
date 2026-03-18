/*
 * XREFs of PopSstDiagQueryResumeTimestamp @ 0x140AAA750
 * Callers:
 *     PopDiagTraceHiberStats @ 0x14098F828 (PopDiagTraceHiberStats.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER PopSstDiagQueryResumeTimestamp()
{
  return (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C39450);
}
