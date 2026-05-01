/*
 * XREFs of ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1806B02F0
 * Callers:
 *     _lambda_e61605ece55422ba9fa5b55a2642b1df_::operator()_winrt::Windows::Foundation::IAsyncAction_ @ 0x1806AF05C (_lambda_e61605ece55422ba9fa5b55a2642b1df_--operator()_winrt--Windows--Foundation--IAsyncAction_.c)
 *     _lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::operator()_winrt::Windows::Foundation::IAsyncAction_ @ 0x1806AF17C (_lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_--operator()_winrt--Windows--Foundation--IAsyncAction_.c)
 *     winrt::impl::make_delegate_winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_724db070561b64a1d673c65688c83bb1___ @ 0x1806B00CC (winrt--impl--make_delegate_winrt--Windows--Foundation--AsyncOperationWithProgressCompletedHandle.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1806B04FC (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag.c)
 * Callees:
 *     ??0?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x1800AFD8C (--0-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2,
        char a3)
{
  char *v5; // rsi
  __int64 v6; // rax
  bool v7; // zf

  *(_QWORD *)a1 = &wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    a3);
  v5 = (char *)a1 + 56;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)a1 + 56,
    a2 + 56);
  *((_QWORD *)a1 + 39) = *(_QWORD *)(a2 + 312);
  *(_QWORD *)(a2 + 312) = 0LL;
  v6 = *((_QWORD *)a1 + 39);
  if ( v6 )
    v5 = (char *)(v6 + 8);
  *((_QWORD *)a1 + 6) = v5;
  *((_QWORD *)a1 + 5) = v5 + 40;
  v7 = *(_DWORD *)(a2 + 32) == 0;
  *(_QWORD *)(a2 + 48) = a2 + 56;
  if ( !v7 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 8));
  return a1;
}
