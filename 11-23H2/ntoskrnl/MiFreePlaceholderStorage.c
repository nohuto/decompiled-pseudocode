/*
 * XREFs of MiFreePlaceholderStorage @ 0x1406834D8
 * Callers:
 *     MiMapViewOfDataSection @ 0x140720480 (MiMapViewOfDataSection.c)
 *     MiInitializePartialVad @ 0x14076D8DC (MiInitializePartialVad.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x140A47D48 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiAllocateChildVads @ 0x140A4862C (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140A490DC (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14028A400 (MiGetVadWakeList.c)
 *     MiFreePlaceholderVadEvent @ 0x140A48090 (MiFreePlaceholderVadEvent.c)
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
