/*
 * XREFs of ATL::_dynamic_initializer_for__g_strheap__ @ 0x180001C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int ATL::_dynamic_initializer_for__g_strheap__()
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  byte_1801C2A30 = 0;
  ATL::g_strheap = &ATL::CWin32Heap::`vftable';
  qword_1801C2A28 = (__int64)ProcessHeap;
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for__g_strheap__);
}
