/*
 * XREFs of ?TryGetHighResolutionTimerValue@Utils@@YA_JXZ @ 0x1801AC5E8
 * Callers:
 *     ?OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@56@0@Z @ 0x180012F60 (-OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAE.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1 @ 0x180254A90 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDes_ea_180254A90.c)
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1806BFC40 (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 * Callees:
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x1803D9538 (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 */

LARGE_INTEGER __fastcall Utils::TryGetHighResolutionTimerValue(Utils *this)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  if ( QueryPerformanceCounter(&PerformanceCount) )
  {
    return PerformanceCount;
  }
  else
  {
    wil::details::in1diag3::Log_GetLastError(
      retaddr,
      (void *)0x1BA,
      (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      v1);
    return 0LL;
  }
}
