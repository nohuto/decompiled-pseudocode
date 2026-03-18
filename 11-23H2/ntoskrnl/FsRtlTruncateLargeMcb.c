/*
 * XREFs of FsRtlTruncateLargeMcb @ 0x140339F70
 * Callers:
 *     FsRtlTruncateMcb @ 0x14053CF00 (FsRtlTruncateMcb.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     FsRtlTruncateBaseMcb @ 0x140339FB0 (FsRtlTruncateBaseMcb.c)
 */

void __stdcall FsRtlTruncateLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlTruncateBaseMcb(&Mcb->BaseMcb, Vbn);
  ExReleaseFastMutex(Mcb->GuardedMutex);
}
