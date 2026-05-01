/*
 * XREFs of ?reset@?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAAXXZ @ 0x1806C17C8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x180254250 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_180254250.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 */

void __fastcall std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::reset(
        wil::details::StoredCallContextInfo *this)
{
  wil::details::ThreadFailureCallbackHolder *v2; // rcx

  if ( *((_BYTE *)this + 72) )
  {
    v2 = (wil::details::StoredCallContextInfo *)((char *)this + 32);
    if ( *((_DWORD *)v2 + 6) )
      wil::details::ThreadFailureCallbackHolder::StopWatching(v2);
    wil::details::StoredCallContextInfo::ClearMessage(this);
    *((_BYTE *)this + 72) = 0;
  }
}
