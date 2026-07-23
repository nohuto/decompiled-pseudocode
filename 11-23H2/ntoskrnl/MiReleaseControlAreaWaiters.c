/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x1402E41BC
 * Callers:
 *     MiReferenceExistingControlArea @ 0x14020EFE0 (MiReferenceExistingControlArea.c)
 *     MiReferenceControlArea @ 0x140288548 (MiReferenceControlArea.c)
 *     MiWriteComplete @ 0x1402F45B0 (MiWriteComplete.c)
 *     MiUnlockFlushMdl @ 0x14033EFA0 (MiUnlockFlushMdl.c)
 *     MiTrimSharedPage @ 0x1403A659C (MiTrimSharedPage.c)
 *     MiDeleteCachedSegment @ 0x140623EA4 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140624098 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x14062535C (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x1406363B0 (MiFlushComplete.c)
 *     MiLocateSharedPageViews @ 0x140636A30 (MiLocateSharedPageViews.c)
 *     MiReleasePageFileSectionInfo @ 0x14063BAC8 (MiReleasePageFileSectionInfo.c)
 *     MiDecrementLargeSubsections @ 0x14063CC44 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14063DEA8 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x14063EFC0 (MiPurgeBadFileOnlyPages.c)
 *     MiReferencePfBackedSection @ 0x14066A040 (MiReferencePfBackedSection.c)
 *     MiSegmentDelete @ 0x1406B0984 (MiSegmentDelete.c)
 *     MiCreateImageOrDataSection @ 0x140723550 (MiCreateImageOrDataSection.c)
 *     MiCreateNewSection @ 0x1407466E0 (MiCreateNewSection.c)
 * Callees:
 *     KeSignalGate @ 0x14035D4DC (KeSignalGate.c)
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
