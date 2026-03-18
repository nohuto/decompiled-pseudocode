/*
 * XREFs of FsRtlAddLargeMcbEntry @ 0x140339F00
 * Callers:
 *     FsRtlAddMcbEntry @ 0x14053CA60 (FsRtlAddMcbEntry.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x14033A510 (FsRtlAddBaseMcbEntryEx.c)
 */

BOOLEAN __stdcall FsRtlAddLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCount) = FsRtlAddBaseMcbEntryEx(&Mcb->BaseMcb, Vbn, Lbn, SectorCount) >= 0;
  ExReleaseFastMutex(Mcb->GuardedMutex);
  return SectorCount;
}
