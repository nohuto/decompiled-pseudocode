/*
 * XREFs of PiDmObjectRelease @ 0x14077B394
 * Callers:
 *     PiDmGetReferencedObjectFromProperty @ 0x1406D2EE0 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406D3020 (PiDmObjectGetCachedObjectReference.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406DD8D0 (PiUEventFreeClientRegistrationContext.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406E5780 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140768E44 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     IopProcessSetInterfaceState @ 0x140769170 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140769C24 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14076A0A8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x14076A3C4 (PiDmAddCacheReferenceForObject.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1407734A4 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDmCacheDataFree @ 0x140774E80 (PiDmCacheDataFree.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407762E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectConstraintList @ 0x14077747C (PiDmGetObjectConstraintList.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1407780BC (PiDqQueryActionQueueEntryFree.c)
 *     PiDmObjectProcessPropertyChange @ 0x1407783C4 (PiDmObjectProcessPropertyChange.c)
 *     PiDmEnumObjectsWithCallback @ 0x140779850 (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventRelease @ 0x140779B80 (PiPnpRtlObjectEventRelease.c)
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x14077A750 (PiPnpRtlObjectEventCreate.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14077A8E0 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x14077AD94 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x14077AF18 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14077B3D4 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14077B6F4 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14077BB00 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectCreate @ 0x14078BF98 (PiDmObjectCreate.c)
 *     PiDmListInitEnumCallback @ 0x14083F090 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x140844A24 (PiDmObjectManagerPopulate.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1409483EC (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140948594 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x1409485D8 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiDmListRemoveObjectWorker @ 0x1409491C0 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     PiDmCacheDataFree @ 0x140774E80 (PiDmCacheDataFree.c)
 *     PiDmGetCacheKeys @ 0x14077B4E4 (PiDmGetCacheKeys.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PiDmObjectRelease(unsigned int *P)
{
  void *v2; // rcx
  char *v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 2, 0xFFFFFFFF) == 1 )
  {
    v2 = (void *)*((_QWORD *)P + 2);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x5A706E50u);
    PiDmGetCacheKeys(P[7], &v6, &v5);
    if ( v5 )
    {
      v3 = (char *)(P + 28);
      v4 = v5;
      do
      {
        PiDmCacheDataFree((__int64)v3);
        v3 += 24;
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(P, 0x5A706E50u);
  }
}
