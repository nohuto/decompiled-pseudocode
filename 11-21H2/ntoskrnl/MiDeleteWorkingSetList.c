/*
 * XREFs of MiDeleteWorkingSetList @ 0x140216D54
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x140216B04 (MiDeleteSessionAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x140693C24 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MiDeleteProcessLargePageCache @ 0x140216DA0 (MiDeleteProcessLargePageCache.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteWorkingSetList(__int64 a1)
{
  void *v1; // rdi

  v1 = *(void **)(a1 + 16);
  if ( v1 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    {
      MiDeleteProcessLargePageCache(a1 - 1664);
      ExFreePoolWithTag(v1, 0);
    }
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
