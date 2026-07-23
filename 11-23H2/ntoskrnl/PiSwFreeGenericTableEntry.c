/*
 * XREFs of PiSwFreeGenericTableEntry @ 0x1409675E0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwFreeGenericTableEntry(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x57706E50u);
}
