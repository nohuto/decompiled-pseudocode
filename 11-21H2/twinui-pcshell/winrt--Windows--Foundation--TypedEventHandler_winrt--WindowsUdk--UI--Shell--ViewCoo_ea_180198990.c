/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_5e82962a6040908e6ed2656b2b7c60f3___ @ 0x180198990
 * Callers:
 *     ?RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801A0208 (-RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_5e82962a6040908e6ed2656b2b7c60f3___(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rdx

  v4 = operator new(0x20uLL);
  v4[1] = 0LL;
  if ( v4 + 1 != a2 )
  {
    v4[1] = *a2;
    *a2 = 0LL;
  }
  v4[2] = a2[1];
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v4 + 6) = 1;
  *v4 = off_180642BF8;
  *a1 = v4;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a2);
  return a1;
}
