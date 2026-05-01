/*
 * XREFs of ??1?$optional@VActivityThreadWatcher@wil@@@std@@QEAA@XZ @ 0x1806B086C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x180254250 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_180254250.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1_::_1_::dtor$11 @ 0x180254856 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCur_ea_180254856.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
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
