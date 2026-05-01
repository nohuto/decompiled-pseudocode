/*
 * XREFs of ?ShowDashboardAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@@Z @ 0x180243B90
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_f85305330639c289329e0f73b8204bb6___::Invoke @ 0x18023EB70 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18023EB70.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_InitCoro$2 @ 0x180242DA4 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_InitCoro$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  _DWORD *v6; // rax
  int v8; // [rsp+378h] [rbp+10h] BYREF
  __int64 *v9; // [rsp+380h] [rbp+18h]

  v9 = a3;
  v6 = operator new(0x311uLL);
  v8 = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync__InitCoro_2(
    (__int64)&v8,
    v6,
    a2,
    a3,
    a1);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)a3);
  return a2;
}
