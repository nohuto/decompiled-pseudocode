/*
 * XREFs of MiRemoveUnusedSegment @ 0x140219970
 * Callers:
 *     MmGetImageFileSignatureInformation @ 0x14020F0B0 (MmGetImageFileSignatureInformation.c)
 *     MiPrepareSegmentForDeletion @ 0x1402197EC (MiPrepareSegmentForDeletion.c)
 *     MiReferenceActiveControlArea @ 0x140219910 (MiReferenceActiveControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x140339F08 (MiCheckForControlAreaDeletion.c)
 *     MiAttemptSectionDelete @ 0x14035F8C0 (MiAttemptSectionDelete.c)
 *     MiPreventControlAreaDeletion @ 0x1403A6788 (MiPreventControlAreaDeletion.c)
 *     MiDeleteCachedSubsection @ 0x140624098 (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x14062633C (MiSetDeleteOnClose.c)
 *     MiReferencePfBackedSection @ 0x14066A040 (MiReferencePfBackedSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x1402A1228 (MiUnlinkUnusedControlArea.c)
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
