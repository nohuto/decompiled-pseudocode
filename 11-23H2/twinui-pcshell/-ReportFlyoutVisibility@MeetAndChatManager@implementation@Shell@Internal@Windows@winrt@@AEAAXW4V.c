/*
 * XREFs of ?ReportFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4ViewVisibility@3UI@WindowsUdk@6@@Z @ 0x1806BF76C
 * Callers:
 *     ?ReportFlyoutVisibility@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAH_N@Z @ 0x1806BF710 (-ReportFlyoutVisibility@-$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winr.c)
 *     ?UpdateFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806C0F68 (-UpdateFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1800D6384 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ReportFlyoutVisibility@_N@MeetAndChatTelemetry@@SAX$$QEA_N@Z @ 0x1806AF738 (--$ReportFlyoutVisibility@_N@MeetAndChatTelemetry@@SAX$$QEA_N@Z.c)
 */

int __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ReportFlyoutVisibility(
        __int64 a1,
        unsigned int a2)
{
  WPARAM v2; // rsi
  RTL_SRWLOCK *v5; // rdi
  HWND WindowW; // rax
  int result; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v2 = 1LL;
  if ( a2 != 1 )
  {
LABEL_4:
    if ( !a2 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v5 = (RTL_SRWLOCK *)(a1 + 112);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  *(_BYTE *)(a1 + 208) = 0;
  if ( v5 )
  {
    ReleaseSRWLockExclusive(v5);
    goto LABEL_4;
  }
LABEL_5:
  v2 = 0LL;
LABEL_6:
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !WindowW )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x342,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)0x8000FFFFLL,
      v8);
  result = PostMessageW(WindowW, 0x4F6u, v2, 0LL);
  if ( *(_QWORD *)(a1 + 120) )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
      (_QWORD *)(a1 + 120),
      &v10);
    LOBYTE(v10) = a2 == 0;
    return MeetAndChatTelemetry::ReportFlyoutVisibility<bool>((char *)&v10);
  }
  return result;
}
