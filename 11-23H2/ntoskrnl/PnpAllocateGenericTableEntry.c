/*
 * XREFs of PnpAllocateGenericTableEntry @ 0x1407E6A40
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(256LL, ByteSize, 1970499664LL);
}
