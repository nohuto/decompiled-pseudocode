/*
 * XREFs of PiDqAllocateGenericTableEntry @ 0x1407E6580
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(256LL, ByteSize, 1483763280LL);
}
