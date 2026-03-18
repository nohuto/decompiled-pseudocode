/*
 * XREFs of FsRtlNumberOfRunsInLargeMcb @ 0x1403B0350
 * Callers:
 *     FsRtlNumberOfRunsInMcb @ 0x14053CC90 (FsRtlNumberOfRunsInMcb.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 */

ULONG __stdcall FsRtlNumberOfRunsInLargeMcb(PLARGE_MCB Mcb)
{
  ULONG PairCount; // ebx

  ExAcquireFastMutex(Mcb->GuardedMutex);
  PairCount = Mcb->BaseMcb.PairCount;
  ExReleaseFastMutex(Mcb->GuardedMutex);
  return PairCount;
}
