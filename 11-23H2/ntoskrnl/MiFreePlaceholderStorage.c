/*
 * XREFs of MiFreePlaceholderStorage @ 0x1406834D8
 * Callers:
 *     MiMapViewOfDataSection @ 0x140720280 (MiMapViewOfDataSection.c)
 *     MiInitializePartialVad @ 0x14076D6EC (MiInitializePartialVad.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x140A47A98 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiAllocateChildVads @ 0x140A4837C (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140A48E2C (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14028A170 (MiGetVadWakeList.c)
 *     MiFreePlaceholderVadEvent @ 0x140A47DE0 (MiFreePlaceholderVadEvent.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreePlaceholderStorage(__int64 a1)
{
  unsigned __int64 VadWakeList; // rax
  void *v2; // rbx

  VadWakeList = MiGetVadWakeList(a1, 128);
  v2 = (void *)VadWakeList;
  if ( VadWakeList )
  {
    MiFreePlaceholderVadEvent(VadWakeList);
    ExFreePoolWithTag(v2, 0);
  }
}
