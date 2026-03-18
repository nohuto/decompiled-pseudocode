/*
 * XREFs of FsRtlAddLargeMcbEntry @ 0x14022BC00
 * Callers:
 *     FsRtlAddMcbEntry @ 0x140541070 (FsRtlAddMcbEntry.c)
 * Callees:
 *     FsRtlAddBaseMcbEntryEx @ 0x14022C220 (FsRtlAddBaseMcbEntryEx.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 */

BOOLEAN __stdcall FsRtlAddLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCount) = FsRtlAddBaseMcbEntryEx(&Mcb->BaseMcb, Vbn, Lbn, SectorCount) >= 0;
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return SectorCount;
}
