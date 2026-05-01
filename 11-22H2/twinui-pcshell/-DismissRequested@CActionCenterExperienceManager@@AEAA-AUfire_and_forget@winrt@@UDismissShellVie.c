/*
 * XREFs of ?DismissRequested@CActionCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801DC8F0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_dfd3c4a9c15624c97d0686fae5f3a66f___::Invoke @ 0x180418E70 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180418E70.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CActionCenterExperienceManager::DismissRequested$_InitCoro$2 @ 0x1801DC210 (CActionCenterExperienceManager--DismissRequested$_InitCoro$2.c)
 */

__int64 __fastcall CActionCenterExperienceManager::DismissRequested(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  _DWORD *v6; // rax
  int v8; // [rsp+278h] [rbp+10h] BYREF

  v6 = operator new(0x221uLL);
  v8 = 0;
  CActionCenterExperienceManager::DismissRequested__InitCoro_2((__int64)&v8, v6, a2, (__int64)a3, a1);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a3);
  return a2;
}
