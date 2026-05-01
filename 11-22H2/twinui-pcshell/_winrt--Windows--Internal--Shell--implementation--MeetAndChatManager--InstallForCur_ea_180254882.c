/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1_::_1_::dtor$12 @ 0x180254882
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UTabTipAdapter@KeyboardHosting@@@winrt@@QEAA@XZ @ 0x1800353C4 (--1-$com_ptr@UTabTipAdapter@KeyboardHosting@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync__ResumeCoro_1_::_1_::dtor_12(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 144) = *(_QWORD *)(a2 + 40) + 912LL;
  return winrt::com_ptr<KeyboardHosting::TabTipAdapter>::~com_ptr<KeyboardHosting::TabTipAdapter>(*(_QWORD **)(a2 + 144));
}
