/*
 * XREFs of ?ShowRequested@CVirtualTouchpadExperienceManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801E437C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_341c9eb6bde2f5519c2c695a2218853a___::Invoke @ 0x1804534F0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1804534F0.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CVirtualTouchpadExperienceManager::ShowRequested$_InitCoro$2 @ 0x1801E4030 (CVirtualTouchpadExperienceManager--ShowRequested$_InitCoro$2.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::ShowRequested(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  void *v6; // rax
  int v8; // [rsp+C8h] [rbp+10h] BYREF

  v6 = operator new(0x71uLL);
  v8 = 0;
  CVirtualTouchpadExperienceManager::ShowRequested__InitCoro_2((__int64)&v8, (__int64)v6, a2, (__int64)a3, a1);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a3);
  return a2;
}
