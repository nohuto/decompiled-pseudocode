/*
 * XREFs of sub_14095EC14 @ 0x14095EC14
 * Callers:
 *     sub_140564DE8 @ 0x140564DE8 (sub_140564DE8.c)
 *     sub_140956ADC @ 0x140956ADC (sub_140956ADC.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14095EC14(PVOID *P)
{
  ObfDereferenceObjectWithTag(P[2], 0x64706E50u);
  P[2] = 0LL;
  ExFreePoolWithTag(P, 0x64706E50u);
}
