/*
 * XREFs of ??$await_transform@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAUawaitable@?1??resume_on_signal@2@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@Z @ 0x1806AAC7C
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x180253800 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x180254250 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_180254250.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180257360 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

_QWORD *__fastcall ___await_transform_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z____promise_base_Upromise_type___coroutine_traits_U__IAsyncOperation_U__IReference__N_Foundation_Windows_winrt___Foundation_Windows_winrt__AEBVPinConsentPromptContent___experimental_std__U__IAsyncOperation_U__IReference__N_Foundation_Windows_winrt___Foundation_Windows_winrt__X_impl_winrt__QEAA_A_P__QEAUawaitable__1__resume_on_signal_2_YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__Z(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  char v4; // al
  _QWORD *v5; // rdx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 88) == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  v4 = *(_BYTE *)(a1 + 93);
  *a2 = a3;
  v5 = (_QWORD *)((a1 + 72) & -(__int64)(v4 != 0));
  if ( v5 )
  {
    *a3 = v5;
    *(_QWORD *)(((a1 + 72) & -(__int64)(v4 != 0)) + 8) = a3;
    *v5 = _lambda_3aebd2045932ec733a2f9ec0d4dcc475_::_lambda_invoker_cdecl_;
  }
  return a2;
}
