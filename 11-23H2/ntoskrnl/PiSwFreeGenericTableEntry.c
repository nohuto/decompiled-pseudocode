/*
 * XREFs of PiSwFreeGenericTableEntry @ 0x1409673E0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x57706E50u);
}
