/*
 * XREFs of _lambda_524e7201540b0d78c05a86380e3a64a5_::operator() @ 0x180376804
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_524e7201540b0d78c05a86380e3a64a5___::Run @ 0x180379300 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_524e7201540b0d78c05a86380e3a64a5___--Run.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180190C7C (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ExperienceManager_CheckAndPopulateContact_PopulatedDelayLoadedContact@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ @ 0x1803774EC (-ExperienceManager_CheckAndPopulateContact_PopulatedDelayLoadedContact@ExperienceManager_CheckAn.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18037A048 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_524e7201540b0d78c05a86380e3a64a5_::operator()(_QWORD *a1)
{
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  _BYTE v6[32]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v7[24]; // [rsp+40h] [rbp-38h] BYREF
  int v8; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)(a1 + 2);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 2),
    (wil::ActivityThreadWatcher *)v6);
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 56LL))(*a1, a1[1]);
  v4 = v3;
  if ( v3 >= 0 )
  {
    QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::ExperienceManager_CheckAndPopulateContact_PopulatedDelayLoadedContact(v2);
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x441,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  }
  if ( v8 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v7);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v6);
  return v4;
}
