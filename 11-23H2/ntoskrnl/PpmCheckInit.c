/*
 * XREFs of PpmCheckInit @ 0x140B74810
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *PpmCheckInit()
{
  void *result; // rax

  PpmCheckCurrentPipelineId = 6;
  LODWORD(PpmCheckDpc) = 787;
  qword_140C3C0B8 = (__int64)PpmCheckRun;
  qword_140C3C0C0 = 0LL;
  qword_140C3C078 = (__int64)PpmCheckPeriodicStart;
  qword_140C3C0D8 = 0LL;
  qword_140C3C0B0 = 0LL;
  LODWORD(PpmCheckStartDpc) = 787;
  qword_140C3C080 = 0LL;
  qword_140C3C098 = 0LL;
  qword_140C3C070 = 0LL;
  PpmCachedSystemAllowedCpuSet = 2097153LL;
  result = memset(&qword_140C38C88, 0, 0x100uLL);
  PpmCheckExecutionLock = 0LL;
  return result;
}
