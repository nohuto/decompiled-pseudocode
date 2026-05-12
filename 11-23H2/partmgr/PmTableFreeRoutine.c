/*
 * XREFs of PmTableFreeRoutine @ 0x1C001C0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PmTableFreeRoutine(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
