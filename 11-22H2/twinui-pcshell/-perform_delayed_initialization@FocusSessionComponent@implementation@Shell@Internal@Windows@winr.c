/*
 * XREFs of ?perform_delayed_initialization@FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1801BD480
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeAsync@FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1801CF800 (-InitializeAsync@FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::perform_delayed_initialization(
        winrt::Windows::Internal::Shell::implementation::FocusSessionComponent *this)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync();
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1F,
      (unsigned int)"pcshell\\twinui\\focussessioncomponent\\lib\\focussessioncomponent.cpp",
      v1);
  }
}
