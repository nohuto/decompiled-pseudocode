/*
 * XREFs of ?GetTouchGestureTarget@TouchGestureSettings@@QEAA?AU?$com_ptr@UITouchSwipe@@@winrt@@IW4TouchGestureType@@@Z @ 0x18058C508
 * Callers:
 *     ?PointersDown@TouchGestureProcessor@@QEAAXI@Z @ 0x18058ED0C (-PointersDown@TouchGestureProcessor@@QEAAXI@Z.c)
 *     ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x18058F7C8 (-StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall TouchGestureSettings::GetTouchGestureTarget(__int64 a1, void **a2, int a3, int a4)
{
  char *v5; // rdx
  HRESULT Service; // eax

  *a2 = 0LL;
  v5 = (char *)&TouchGestureSettings::s_gestureTargets;
  while ( *(_DWORD *)v5 != a4 || *((_DWORD *)v5 + 1) != a3 )
  {
    v5 += 24;
    if ( v5 == (char *)&g_header_init_WilInitialize_ResultMacros_DesktopOrSystem_SuppressPrivateApiUse )
      return a2;
  }
  Service = IUnknown_QueryService(
              *(IUnknown **)(a1 + 24),
              (const GUID *const)(v5 + 8),
              &winrt::impl::guid_v<ITouchSwipe>,
              a2);
  if ( Service < 0 )
    winrt::throw_hresult(Service);
  return a2;
}
