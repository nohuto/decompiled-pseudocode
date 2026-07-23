/*
 * XREFs of FsRtlSplitLargeMcb @ 0x14053D3D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     FsRtlSplitBaseMcb @ 0x14053D260 (FsRtlSplitBaseMcb.c)
 */

BOOLEAN __stdcall FsRtlSplitLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Amount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(Amount) = FsRtlSplitBaseMcb(&Mcb->BaseMcb, Vbn, Amount);
  ExReleaseFastMutex(Mcb->GuardedMutex);
  return Amount;
}
