/*
 * XREFs of ?SetIconBadge@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHIPEAX@Z @ 0x1805CE0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x1805CE100 (-SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::Windows::Internal::Shell::IMeetAndChatManager>::SetIconBadge(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v3 = (winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)((a1 - 8) & -(__int64)(a1 != 0));
  try
  {
    winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::SetIconBadge(
      v3,
      a2,
      (const struct winrt::hstring *)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
