/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1_::_1_::dtor$11 @ 0x180254856
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$optional@VActivityThreadWatcher@wil@@@std@@QEAA@XZ @ 0x1806B086C (--1-$optional@VActivityThreadWatcher@wil@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync__ResumeCoro_1_::_1_::dtor_11(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 136) = *(_QWORD *)(a2 + 40) + 736LL;
  return std::optional<wil::ActivityThreadWatcher>::~optional<wil::ActivityThreadWatcher>(*(wil::details::StoredCallContextInfo **)(a2 + 136));
}
