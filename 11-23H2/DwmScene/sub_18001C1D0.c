/*
 * XREFs of sub_18001C1D0 @ 0x18001C1D0
 * Callers:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18001C1B8 @ 0x18001C1B8 (sub_18001C1B8.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall sub_18001C1D0(SIZE_T a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, a1);
}
