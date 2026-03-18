/*
 * XREFs of PpmCheckInit @ 0x140B74810
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

void *PpmCheckInit()
{
  void *result; // rax

  PpmCheckCurrentPipelineId = 6;
  LODWORD(PpmCheckDpc) = 787;
  qword_140C3C158 = (__int64)PpmCheckRun;
  qword_140C3C160 = 0LL;
  qword_140C3C118 = (__int64)PpmCheckPeriodicStart;
  qword_140C3C178 = 0LL;
  qword_140C3C150 = 0LL;
  LODWORD(PpmCheckStartDpc) = 787;
  qword_140C3C120 = 0LL;
  qword_140C3C138 = 0LL;
  qword_140C3C110 = 0LL;
  PpmCachedSystemAllowedCpuSet = 2097153LL;
  result = memset(&qword_140C38CE8, 0, 0x100uLL);
  PpmCheckExecutionLock = 0LL;
  return result;
}
