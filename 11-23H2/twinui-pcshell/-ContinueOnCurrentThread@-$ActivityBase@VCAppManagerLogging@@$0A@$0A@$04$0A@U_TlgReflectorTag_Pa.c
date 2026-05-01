/*
 * XREFs of ?ContinueOnCurrentThread@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001D128
 * Callers:
 *     ?ViewLoaded@TaskViewHost@@UEAAJXZ @ 0x18001CF30 (-ViewLoaded@TaskViewHost@@UEAAJXZ.c)
 *     _lambda_3299b7567c8e16a49084b1350d61b7f6_::operator() @ 0x180026D3C (_lambda_3299b7567c8e16a49084b1350d61b7f6_--operator().c)
 *     _lambda_201adf67891f12ccd8a16b46f471aeff_::operator() @ 0x18004F828 (_lambda_201adf67891f12ccd8a16b46f471aeff_--operator().c)
 *     ?ToggleAllUpView@TaskViewHost@@UEAAJXZ @ 0x180070F80 (-ToggleAllUpView@TaskViewHost@@UEAAJXZ.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1 @ 0x180254A90 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDes_ea_180254A90.c)
 * Callees:
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800BBDE4 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 */

// Hidden C++ exception states: #wind=1
wil::ActivityThreadWatcher *__fastcall wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
        struct wil::details::IFailureCallback *a1,
        wil::ActivityThreadWatcher *this)
{
  _DWORD *v3; // r8

  v3 = (_DWORD *)*((_QWORD *)a1 + 6);
  if ( *v3 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      this,
      a1,
      (const struct wil::details::StoredCallContextInfo *)(v3 + 10));
  }
  else
  {
    *(_OWORD *)this = 0LL;
    *((_OWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = 0;
    *((_QWORD *)this + 8) = 0LL;
  }
  return this;
}
