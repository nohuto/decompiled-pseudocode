/*
 * XREFs of FsRtlTruncateLargeMcb @ 0x14033A200
 * Callers:
 *     FsRtlTruncateMcb @ 0x14053D450 (FsRtlTruncateMcb.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     FsRtlTruncateBaseMcb @ 0x14033A240 (FsRtlTruncateBaseMcb.c)
 */

void __stdcall FsRtlTruncateLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlTruncateBaseMcb(&Mcb->BaseMcb, Vbn);
  ExReleaseFastMutex(Mcb->GuardedMutex);
}
