/*
 * XREFs of ?perform_delayed_initialization@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18017FDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PerformPostDesktopReadyInitialization@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1801D2AE0 (-PerformPostDesktopReadyInitialization@MeetAndChatManager@implementation@Shell@Internal@Windows@.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::perform_delayed_initialization(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization();
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x12F,
      (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      v1);
  }
}
