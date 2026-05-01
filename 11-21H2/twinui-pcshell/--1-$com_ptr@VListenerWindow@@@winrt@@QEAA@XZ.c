/*
 * XREFs of ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x1805C0724
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::MeetAndChatManager_::_1_::dtor$1 @ 0x18021C0C8 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--MeetAndChatMa_ea_18021C0C8.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VListenerWindow@@@winrt@@AEAAXXZ @ 0x1800CC1D4 (-unconditional_release_ref@-$com_ptr@VListenerWindow@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>(volatile __int64 **a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<ListenerWindow>::unconditional_release_ref(a1);
  return result;
}
