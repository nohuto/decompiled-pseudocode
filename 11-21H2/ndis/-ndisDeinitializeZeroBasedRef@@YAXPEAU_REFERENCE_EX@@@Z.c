/*
 * XREFs of ?ndisDeinitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@@Z @ 0x1C010464C
 * Callers:
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C00160EC (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C0016360 (NdisFreeRefCount.c)
 */

void __fastcall ndisDeinitializeZeroBasedRef(struct _REFERENCE_EX *a1)
{
  NdisFreeRefCount(a1->RefCountTracker);
  a1->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
}
