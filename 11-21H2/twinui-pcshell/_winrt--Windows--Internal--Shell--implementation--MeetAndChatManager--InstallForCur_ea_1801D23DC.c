/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1_::_1_::dtor$12 @ 0x1801D23DC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18001B0B4 (--1-$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync__ResumeCoro_1_::_1_::dtor_12(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 168) = *(_QWORD *)(a2 + 48) + 912LL;
  return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory>::~com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory>(*(_QWORD **)(a2 + 168));
}
