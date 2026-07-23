/*
 * XREFs of FsRtlRemoveLargeMcbEntry @ 0x1403AC040
 * Callers:
 *     FsRtlRemoveMcbEntry @ 0x14053D200 (FsRtlRemoveMcbEntry.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     FsRtlRemoveBaseMcbEntry @ 0x14033A340 (FsRtlRemoveBaseMcbEntry.c)
 */

void __stdcall FsRtlRemoveLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG SectorCount)
{
  unsigned int v3; // edi
  unsigned int v4; // esi

  v3 = SectorCount;
  v4 = Vbn;
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlRemoveBaseMcbEntry(&Mcb->BaseMcb, v4, v3);
  ExReleaseFastMutex(Mcb->GuardedMutex);
}
