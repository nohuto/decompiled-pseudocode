/*
 * XREFs of MiMarkFileOnlyPfnGood @ 0x14063E334
 * Callers:
 *     MiUnlinkBadPages @ 0x14062AD10 (MiUnlinkBadPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPfnReferenceCountIsZero @ 0x1402D8FE0 (MiPfnReferenceCountIsZero.c)
 *     MiUnlinkPageFromBadList @ 0x14064DFC4 (MiUnlinkPageFromBadList.c)
 */

void __fastcall MiMarkFileOnlyPfnGood(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0
    && !*(_WORD *)(a1 + 32)
    && ((*(_BYTE *)(a1 + 34) & 7) != 5 || *(__int64 *)(a1 + 40) < 0 || *(_QWORD *)(a1 + 8) || *(_QWORD *)(a1 + 16)) )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C6CEA0);
    MiUnlinkPageFromBadList(a1, 128LL);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6CEA0);
    *(_BYTE *)(a1 + 35) &= ~0x10u;
    MiPfnReferenceCountIsZero(a1, 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  }
}
