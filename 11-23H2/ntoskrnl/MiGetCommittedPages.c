/*
 * XREFs of MiGetCommittedPages @ 0x1402197C0
 * Callers:
 *     MiDeleteSegmentPages @ 0x140219670 (MiDeleteSegmentPages.c)
 *     MiCreatePrototypePtes @ 0x14021BA80 (MiCreatePrototypePtes.c)
 *     MiReferenceActiveSubsection @ 0x140288DA0 (MiReferenceActiveSubsection.c)
 *     MiSetPagesModified @ 0x1406288FC (MiSetPagesModified.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x14066B0C8 (MiComputeCrossPartitionSectionCharges.c)
 *     MiMapViewOfDataSection @ 0x140720280 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x140722020 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1407223A0 (MiRemoveSharedCommitNode.c)
 *     MiInitializeImageExtents @ 0x140A33E8C (MiInitializeImageExtents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetCommittedPages(_QWORD *a1)
{
  if ( a1[8] )
    return *(_QWORD *)(*a1 + 16LL);
  else
    return a1[15] & 0xFFFFFFFFFLL;
}
