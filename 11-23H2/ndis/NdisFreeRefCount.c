/*
 * XREFs of NdisFreeRefCount @ 0x1C0015420
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009560 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000A830 (-ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_M.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000ABC0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000C3D0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C000D6F0 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000DB10 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C000EA30 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000FE40 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C001538C (-ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001C3A4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001F3B0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisDoOidRequests@@YAXPEAX@Z @ 0x1C0025CE0 (-ndisDoOidRequests@@YAXPEAX@Z.c)
 *     ?ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0029760 (-ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0035128 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006B11C (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfDetachMiniportBlock @ 0x1C00B7A10 (ndisIfDetachMiniportBlock.c)
 *     ?ndisDeinitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@@Z @ 0x1C010FCBC (-ndisDeinitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@@Z.c)
 * Callees:
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C0006C7C (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C000F8D0 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C0015474 (-ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall NdisFreeRefCount(struct NDIS_REFCOUNT_HANDLE__ *BugCheckParameter3)
{
  unsigned int AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v3; // rax
  struct _NDIS_REFCOUNT_BLOCK *v4; // rbx

  if ( BugCheckParameter3 )
  {
    AnyActiveRefTag = ndisGetAnyActiveRefTag(BugCheckParameter3);
    if ( AnyActiveRefTag != -2 )
      ndisBugCheckEx(0x1EuLL, 4uLL, (ULONG_PTR)BugCheckParameter3, AnyActiveRefTag);
    v3 = ndisRefCountBlockFromRefCountHandle((ULONG_PTR)BugCheckParameter3);
    v4 = v3;
    if ( v3 )
    {
      ndisFreeRefCountAuxiliaryMemory(v3);
      ExFreePoolWithTag(v4, 0);
    }
  }
}
