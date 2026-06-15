/*
 * XREFs of ATL::_dynamic_atexit_destructor_for__g_strheap__ @ 0x18004B830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int ATL::_dynamic_atexit_destructor_for__g_strheap__()
{
  void **v0; // rax

  v0 = &ATL::CWin32Heap::`vftable';
  ATL::g_strheap = (__int64)&ATL::CWin32Heap::`vftable';
  if ( byte_180063758 && hHeap )
    LODWORD(v0) = HeapDestroy(hHeap);
  return (int)v0;
}
