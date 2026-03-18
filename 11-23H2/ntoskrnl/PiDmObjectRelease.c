/*
 * XREFs of PiDmObjectRelease @ 0x1406D6B68
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406D3F80 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1406D43D4 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1406D6394 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1406D6858 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1406D69DC (PiDmObjectGetCachedObjectProperty.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14077EC88 (PiUEventFreeClientRegistrationContext.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407880B4 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventRelease @ 0x140788948 (PiPnpRtlObjectEventRelease.c)
 *     PiPnpRtlCmActionCallback @ 0x140788B20 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x140789508 (PiPnpRtlObjectEventCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x14078973C (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x14078D294 (PiDmCacheDataFree.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14078D2CC (PiDmObjectUpdateCachedObjectProperty.c)
 *     IopProcessSetInterfaceState @ 0x1407936D4 (IopProcessSetInterfaceState.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407C21F8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1407CBFF4 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1407CC134 (PiDmObjectGetCachedObjectReference.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1407DFDB4 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1407E65A4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1407F9AD0 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407F9F68 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmEnumObjectsWithCallback @ 0x1407FB440 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObjectConstraintList @ 0x1407FBF08 (PiDmGetObjectConstraintList.c)
 *     PiDmListInitEnumCallback @ 0x14082F280 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x1408396DC (PiDmObjectManagerPopulate.c)
 *     IopRegisterDeviceInterface @ 0x1408667FC (IopRegisterDeviceInterface.c)
 *     PiDmObjectCreate @ 0x14086B75C (PiDmObjectCreate.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14088438C (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14095A184 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x14095A324 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14095A368 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiDmListRemoveObjectWorker @ 0x14095AF78 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     PiDmGetCacheKeys @ 0x1406D6344 (PiDmGetCacheKeys.c)
 *     PiDmCacheDataFree @ 0x14078D294 (PiDmCacheDataFree.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiDmObjectRelease(char *P)
{
  void *v2; // rcx
  char *v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  DEVPROPKEY **v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 2, 0xFFFFFFFF) == 1 )
  {
    v2 = (void *)*((_QWORD *)P + 2);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x5A706E50u);
    PiDmGetCacheKeys(*((_DWORD *)P + 7), &v6, &v5);
    if ( v5 )
    {
      v3 = P + 112;
      v4 = v5;
      do
      {
        PiDmCacheDataFree(v3);
        v3 += 24;
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(P, 0x5A706E50u);
  }
}
