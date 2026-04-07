/*
 * XREFs of AvDestroyProcessHeap @ 0x18010779C
 * Callers:
 *     _DllMainStartup @ 0x180010E10 (_DllMainStartup.c)
 * Callees:
 *     ??_GHeapBase@WPF@@UEAAPEAXI@Z @ 0x180107750 (--_GHeapBase@WPF@@UEAAPEAXI@Z.c)
 */

__int64 AvDestroyProcessHeap()
{
  if ( WPF::g_pProcessHeap )
  {
    WPF::HeapBase::`scalar deleting destructor'(WPF::g_pProcessHeap, 0);
    HeapFree(g_hProcessHeap, 0, WPF::g_pProcessHeap);
    WPF::g_pProcessHeap = 0LL;
    g_hProcessHeap = 0LL;
  }
  return 0LL;
}
