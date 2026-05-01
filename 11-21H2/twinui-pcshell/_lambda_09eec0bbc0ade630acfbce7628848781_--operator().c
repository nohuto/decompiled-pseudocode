/*
 * XREFs of _lambda_09eec0bbc0ade630acfbce7628848781_::operator() @ 0x1801AF758
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_09eec0bbc0ade630acfbce7628848781___::Run @ 0x1801B1090 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_09eec0bbc0ade630acfbce7628848781___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800752E4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BF9E8 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18017928C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180190C7C (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x18045F8A4 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SIPShowUpOnLogonUIBugFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804645D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SIPShowUpOnLogonUIBugFix@@@details@wil@@Q.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180469948 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_09eec0bbc0ade630acfbce7628848781_::operator()(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rdx
  int v6[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v7[80]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 24),
    (wil::ActivityThreadWatcher *)v7);
  v2 = 0;
  *(_QWORD *)v6 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 8), (__int64)v6);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x547,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( *(_QWORD *)v6 )
  {
    LOBYTE(v4) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SIPShowUpOnLogonUIBugFix>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SIPShowUpOnLogonUIBugFix>::GetImpl'::`2'::impl,
      v4);
    v2 = TouchKeyboardExperienceManager::HideInputView(
           *(TouchKeyboardExperienceManager **)(a1 + 16),
           *(_DWORD *)a1,
           *(_BYTE *)(a1 + 4));
  }
  else
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    a1 + 24,
    0);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v6);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v7);
  return v2;
}
