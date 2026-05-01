/*
 * XREFs of ?LauncherDismissRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801FFF30
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_b67f180e661d1bfa330541344fe0fc11___::Invoke @ 0x180500A80 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180500A80.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     XamlLauncher::LauncherDismissRequested$_InitCoro$2 @ 0x1801FF668 (XamlLauncher--LauncherDismissRequested$_InitCoro$2.c)
 */

__int64 __fastcall XamlLauncher::LauncherDismissRequested(__int64 a1, __int64 a2, __int64 *a3)
{
  _DWORD *v6; // rax
  int v8; // [rsp+148h] [rbp+10h] BYREF

  v6 = operator new(0xF1uLL);
  v8 = 0;
  XamlLauncher::LauncherDismissRequested__InitCoro_2((__int64)&v8, v6, a2, a3, a1);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)a3);
  return a2;
}
