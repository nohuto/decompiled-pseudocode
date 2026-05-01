/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_2e8c3009fb6c7eb5169b41625b9541b8___ @ 0x180018190
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800178C0 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_2e8c3009fb6c7eb5169b41625b9541b8___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // r9
  _QWORD *v5; // rcx

  v4 = operator new(0x20uLL);
  v4[1] = *a2;
  v5 = a2 + 1;
  v4[2] = 0LL;
  if ( v4 + 2 != a2 + 1 )
  {
    v4[2] = *v5;
    *v5 = 0LL;
  }
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v4 + 6) = 1;
  *v4 = off_1807A43A0;
  *a1 = v4;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v5);
  return a1;
}
