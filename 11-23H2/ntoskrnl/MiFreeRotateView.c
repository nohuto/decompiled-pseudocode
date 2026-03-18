/*
 * XREFs of MiFreeRotateView @ 0x140A312F8
 * Callers:
 *     MiInitializePartialVad @ 0x14076D6EC (MiInitializePartialVad.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x140A47A98 (MiDeleteNewlyCreatedPartialVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14028A170 (MiGetVadWakeList.c)
 *     MiFreeRotateVadEvent @ 0x140A312C0 (MiFreeRotateVadEvent.c)
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
