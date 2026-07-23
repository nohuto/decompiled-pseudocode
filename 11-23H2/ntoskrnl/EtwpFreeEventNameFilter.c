/*
 * XREFs of EtwpFreeEventNameFilter @ 0x1409F54F8
 * Callers:
 *     EtwpFreeFilterInfo @ 0x140780988 (EtwpFreeFilterInfo.c)
 *     EtwpUpdateGuidFilterData @ 0x140780CF0 (EtwpUpdateGuidFilterData.c)
 *     EtwpAllocateEventNameFilter @ 0x1409F480C (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
