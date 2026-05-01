/*
 * XREFs of ?MemoryAlloc@@YAPEAX_K@Z @ 0x18004D7DC
 * Callers:
 *     ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x1800458AC (-CdplIsSupportedInl@@YAJPEAH@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall MemoryAlloc(SIZE_T a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, a1);
}
