/*
 * XREFs of PiSwPdoAssociationFree @ 0x14096780C
 * Callers:
 *     PiSwFreePdoAssociationsList @ 0x140967600 (PiSwFreePdoAssociationsList.c)
 *     PiSwRemovePdoAssociation @ 0x140967D84 (PiSwRemovePdoAssociation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *P)
{
  ObfDereferenceObject(P[4]);
  ObfDereferenceObject(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
