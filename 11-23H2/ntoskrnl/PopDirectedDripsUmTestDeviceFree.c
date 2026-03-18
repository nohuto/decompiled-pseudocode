/*
 * XREFs of PopDirectedDripsUmTestDeviceFree @ 0x14099FB30
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PopDirectedDripsUmTestDeviceFree(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x4D554444u);
}
