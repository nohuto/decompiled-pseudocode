/*
 * XREFs of ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800BBDE4
 * Callers:
 *     ?ContinueOnCurrentThread@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001D128 (-ContinueOnCurrentThread@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     _lambda_31520e38682400c193ecfa4924368fd9_::operator() @ 0x1800250F0 (_lambda_31520e38682400c193ecfa4924368fd9_--operator().c)
 *     _lambda_b534361c50cb4958853f48f5e7b1e06a_::operator() @ 0x180059870 (_lambda_b534361c50cb4958853f48f5e7b1e06a_--operator().c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1801D8F2C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     _lambda_0190d4b48233ee3d7e5c167dfa5e03d8_::operator() @ 0x1801E8E4C (_lambda_0190d4b48233ee3d7e5c167dfa5e03d8_--operator().c)
 *     _lambda_224ca2662a1dba27bb7ec196acbc4aa2_::operator() @ 0x1801E8FDC (_lambda_224ca2662a1dba27bb7ec196acbc4aa2_--operator().c)
 *     _lambda_2b1190aa71c35694843c2dd3124163c4_::operator() @ 0x1801E90D8 (_lambda_2b1190aa71c35694843c2dd3124163c4_--operator().c)
 *     _lambda_9e570927e665d205f933b0ae213f3c70_::operator() @ 0x1801E932C (_lambda_9e570927e665d205f933b0ae213f3c70_--operator().c)
 *     _lambda_cdce16f825702c0a1c57b181431f22d2_::operator() @ 0x1801E9714 (_lambda_cdce16f825702c0a1c57b181431f22d2_--operator().c)
 *     _lambda_28173a8c926c87e1969fb34dfb279c06_::operator() @ 0x1801F7AB4 (_lambda_28173a8c926c87e1969fb34dfb279c06_--operator().c)
 *     _lambda_49fb25682482a2b5a4c0c490b68b0b86_::operator() @ 0x1801F7BC0 (_lambda_49fb25682482a2b5a4c0c490b68b0b86_--operator().c)
 *     _lambda_a09f288fb701b6a3bb133eb64dd6b836_::operator() @ 0x180208118 (_lambda_a09f288fb701b6a3bb133eb64dd6b836_--operator().c)
 *     _lambda_71ae74f74888d637c85562ef224bc48a_::operator() @ 0x180285B78 (_lambda_71ae74f74888d637c85562ef224bc48a_--operator().c)
 *     _lambda_b77313e954014d84b78f3886c1783ac6_::operator() @ 0x180285E9C (_lambda_b77313e954014d84b78f3886c1783ac6_--operator().c)
 *     _lambda_2f6d80cf1a257304c33e766508a8500c_::operator() @ 0x1804E62B4 (_lambda_2f6d80cf1a257304c33e766508a8500c_--operator().c)
 *     _lambda_7b7d3edf23afb6f3b75600d49fe376df_::operator() @ 0x1804E6F20 (_lambda_7b7d3edf23afb6f3b75600d49fe376df_--operator().c)
 *     _lambda_724db070561b64a1d673c65688c83bb1_::operator()_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___ @ 0x1806AED14 (_lambda_724db070561b64a1d673c65688c83bb1_--operator()_winrt--Windows--Foundation--IAsyncOperatio.c)
 *     _lambda_21d9478fa7481aa5ac8b815bdb34bba5_::operator() @ 0x1806CBCEC (_lambda_21d9478fa7481aa5ac8b815bdb34bba5_--operator().c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800BCA00 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x1802D130C (-AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z.c)
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
