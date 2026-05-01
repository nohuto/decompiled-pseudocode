/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::HideMACFlyout_::_1_::dtor$11 @ 0x1801D1A62
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180169864 (--1-$weak_ref@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::HideMACFlyout_::_1_::dtor_11(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~2u;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>((__int64 *)(a2 + 48));
  }
  return result;
}
