/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::subscribe_to_services_::_1_::dtor$6 @ 0x180222A12
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180169864 (--1-$weak_ref@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::subscribe_to_services_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 184) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 184) &= ~2u;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>((__int64 *)(a2 + 200));
  }
  return result;
}
