/*
 * XREFs of AvCreateProcessHeap @ 0x180010E98
 * Callers:
 *     _DllMainStartup @ 0x180010E10 (_DllMainStartup.c)
 * Callees:
 *     <none>
 */

__int64 AvCreateProcessHeap()
{
  WPF::HeapBase *v0; // rax

  g_hProcessHeap = GetProcessHeap();
  v0 = (WPF::HeapBase *)HeapAlloc(g_hProcessHeap, 0, 8uLL);
  WPF::g_pProcessHeap = v0;
  if ( !v0 )
    return 2147942414LL;
  *(_QWORD *)v0 = &WPF::ProcessHeapImpl::`vftable';
  return 0LL;
}
