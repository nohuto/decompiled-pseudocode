/*
 * XREFs of ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800501E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPVOID __fastcall WPF::ProcessHeapImpl::Alloc(WPF::ProcessHeapImpl *this, SIZE_T a2)
{
  SIZE_T v2; // r8

  v2 = 1LL;
  if ( a2 )
    v2 = a2;
  return HeapAlloc(g_hProcessHeap, 0, v2);
}
