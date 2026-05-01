/*
 * XREFs of ?DismissRequested@CJumpViewExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801E3744
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_8ce5553f322d0698bc47a5a547d85e4a___::Invoke @ 0x180448570 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180448570.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CJumpViewExperienceManager::DismissRequested$_InitCoro$2 @ 0x1801E3444 (CJumpViewExperienceManager--DismissRequested$_InitCoro$2.c)
 */

__int64 __fastcall CJumpViewExperienceManager::DismissRequested(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  void *v6; // rax
  int v8; // [rsp+98h] [rbp+10h] BYREF

  v6 = operator new(0x4AuLL);
  v8 = 0;
  CJumpViewExperienceManager::DismissRequested__InitCoro_2((__int64)&v8, (__int64)v6, a2, (__int64)a3, a1);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a3);
  return a2;
}
