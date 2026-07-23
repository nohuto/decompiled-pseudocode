/*
 * XREFs of MiFreeVadEventBitmap @ 0x140A321B8
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CCE34 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateChildVads @ 0x140A4862C (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140A490DC (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14028A400 (MiGetVadWakeList.c)
 *     MiFreeVadEventBitmapCharges @ 0x1407DFD4C (MiFreeVadEventBitmapCharges.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeVadEventBitmap(struct _KPROCESS *a1, __int64 a2, int a3)
{
  unsigned __int64 VadWakeList; // rax
  void *v5; // rbx

  VadWakeList = MiGetVadWakeList(a2, a3);
  v5 = (void *)VadWakeList;
  if ( VadWakeList )
  {
    MiFreeVadEventBitmapCharges(a1, VadWakeList);
    ExFreePoolWithTag(v5, 0);
  }
}
