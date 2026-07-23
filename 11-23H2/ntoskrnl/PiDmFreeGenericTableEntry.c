/*
 * XREFs of PiDmFreeGenericTableEntry @ 0x14095AEF0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiDmFreeGenericTableEntry(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x5A706E50u);
}
