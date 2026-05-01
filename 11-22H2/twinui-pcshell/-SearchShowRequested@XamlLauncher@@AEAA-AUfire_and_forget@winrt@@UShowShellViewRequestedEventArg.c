/*
 * XREFs of ?SearchShowRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x18020142C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07___::Invoke @ 0x180500B60 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180500B60.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     XamlLauncher::SearchShowRequested$_InitCoro$2 @ 0x180200E80 (XamlLauncher--SearchShowRequested$_InitCoro$2.c)
 */

__int64 __fastcall XamlLauncher::SearchShowRequested(__int64 a1, __int64 a2, winrt::Windows::Foundation::IUnknown *a3)
{
  _DWORD *v6; // rax
  int v8; // [rsp+158h] [rbp+10h] BYREF

  v6 = operator new(0x101uLL);
  v8 = 0;
  XamlLauncher::SearchShowRequested__InitCoro_2((__int64)&v8, v6, a2, (__int64)a3, a1);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a3);
  return a2;
}
