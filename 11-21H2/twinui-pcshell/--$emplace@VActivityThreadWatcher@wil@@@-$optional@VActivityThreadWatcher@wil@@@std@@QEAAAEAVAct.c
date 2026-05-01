/*
 * XREFs of ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x1805BFADC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1801D1BE0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_1801D1BE0.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@$$QEAV01@@Z @ 0x1805C0440 (--0ActivityThreadWatcher@wil@@QEAA@$$QEAV01@@Z.c)
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
  wil::ActivityThreadWatcher::ActivityThreadWatcher(this, a2);
  result = this;
  *((_BYTE *)this + 72) = 1;
  return result;
}
