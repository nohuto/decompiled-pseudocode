/*
 * XREFs of sub_140953970 @ 0x140953970
 * Callers:
 *     sub_140661C4C @ 0x140661C4C (sub_140661C4C.c)
 *     sub_140953B2C @ 0x140953B2C (sub_140953B2C.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140953970(PVOID *P)
{
  ObfDereferenceObject(P[4]);
  ObfDereferenceObject(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
