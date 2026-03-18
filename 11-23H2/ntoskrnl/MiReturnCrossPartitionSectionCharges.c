/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x14066B3B4
 * Callers:
 *     MiCleanSection @ 0x1402016FC (MiCleanSection.c)
 *     MiDeleteSubsectionPages @ 0x140218EF0 (MiDeleteSubsectionPages.c)
 *     MiDeleteControlArea @ 0x1402199D0 (MiDeleteControlArea.c)
 *     MiCreatePrototypePtes @ 0x14021BA80 (MiCreatePrototypePtes.c)
 *     MiFlushSectionInternal @ 0x140275750 (MiFlushSectionInternal.c)
 *     MiAddViewsForSection @ 0x140288770 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x140288DA0 (MiReferenceActiveSubsection.c)
 *     MiAppendSubsectionChain @ 0x1402932D8 (MiAppendSubsectionChain.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14029CA84 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiUnmapViewSubsections @ 0x14029CC10 (MiUnmapViewSubsections.c)
 *     MiFlushRelease @ 0x14029F980 (MiFlushRelease.c)
 *     MiCheckControlArea @ 0x14029FBC0 (MiCheckControlArea.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MmPurgeSection @ 0x1402DC8D0 (MmPurgeSection.c)
 *     MiRemoveMappedPtes @ 0x1402E65E0 (MiRemoveMappedPtes.c)
 *     MiDereferenceControlAreaPfnList @ 0x140339B70 (MiDereferenceControlAreaPfnList.c)
 *     MiReleaseFaultCharges @ 0x1403636B0 (MiReleaseFaultCharges.c)
 *     MiUpdateLastSubsectionSize @ 0x140365E94 (MiUpdateLastSubsectionSize.c)
 *     MiDecrementSubsection @ 0x1403A668C (MiDecrementSubsection.c)
 *     MiDeleteCachedSegment @ 0x140623954 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140623B48 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140624534 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140624BC8 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140624E0C (MiProcessDeleteOnClose.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140625CFC (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x140625DEC (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x140625EFC (MiUpControlAreaRefs.c)
 *     MiRemoveSystemCacheReferences @ 0x14062EF6C (MiRemoveSystemCacheReferences.c)
 *     MiUpdateActiveSubsection @ 0x140635BE0 (MiUpdateActiveSubsection.c)
 *     MiSegmentDelete @ 0x1406B0954 (MiSegmentDelete.c)
 *     MiExtendSection @ 0x1407067D4 (MiExtendSection.c)
 *     MiChargeSegmentCommit @ 0x140748008 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x14065B354 (MiReturnCrossPartitionCharges.c)
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
