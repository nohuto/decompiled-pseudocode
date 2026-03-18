/*
 * XREFs of FsRtlGetNextLargeMcbEntry @ 0x140541090
 * Callers:
 *     FsRtlGetNextMcbEntry @ 0x140541100 (FsRtlGetNextMcbEntry.c)
 * Callees:
 *     FsRtlGetNextBaseMcbEntry @ 0x1402304D0 (FsRtlGetNextBaseMcbEntry.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
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
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return (unsigned __int8)Lbn;
}
