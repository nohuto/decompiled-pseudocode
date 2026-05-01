/*
 * XREFs of ??1?$optional@VActivityThreadWatcher@wil@@@std@@QEAA@XZ @ 0x1805C0740
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1801D1BE0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_1801D1BE0.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1_::_1_::dtor$11 @ 0x1801D23B0 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCur_ea_1801D23B0.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 */

void __fastcall std::optional<wil::ActivityThreadWatcher>::~optional<wil::ActivityThreadWatcher>(
        wil::details::StoredCallContextInfo *this)
{
  wil::details::ThreadFailureCallbackHolder *v2; // rcx

  if ( *((_BYTE *)this + 72) )
  {
    v2 = (wil::details::StoredCallContextInfo *)((char *)this + 32);
    if ( *((_DWORD *)v2 + 6) )
      wil::details::ThreadFailureCallbackHolder::StopWatching(v2);
    wil::details::StoredCallContextInfo::ClearMessage(this);
  }
}
