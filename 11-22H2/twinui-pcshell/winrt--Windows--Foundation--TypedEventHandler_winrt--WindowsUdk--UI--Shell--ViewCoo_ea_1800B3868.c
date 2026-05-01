/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::ViewVisibilityChangedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::ViewVisibilityChangedEventArgs___lambda_352628a2d1ddb7fdbe9aad4ec4f36b56___ @ 0x1800B3868
 * Callers:
 *     ?RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B363C (-RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::ViewVisibilityChangedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::ViewVisibilityChangedEventArgs___lambda_352628a2d1ddb7fdbe9aad4ec4f36b56___(
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
  *v4 = off_1807A1380;
  *a1 = v4;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return a1;
}
