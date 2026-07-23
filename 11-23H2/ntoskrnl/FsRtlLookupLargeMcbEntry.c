/*
 * XREFs of FsRtlLookupLargeMcbEntry @ 0x1403A2600
 * Callers:
 *     FsRtlLookupMcbEntry @ 0x14053D150 (FsRtlLookupMcbEntry.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     FsRtlLookupBaseMcbEntry @ 0x14032F8F0 (FsRtlLookupBaseMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlLookupLargeMcbEntry(
        PLARGE_MCB Mcb,
        LONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCountFromLbn,
        PLONGLONG StartingLbn,
        PLONGLONG SectorCountFromStartingLbn,
        PULONG Index)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCountFromLbn) = FsRtlLookupBaseMcbEntry(
                                 &Mcb->BaseMcb,
                                 Vbn,
                                 Lbn,
                                 SectorCountFromLbn,
                                 StartingLbn,
                                 SectorCountFromStartingLbn,
                                 Index);
  ExReleaseFastMutex(Mcb->GuardedMutex);
  return (unsigned __int8)SectorCountFromLbn;
}
