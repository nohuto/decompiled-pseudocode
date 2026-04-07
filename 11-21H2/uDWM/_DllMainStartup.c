/*
 * XREFs of _DllMainStartup @ 0x180010E10
 * Callers:
 *     <none>
 * Callees:
 *     AvCreateProcessHeap @ 0x180010E98 (AvCreateProcessHeap.c)
 *     _DllMainCRTStartup @ 0x1800622D4 (_DllMainCRTStartup.c)
 *     AvDestroyProcessHeap @ 0x18010779C (AvDestroyProcessHeap.c)
 */

BOOL __stdcall DllMainStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  void *v3; // rdi
  HINSTANCE v4; // rsi
  int v5; // ebx

  v3 = lpReserved;
  v4 = hinstDLL;
  v5 = 1;
  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      ++avalonutil_proc_attached;
      if ( (int)AvCreateProcessHeap() < 0 )
        return 0;
      lpReserved = v3;
      fdwReason = 1;
      hinstDLL = v4;
    }
    else if ( fdwReason - 2 > 1 )
    {
      return v5;
    }
    return DllMainCRTStartup(hinstDLL, fdwReason, lpReserved);
  }
  if ( !g_fAlwaysDetach && lpReserved )
    return v5;
  if ( avalonutil_proc_attached > 0 )
  {
    --avalonutil_proc_attached;
    v5 = DllMainCRTStartup(hinstDLL, 0, lpReserved);
    if ( (int)AvDestroyProcessHeap() < 0 )
      return 0;
    return v5;
  }
  return 0;
}
