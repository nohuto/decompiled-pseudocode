/*
 * XREFs of ?SearchDismissRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x180200E00
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_39129eee30c1706cd30cd4009e5b3567___::Invoke @ 0x180063110 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180063110.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     XamlLauncher::SearchDismissRequested$_InitCoro$2 @ 0x180200874 (XamlLauncher--SearchDismissRequested$_InitCoro$2.c)
 */

__int64 __fastcall XamlLauncher::SearchDismissRequested(__int64 a1, __int64 a2, __int64 *a3)
{
  _DWORD *v6; // rax
  int v8; // [rsp+138h] [rbp+10h] BYREF

  v6 = operator new(0xE1uLL);
  v8 = 0;
  XamlLauncher::SearchDismissRequested__InitCoro_2((__int64)&v8, v6, a2, a3, a1);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)a3);
  return a2;
}
