/*
 * XREFs of MiFreeVadEventBitmap @ 0x140A31F08
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CCB64 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateChildVads @ 0x140A4837C (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140A48E2C (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14028A170 (MiGetVadWakeList.c)
 *     MiFreeVadEventBitmapCharges @ 0x1407DFA7C (MiFreeVadEventBitmapCharges.c)
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
