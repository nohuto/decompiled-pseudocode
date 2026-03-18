/*
 * XREFs of IoDiskIoAttributionDereference @ 0x140366814
 * Callers:
 *     MiCheckAndUpdateIoAttribution @ 0x140243EC4 (MiCheckAndUpdateIoAttribution.c)
 *     MmUpdateSectionIoAttribution @ 0x1402535D8 (MmUpdateSectionIoAttribution.c)
 *     IoNotifyQuotaState @ 0x14025AFF0 (IoNotifyQuotaState.c)
 *     CcUninitializeCacheMap @ 0x1402761B0 (CcUninitializeCacheMap.c)
 *     MiGatherMappedPages @ 0x14028B330 (MiGatherMappedPages.c)
 *     CcCompleteAsyncRead @ 0x14028F324 (CcCompleteAsyncRead.c)
 *     CcMapAndCopyInToCache @ 0x1402BD970 (CcMapAndCopyInToCache.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     CcCopyReadEx @ 0x14032A8C0 (CcCopyReadEx.c)
 *     CcPerformReadAhead @ 0x14035E3C4 (CcPerformReadAhead.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140360E3C (IoSetDiskIoAttributionOnProcess.c)
 *     IoGetIoRateControl @ 0x140363850 (IoGetIoRateControl.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1403639F0 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x140365D40 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x140366814 (IoDiskIoAttributionDereference.c)
 *     PspRemoveIoAttribution @ 0x1406D4CBC (PspRemoveIoAttribution.c)
 *     PspIoRateEntryActivate @ 0x1406D4DF0 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1406D4EFC (PspIoRateEntryDeactivate.c)
 *     MiSegmentDelete @ 0x1406F4904 (MiSegmentDelete.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x140366814 (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall IoDiskIoAttributionDereference(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  __int64 v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = *(_QWORD *)(a1 + 176);
    if ( v5 )
      IoDiskIoAttributionDereference(v5);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
