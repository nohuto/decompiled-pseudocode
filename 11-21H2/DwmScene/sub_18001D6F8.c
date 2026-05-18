/*
 * XREFs of sub_18001D6F8 @ 0x18001D6F8
 * Callers:
 *     sub_18001D6B8 @ 0x18001D6B8 (sub_18001D6B8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18001D6F8(LPVOID lpMem)
{
  HANDLE ProcessHeap; // rax

  if ( lpMem )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
