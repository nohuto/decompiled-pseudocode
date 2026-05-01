/*
 * XREFs of ?GetRuntimeClassName@VirtualDesktopController@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180541E80
 * Callers:
 *     ?GetRuntimeClassName@VirtualDesktopController@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802A25D0 (-GetRuntimeClassName@VirtualDesktopController@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@VirtualDesktopController@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802A25F0 (-GetRuntimeClassName@VirtualDesktopController@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall VirtualDesktopController::GetRuntimeClassName(VirtualDesktopController *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.ComposableShell.Multitasking.VirtualDesktopController", 0x46u, a2);
}
