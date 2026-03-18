/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x1402E3F2C
 * Callers:
 *     MiReferenceExistingControlArea @ 0x14020EFE0 (MiReferenceExistingControlArea.c)
 *     MiReferenceControlArea @ 0x1402882B8 (MiReferenceControlArea.c)
 *     MiWriteComplete @ 0x1402F4320 (MiWriteComplete.c)
 *     MiUnlockFlushMdl @ 0x14033ED10 (MiUnlockFlushMdl.c)
 *     MiTrimSharedPage @ 0x1403A63BC (MiTrimSharedPage.c)
 *     MiDeleteCachedSegment @ 0x140623954 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140623B48 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x140624E0C (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x140635E60 (MiFlushComplete.c)
 *     MiLocateSharedPageViews @ 0x1406364E0 (MiLocateSharedPageViews.c)
 *     MiReleasePageFileSectionInfo @ 0x14063B578 (MiReleasePageFileSectionInfo.c)
 *     MiDecrementLargeSubsections @ 0x14063C6F4 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14063D958 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x14063EA70 (MiPurgeBadFileOnlyPages.c)
 *     MiReferencePfBackedSection @ 0x140669AF0 (MiReferencePfBackedSection.c)
 *     MiSegmentDelete @ 0x1406B0954 (MiSegmentDelete.c)
 *     MiCreateImageOrDataSection @ 0x140723350 (MiCreateImageOrDataSection.c)
 *     MiCreateNewSection @ 0x1407464F0 (MiCreateNewSection.c)
 * Callees:
 *     KeSignalGate @ 0x14035D33C (KeSignalGate.c)
 */

__int64 __fastcall MiReleaseControlAreaWaiters(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = KeSignalGate(a1 + 2, 1LL);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
