/*
 * XREFs of PiDcFreeGenericTableEntry @ 0x14095B1F0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiDcFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x47706E50u);
}
