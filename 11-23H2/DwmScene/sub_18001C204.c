/*
 * XREFs of sub_18001C204 @ 0x18001C204
 * Callers:
 *     sub_18001C1C4 @ 0x18001C1C4 (sub_18001C1C4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18001C204(LPVOID lpMem)
{
  HANDLE ProcessHeap; // rax

  if ( lpMem )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
