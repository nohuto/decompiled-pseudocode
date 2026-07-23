/*
 * XREFs of PiDmObjectRelease @ 0x1406D6B98
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406D3FB0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1406D4404 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1406D63C4 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1406D6888 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1406D6A0C (PiDmObjectGetCachedObjectProperty.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14077EE78 (PiUEventFreeClientRegistrationContext.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407882A4 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventRelease @ 0x140788B38 (PiPnpRtlObjectEventRelease.c)
 *     PiPnpRtlCmActionCallback @ 0x140788D10 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x1407896F8 (PiPnpRtlObjectEventCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x14078992C (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x14078D484 (PiDmCacheDataFree.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14078D4BC (PiDmObjectUpdateCachedObjectProperty.c)
 *     IopProcessSetInterfaceState @ 0x1407938C4 (IopProcessSetInterfaceState.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407C24C8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1407CC2C4 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1407CC404 (PiDmObjectGetCachedObjectReference.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1407E0084 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1407E6874 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1407F9DA0 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407FA238 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmEnumObjectsWithCallback @ 0x1407FB710 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObjectConstraintList @ 0x1407FC1D8 (PiDmGetObjectConstraintList.c)
 *     PiDmListInitEnumCallback @ 0x14082F580 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x1408399DC (PiDmObjectManagerPopulate.c)
 *     IopRegisterDeviceInterface @ 0x140866A3C (IopRegisterDeviceInterface.c)
 *     PiDmObjectCreate @ 0x14086B99C (PiDmObjectCreate.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1408845CC (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14095A384 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x14095A524 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14095A568 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiDmListRemoveObjectWorker @ 0x14095B178 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     PiDmGetCacheKeys @ 0x1406D6374 (PiDmGetCacheKeys.c)
 *     PiDmCacheDataFree @ 0x14078D484 (PiDmCacheDataFree.c)
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
