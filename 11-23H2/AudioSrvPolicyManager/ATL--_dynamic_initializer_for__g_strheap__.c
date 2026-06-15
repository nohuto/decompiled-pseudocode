/*
 * XREFs of ATL::_dynamic_initializer_for__g_strheap__ @ 0x180002030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int ATL::_dynamic_initializer_for__g_strheap__()
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  byte_1800616D8 = 0;
  ATL::g_strheap = (__int64)&ATL::CWin32Heap::`vftable';
  hHeap = ProcessHeap;
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for__g_strheap__);
}
