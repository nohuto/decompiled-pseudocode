/*
 * XREFs of FsRtlLookupLastLargeMcbEntry @ 0x14053CBD0
 * Callers:
 *     FsRtlLookupLastMcbEntry @ 0x14053CC50 (FsRtlLookupLastMcbEntry.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     FsRtlLookupLastBaseMcbEntry @ 0x140341460 (FsRtlLookupLastBaseMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlLookupLastLargeMcbEntry(PLARGE_MCB Mcb, PLONGLONG Vbn, PLONGLONG Lbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(Lbn) = FsRtlLookupLastBaseMcbEntry(&Mcb->BaseMcb, Vbn, Lbn);
  ExReleaseFastMutex(Mcb->GuardedMutex);
  return (unsigned __int8)Lbn;
}
