/*
 * XREFs of ?ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C0117798
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     NdisAllocateRefCount @ 0x1C001BED0 (NdisAllocateRefCount.c)
 */

void __fastcall ndisInitializeZeroBasedRef(struct _REFERENCE_EX *a1)
{
  KeInitializeSpinLock(&a1->SpinLock);
  *(_DWORD *)&a1->ReferenceCount = 0x1000000;
  a1->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)NdisAllocateRefCount(0x19u, 0);
}
