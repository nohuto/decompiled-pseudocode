/*
 * XREFs of MiFreeRotateView @ 0x140A315A8
 * Callers:
 *     MiInitializePartialVad @ 0x14076D8DC (MiInitializePartialVad.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x140A47D48 (MiDeleteNewlyCreatedPartialVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14028A400 (MiGetVadWakeList.c)
 *     MiFreeRotateVadEvent @ 0x140A31570 (MiFreeRotateVadEvent.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRotateView(__int64 a1)
{
  unsigned __int64 VadWakeList; // rax
  void *v2; // rbx

  VadWakeList = MiGetVadWakeList(a1, 8);
  v2 = (void *)VadWakeList;
  if ( VadWakeList )
  {
    MiFreeRotateVadEvent(VadWakeList);
    ExFreePoolWithTag(v2, 0);
  }
}
