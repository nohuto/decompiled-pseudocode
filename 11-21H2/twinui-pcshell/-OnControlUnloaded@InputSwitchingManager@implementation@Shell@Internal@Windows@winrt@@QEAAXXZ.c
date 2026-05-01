/*
 * XREFs of ?OnControlUnloaded@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805E2044
 * Callers:
 *     ??R_lambda_ab0ddc0523f74db67f1d98d90aaf8740_@@QEBAXAEBUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UDismissShellViewRequestedEventArgs@2345@@Z @ 0x1805E0DD8 (--R_lambda_ab0ddc0523f74db67f1d98d90aaf8740_@@QEBAXAEBUShellViewCoordinator@Shell@UI@WindowsUdk@.c)
 * Callees:
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAXAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x180114ED8 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ??$InputSwitchTrace@AEAY0BB@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BB@$$CBG@Z @ 0x1805DF304 (--$InputSwitchTrace@AEAY0BB@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BB@$$CBG@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::OnControlUnloaded(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this)
{
  HWND DesktopWindow; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[17]>((__int64)L"Control Unloaded");
  *((_BYTE *)this + 280) = 0;
  DesktopWindow = GetDesktopWindow();
  NotifyWinEvent(0x28u, DesktopWindow, 0, 0);
  v3 = 1;
  winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
    (_QWORD *)this + 26,
    &v3);
}
