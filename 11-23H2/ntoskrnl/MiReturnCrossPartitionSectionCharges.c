/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x14066B904
 * Callers:
 *     MiCleanSection @ 0x1402016FC (MiCleanSection.c)
 *     MiDeleteSubsectionPages @ 0x140218EF0 (MiDeleteSubsectionPages.c)
 *     MiDeleteControlArea @ 0x1402199D0 (MiDeleteControlArea.c)
 *     MiCreatePrototypePtes @ 0x14021BA80 (MiCreatePrototypePtes.c)
 *     MiFlushSectionInternal @ 0x1402759E0 (MiFlushSectionInternal.c)
 *     MiAddViewsForSection @ 0x140288A00 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x140289030 (MiReferenceActiveSubsection.c)
 *     MiAppendSubsectionChain @ 0x140293568 (MiAppendSubsectionChain.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14029CD14 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiUnmapViewSubsections @ 0x14029CEA0 (MiUnmapViewSubsections.c)
 *     MiFlushRelease @ 0x14029FC10 (MiFlushRelease.c)
 *     MiCheckControlArea @ 0x14029FE50 (MiCheckControlArea.c)
 *     MmUnmapViewInSystemCache @ 0x1402DA240 (MmUnmapViewInSystemCache.c)
 *     MmPurgeSection @ 0x1402DCB60 (MmPurgeSection.c)
 *     MiRemoveMappedPtes @ 0x1402E6870 (MiRemoveMappedPtes.c)
 *     MiDereferenceControlAreaPfnList @ 0x140339E00 (MiDereferenceControlAreaPfnList.c)
 *     MiReleaseFaultCharges @ 0x140363850 (MiReleaseFaultCharges.c)
 *     MiUpdateLastSubsectionSize @ 0x140366034 (MiUpdateLastSubsectionSize.c)
 *     MiDecrementSubsection @ 0x1403A686C (MiDecrementSubsection.c)
 *     MiDeleteCachedSegment @ 0x140623EA4 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140624098 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140624A84 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140625118 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x14062535C (MiProcessDeleteOnClose.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14062624C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x14062633C (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x14062644C (MiUpControlAreaRefs.c)
 *     MiRemoveSystemCacheReferences @ 0x14062F4BC (MiRemoveSystemCacheReferences.c)
 *     MiUpdateActiveSubsection @ 0x140636130 (MiUpdateActiveSubsection.c)
 *     MiSegmentDelete @ 0x1406B0984 (MiSegmentDelete.c)
 *     MiExtendSection @ 0x1407069E4 (MiExtendSection.c)
 *     MiChargeSegmentCommit @ 0x1407481F8 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x14065B8A4 (MiReturnCrossPartitionCharges.c)
 */

void __fastcall MiReturnCrossPartitionSectionCharges(__int64 a1, int a2, unsigned __int64 a3)
{
  char v4; // si
  unsigned __int64 v6; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v9; // zf
  signed __int32 v10; // eax

  v4 = a2;
  if ( a2 )
    MiReturnCommit(a1, a3);
  v6 = a3;
  if ( (unsigned __int16 *)a1 != MiSystemPartition )
    goto LABEL_13;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_13;
  if ( a3 + CachedResidentAvailable > 0x100 || a3 >= 0x80000 )
  {
LABEL_10:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v6 = a3 + (int)CachedResidentAvailable - 192;
    }
LABEL_13:
    if ( v6 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v6);
    goto LABEL_15;
  }
  while ( 1 )
  {
    v10 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
            CachedResidentAvailable + a3,
            CachedResidentAvailable);
    v9 = (_DWORD)CachedResidentAvailable == v10;
    LODWORD(CachedResidentAvailable) = v10;
    if ( v9 )
      break;
    if ( v10 == -1 || a3 + v10 > 0x100 )
      goto LABEL_10;
  }
LABEL_15:
  MiReturnCrossPartitionCharges(a1, 0, v4, a3);
}
