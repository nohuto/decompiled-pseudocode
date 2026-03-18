/*
 * XREFs of ZwOpenPartition @ 0x14041D340
 * Callers:
 *     IopLiveDumpOpenVMMemoryPartition @ 0x140559ED8 (IopLiveDumpOpenVMMemoryPartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenPartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
