/*
 * XREFs of ?LowLevelMouseHookProc@CJumpViewExperienceManager@@CA_JH_K_J@Z @ 0x1801E39A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z @ 0x180093DD8 (--0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0DismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x1802D4E70 (--0DismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 *     ?TryDismissAsync@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUDismissShellViewOptions@Shell@UI@WindowsUdk@3@@Z @ 0x18044A25C (-TryDismissAsync@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shel.c)
 */

// Hidden C++ exception states: #wind=2
LRESULT __fastcall CJumpViewExperienceManager::LowLevelMouseHookProc(int code, WPARAM wParam, LPARAM lParam)
{
  char v6; // al
  int v8; // [rsp+20h] [rbp-50h] BYREF
  struct tagPOINT Point; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v10[8]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v11[8]; // [rsp+38h] [rbp-38h] BYREF
  RECT rc; // [rsp+40h] [rbp-30h] BYREF
  RECT v13; // [rsp+50h] [rbp-20h] BYREF

  GetCursorPos(&Point);
  rc = *(RECT *)((char *)&g_hoverState + 4);
  v13 = *(RECT *)((char *)&xmmword_18098D5D0 + 4);
  if ( !qword_18098D5E8 )
    qword_18098D5E8 = GetTickCount64();
  if ( code >= 0 )
  {
    v6 = *(&g_hoverState + 1);
    if ( wParam == 514 )
      v6 = 1;
    *(&g_hoverState + 1) = v6;
  }
  if ( PtInRect(&rc, Point) )
  {
    g_hoverState = 1;
  }
  else if ( g_hoverState || !PtInRect(&v13, Point) && GetTickCount64() - qword_18098D5E8 > 0xFA )
  {
    *(&g_hoverState + 1) = 1;
  }
  if ( *(&g_hoverState + 1) )
  {
    v8 = 18;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
      (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)v11,
      (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v8);
    winrt::WindowsUdk::UI::Shell::DismissShellViewOptions::DismissShellViewOptions((winrt::WindowsUdk::UI::Shell::DismissShellViewOptions *)v10);
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::TryDismissAsync(
      v11,
      &v8,
      v10);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v8);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v10);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v11);
  }
  return CallNextHookEx(0LL, code, wParam, lParam);
}
