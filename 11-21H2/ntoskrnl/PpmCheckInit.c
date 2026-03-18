/*
 * XREFs of PpmCheckInit @ 0x140B2FD20
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *PpmCheckInit()
{
  void *result; // rax

  PpmCheckCurrentPipelineId = 6;
  LODWORD(PpmCheckDpc) = 787;
  qword_140C20418 = (__int64)PpmCheckRun;
  qword_140C20420 = 0LL;
  qword_140C20458 = (__int64)PpmCheckPeriodicStart;
  qword_140C20438 = 0LL;
  qword_140C20410 = 0LL;
  LODWORD(PpmCheckStartDpc) = 787;
  qword_140C20460 = 0LL;
  qword_140C20478 = 0LL;
  qword_140C20450 = 0LL;
  PpmCachedSystemAllowedCpuSet = 2097153LL;
  result = memset(&qword_140C1C9A8, 0, 0x100uLL);
  PpmCheckExecutionLock = 0LL;
  return result;
}
