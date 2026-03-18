/*
 * XREFs of PiDcAllocateGenericTableEntry @ 0x140862F00
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDcAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(256LL, ByteSize, 1198550608LL);
}
