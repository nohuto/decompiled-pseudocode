/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs___lambda_3f668fd8da20f4c22fbcac233ea61c9e___ @ 0x180289AF4
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180079BB0 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs___lambda_3f668fd8da20f4c22fbcac233ea61c9e___(
        _QWORD *a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  __int64 v4; // r8
  _QWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x18uLL);
  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  v6[1] = v4;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 4) = 1;
  *v6 = off_180985990;
  *a1 = v6;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a2);
  return a1;
}
