/*
 * XREFs of MiRemoveUnusedSegment @ 0x140219970
 * Callers:
 *     MmGetImageFileSignatureInformation @ 0x14020F0B0 (MmGetImageFileSignatureInformation.c)
 *     MiPrepareSegmentForDeletion @ 0x1402197EC (MiPrepareSegmentForDeletion.c)
 *     MiReferenceActiveControlArea @ 0x140219910 (MiReferenceActiveControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x140339C78 (MiCheckForControlAreaDeletion.c)
 *     MiAttemptSectionDelete @ 0x14035F720 (MiAttemptSectionDelete.c)
 *     MiPreventControlAreaDeletion @ 0x1403A65A8 (MiPreventControlAreaDeletion.c)
 *     MiDeleteCachedSubsection @ 0x140623B48 (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x140625DEC (MiSetDeleteOnClose.c)
 *     MiReferencePfBackedSection @ 0x140669AF0 (MiReferencePfBackedSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x1402A0F98 (MiUnlinkUnusedControlArea.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
  {
    v2 = *(_QWORD *)(qword_140C673C8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1408));
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1408));
  }
}
