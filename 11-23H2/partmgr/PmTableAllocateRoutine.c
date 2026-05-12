/*
 * XREFs of PmTableAllocateRoutine @ 0x1C001C0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PmTableAllocateRoutine(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(258LL, ByteSize, 1163160912LL);
}
