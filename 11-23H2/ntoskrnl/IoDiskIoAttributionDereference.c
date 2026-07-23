/*
 * XREFs of IoDiskIoAttributionDereference @ 0x14020C878
 * Callers:
 *     IoGetIoRateControl @ 0x14020C410 (IoGetIoRateControl.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x14020C5B0 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x14020C630 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x14020C878 (IoDiskIoAttributionDereference.c)
 *     MmUpdateSectionIoAttribution @ 0x14020EAE8 (MmUpdateSectionIoAttribution.c)
 *     CcCopyReadEx @ 0x140261FF0 (CcCopyReadEx.c)
 *     MiFlushSectionInternal @ 0x1402759E0 (MiFlushSectionInternal.c)
 *     MiGatherMappedPages @ 0x140297FB4 (MiGatherMappedPages.c)
 *     CcUninitializeCacheMap @ 0x14029BED0 (CcUninitializeCacheMap.c)
 *     CcCompleteAsyncRead @ 0x1402C16C0 (CcCompleteAsyncRead.c)
 *     CcMapAndCopyInToCache @ 0x1402CCB80 (CcMapAndCopyInToCache.c)
 *     CcPerformReadAhead @ 0x14030ECB0 (CcPerformReadAhead.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140333D90 (MiCheckAndUpdateIoAttribution.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140367738 (IoSetDiskIoAttributionOnProcess.c)
 *     IoNotifyQuotaState @ 0x140368F90 (IoNotifyQuotaState.c)
 *     MiSegmentDelete @ 0x1406B0984 (MiSegmentDelete.c)
 *     PspRemoveIoAttribution @ 0x1407D88B0 (PspRemoveIoAttribution.c)
 *     PspIoRateEntryActivate @ 0x1407D893C (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1407D8A48 (PspIoRateEntryDeactivate.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14020C878 (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
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
