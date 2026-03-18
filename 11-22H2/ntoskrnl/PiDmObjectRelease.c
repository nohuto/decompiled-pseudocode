/*
 * XREFs of PiDmObjectRelease @ 0x1406D6C18
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406D4030 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1406D4484 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1406D6444 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1406D6908 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1406D6A8C (PiDmObjectGetCachedObjectProperty.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14077F198 (PiUEventFreeClientRegistrationContext.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407885C4 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventRelease @ 0x140788E58 (PiPnpRtlObjectEventRelease.c)
 *     PiPnpRtlCmActionCallback @ 0x140789030 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x140789A18 (PiPnpRtlObjectEventCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x140789C4C (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x14078D7A4 (PiDmCacheDataFree.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14078D7DC (PiDmObjectUpdateCachedObjectProperty.c)
 *     IopProcessSetInterfaceState @ 0x140793BE4 (IopProcessSetInterfaceState.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407C2788 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1407CC584 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1407CC6C4 (PiDmObjectGetCachedObjectReference.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1407E0334 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1407E6B24 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1407FA180 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407FA618 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmEnumObjectsWithCallback @ 0x1407FBAF0 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObjectConstraintList @ 0x1407FC5B8 (PiDmGetObjectConstraintList.c)
 *     PiDmListInitEnumCallback @ 0x140830DD0 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x14083B22C (PiDmObjectManagerPopulate.c)
 *     IopRegisterDeviceInterface @ 0x140866CCC (IopRegisterDeviceInterface.c)
 *     PiDmObjectCreate @ 0x14086BC2C (PiDmObjectCreate.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14088485C (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14095A234 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x14095A3D4 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14095A418 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiDmListRemoveObjectWorker @ 0x14095B028 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     PiDmGetCacheKeys @ 0x1406D63F4 (PiDmGetCacheKeys.c)
 *     PiDmCacheDataFree @ 0x14078D7A4 (PiDmCacheDataFree.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
