/*
 * XREFs of PpmCheckInit @ 0x140B755B0
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

void *PpmCheckInit()
{
  void *result; // rax

  PpmCheckCurrentPipelineId = 6;
  LODWORD(PpmCheckDpc) = 787;
  qword_140C3C0F8 = (__int64)PpmCheckRun;
  qword_140C3C100 = 0LL;
  qword_140C3C198 = (__int64)PpmCheckPeriodicStart;
  qword_140C3C118 = 0LL;
  qword_140C3C0F0 = 0LL;
  LODWORD(PpmCheckStartDpc) = 787;
  qword_140C3C1A0 = 0LL;
  qword_140C3C1B8 = 0LL;
  qword_140C3C190 = 0LL;
  PpmCachedSystemAllowedCpuSet = 2097153LL;
  result = memset(&qword_140C38D08, 0, 0x100uLL);
  PpmCheckExecutionLock = 0LL;
  return result;
}
