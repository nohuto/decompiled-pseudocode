/*
 * XREFs of FsRtlNumberOfRunsInLargeMcb @ 0x1403B0530
 * Callers:
 *     FsRtlNumberOfRunsInMcb @ 0x14053D1E0 (FsRtlNumberOfRunsInMcb.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 */

ULONG __stdcall FsRtlNumberOfRunsInLargeMcb(PLARGE_MCB Mcb)
{
  ULONG PairCount; // ebx

  ExAcquireFastMutex(Mcb->GuardedMutex);
  PairCount = Mcb->BaseMcb.PairCount;
  ExReleaseFastMutex(Mcb->GuardedMutex);
  return PairCount;
}
