/*
 * XREFs of EtwpFreeEventNameFilter @ 0x1409F5070
 * Callers:
 *     EtwpUpdateFilterData @ 0x14078F198 (EtwpUpdateFilterData.c)
 *     EtwpFreeFilterInfo @ 0x14078FF9C (EtwpFreeFilterInfo.c)
 *     EtwpAllocateEventNameFilter @ 0x1409F45F0 (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
