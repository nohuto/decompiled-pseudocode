/*
 * XREFs of ?ShowRequested@CControlCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801E03D8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_9212de30cf71fbc532cc6b2ca12df2d9___::Invoke @ 0x18041FC60 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18041FC60.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CControlCenterExperienceManager::ShowRequested$_InitCoro$2 @ 0x1801DFC2C (CControlCenterExperienceManager--ShowRequested$_InitCoro$2.c)
 */

__int64 __fastcall CControlCenterExperienceManager::ShowRequested(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  _DWORD *v6; // rax
  int v8; // [rsp+2D8h] [rbp+10h] BYREF

  v6 = operator new(0x281uLL);
  v8 = 0;
  CControlCenterExperienceManager::ShowRequested__InitCoro_2((__int64)&v8, v6, a2, (__int64)a3, a1);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a3);
  return a2;
}
