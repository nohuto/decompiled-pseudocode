/*
 * XREFs of FsRtlGetNextLargeMcbEntry @ 0x1403A6710
 * Callers:
 *     FsRtlGetNextMcbEntry @ 0x14053CA80 (FsRtlGetNextMcbEntry.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     FsRtlGetNextBaseMcbEntry @ 0x14033E790 (FsRtlGetNextBaseMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlGetNextLargeMcbEntry(
        PLARGE_MCB Mcb,
        ULONG RunIndex,
        PLONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(Lbn) = FsRtlGetNextBaseMcbEntry(&Mcb->BaseMcb, RunIndex, Vbn, Lbn, SectorCount);
  ExReleaseFastMutex(Mcb->GuardedMutex);
  return (unsigned __int8)Lbn;
}
