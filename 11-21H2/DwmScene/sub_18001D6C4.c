/*
 * XREFs of sub_18001D6C4 @ 0x18001D6C4
 * Callers:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001D6AC @ 0x18001D6AC (sub_18001D6AC.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall sub_18001D6C4(SIZE_T a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, a1);
}
