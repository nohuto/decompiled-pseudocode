/*
 * XREFs of ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x180137594
 * Callers:
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001781C (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflecto.c)
 *     _lambda_b534361c50cb4958853f48f5e7b1e06a_::operator() @ 0x18002D740 (_lambda_b534361c50cb4958853f48f5e7b1e06a_--operator().c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180190C7C (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     _lambda_ccf65d9649214ffd774f2e628ae5cb52_::operator() @ 0x18019C97C (_lambda_ccf65d9649214ffd774f2e628ae5cb52_--operator().c)
 *     _lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::operator() @ 0x18019CDF8 (_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_--operator().c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18019E800 (-ContinueOnCurrentThread@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgRef.c)
 *     _lambda_5a859347bbbbbb78c34c3a6938b2a83e_::operator() @ 0x1801A7048 (_lambda_5a859347bbbbbb78c34c3a6938b2a83e_--operator().c)
 *     _lambda_3f7c4ca579c2955647d5fca56c9af8c5_::operator() @ 0x1801AF8E8 (_lambda_3f7c4ca579c2955647d5fca56c9af8c5_--operator().c)
 *     _lambda_4d6a380c2bab4ae2f41af78280fc3735_::operator() @ 0x1801D78FC (_lambda_4d6a380c2bab4ae2f41af78280fc3735_--operator().c)
 *     _lambda_724db070561b64a1d673c65688c83bb1_::operator()_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___ @ 0x1805BECAC (_lambda_724db070561b64a1d673c65688c83bb1_--operator()_winrt--Windows--Foundation--IAsyncOperatio.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x18022B030 (-AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
wil::ActivityThreadWatcher *__fastcall wil::ActivityThreadWatcher::ActivityThreadWatcher(
        wil::ActivityThreadWatcher *this,
        struct wil::details::IFailureCallback *a2,
        const struct wil::details::StoredCallContextInfo *a3)
{
  *((_BYTE *)this + 24) = 0;
  *(_DWORD *)this = *(_DWORD *)a3;
  *((_QWORD *)this + 1) = *((_QWORD *)a3 + 1);
  if ( *((_BYTE *)a3 + 24) )
    wil::details::StoredCallContextInfo::AssignMessage(this, *((const unsigned __int16 **)a3 + 2));
  else
    *((_QWORD *)this + 2) = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = this;
  wil::details::ThreadFailureCallbackHolder::StartWatching((wil::ActivityThreadWatcher *)((char *)this + 32));
  return this;
}
