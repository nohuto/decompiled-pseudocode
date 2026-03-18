/*
 * XREFs of PiDmGetObject @ 0x1406D8120
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406D3F80 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1406D6394 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1406D6858 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1406D69DC (PiDmObjectGetCachedObjectProperty.c)
 *     PiUEventHandleRegistration @ 0x14077F69C (PiUEventHandleRegistration.c)
 *     PiPnpRtlCmActionCallback @ 0x140788B20 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x140789508 (PiPnpRtlObjectEventCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x14078973C (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14078D2CC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmCacheDataEncode @ 0x14078D4E0 (PiDmCacheDataEncode.c)
 *     IopProcessSetInterfaceState @ 0x1407936D4 (IopProcessSetInterfaceState.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1407CBFF4 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1407CC134 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1407E65A4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407F9F68 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectConstraintList @ 0x1407FBF08 (PiDmGetObjectConstraintList.c)
 *     IopRegisterDeviceInterface @ 0x1408667FC (IopRegisterDeviceInterface.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1408827B0 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14095A184 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14095A3C8 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14095A5AC (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x14095A85C (PiPnpRtlGatherPanelRemoveInfo.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14022CF10 (RtlLookupElementGenericTableAvl.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D680 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1406D820C (PiDmGetObjectManagerForObjectType.c)
 *     PiDmInitializeComparisonObject @ 0x1406D8270 (PiDmInitializeComparisonObject.c)
 */

__int64 __fastcall PiDmGetObject(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // edi
  __int64 ObjectManagerForObjectType; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rax
  __int64 v9; // rax
  _BYTE *Buffer; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v12[112]; // [rsp+30h] [rbp-98h] BYREF

  v5 = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)ObjectManagerForObjectType, 1u);
  memset(v12, 0, sizeof(v12));
  Buffer = v12;
  if ( !a2
    || (int)PiDmInitializeComparisonObject(a2, *(unsigned int *)(ObjectManagerForObjectType + 208), v12) < 0
    || (v8 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(ObjectManagerForObjectType + 104), &Buffer)) == 0LL )
  {
    *a3 = 0LL;
    goto LABEL_8;
  }
  v9 = *v8;
  *a3 = v9;
  if ( !v9 )
  {
LABEL_8:
    v5 = -1073741772;
    goto LABEL_6;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
LABEL_6:
  ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
  KeLeaveCriticalRegion();
  return v5;
}
