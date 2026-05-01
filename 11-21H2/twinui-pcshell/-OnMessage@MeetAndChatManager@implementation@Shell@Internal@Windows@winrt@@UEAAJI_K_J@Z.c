/*
 * XREFs of ?OnMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z @ 0x180041BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ @ 0x1805CD2D8 (-IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ.c)
 *     ?ToggleFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805CF230 (-ToggleFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4L.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::OnMessage(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this,
        __int64 a2,
        int a3)
{
  if ( a3 == 107 && !MeetAndChatHelpers::IsMaCDisabledForDevice(this) )
    winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ToggleFlyoutVisibility(this);
  return 0LL;
}
