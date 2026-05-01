/*
 * XREFs of ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x1806AFBE4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x180254250 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_180254250.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@$$QEAV01@@Z @ 0x1802E9B80 (--0ActivityThreadWatcher@wil@@QEAA@$$QEAV01@@Z.c)
 */

wil::details::StoredCallContextInfo *__fastcall std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>(
        wil::details::StoredCallContextInfo *this,
        __int64 a2)
{
  wil::details::ThreadFailureCallbackHolder *v4; // rcx
  wil::details::StoredCallContextInfo *result; // rax

  if ( *((_BYTE *)this + 72) )
  {
    v4 = (wil::details::StoredCallContextInfo *)((char *)this + 32);
    if ( *((_DWORD *)v4 + 6) )
      wil::details::ThreadFailureCallbackHolder::StopWatching(v4);
    wil::details::StoredCallContextInfo::ClearMessage(this);
    *((_BYTE *)this + 72) = 0;
  }
  wil::ActivityThreadWatcher::ActivityThreadWatcher((__int64)this, a2);
  result = this;
  *((_BYTE *)this + 72) = 1;
  return result;
}
