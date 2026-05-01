/*
 * XREFs of _VirtualDesktopHotKeyWindow::CreateAdjacentDesktop_::_1_::dtor$1 @ 0x1806197F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopHotKeyWindow::CreateAdjacentDesktop_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>((__int64 *)(a2 + 48));
}
