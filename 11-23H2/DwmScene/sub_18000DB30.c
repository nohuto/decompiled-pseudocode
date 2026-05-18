/*
 * XREFs of sub_18000DB30 @ 0x18000DB30
 * Callers:
 *     sub_18000EB38 @ 0x18000EB38 (sub_18000EB38.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_18000DB30(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapFree(ProcessHeap, 0, a1);
}
