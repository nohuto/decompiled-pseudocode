/*
 * XREFs of CoInitializeEx_0 @ 0x1800581A9
 * Callers:
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001D97C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18001D9D0 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CoInitializeEx_0(LPVOID pvReserved, DWORD dwCoInit)
{
  return CoInitializeEx(pvReserved, dwCoInit);
}
