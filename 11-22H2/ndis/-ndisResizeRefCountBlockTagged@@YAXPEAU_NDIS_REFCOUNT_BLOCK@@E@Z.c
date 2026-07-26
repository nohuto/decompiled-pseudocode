/*
 * XREFs of ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C0006A60
 * Callers:
 *     NdisReferenceWithTag @ 0x1C000CA40 (NdisReferenceWithTag.c)
 * Callees:
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C0006AEC (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 */

void __fastcall ndisResizeRefCountBlockTagged(struct _NDIS_REFCOUNT_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_REFCOUNT_TAGGED_ENTRY *Pool2; // rax
  _NDIS_REFCOUNT_TAGGED_ENTRY *v5; // rsi
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // rdx

  Pool2 = (_NDIS_REFCOUNT_TAGGED_ENTRY *)ExAllocatePool2(64LL, 2 * (unsigned int)a2, 2020754510LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    Tags = a1->TaggedRefCounts.Tags;
    if ( Tags )
      memmove(Pool2, Tags, 2LL * a1->NumOverflowTaggedEntries);
    ndisFreeRefCountAuxiliaryMemory(a1);
    a1->TaggedRefCounts.Tags = v5;
    a1->NumOverflowTaggedEntries = a2;
  }
  else
  {
    ndisFreeRefCountAuxiliaryMemory(a1);
    a1->Type = 2;
  }
}
