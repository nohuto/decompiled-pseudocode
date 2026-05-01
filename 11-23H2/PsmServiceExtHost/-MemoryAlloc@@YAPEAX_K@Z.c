/*
 * XREFs of ?MemoryAlloc@@YAPEAX_K@Z @ 0x180048610
 * Callers:
 *     ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x1800418CC (-CdplIsSupportedInl@@YAJPEAH@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall MemoryAlloc(SIZE_T a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, a1);
}
