/*
 * XREFs of ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18022F360
 * Callers:
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180177394 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     _lambda_2f79d86dba88adc4f3637a9ed70ae0ec_::operator() @ 0x1801AF838 (_lambda_2f79d86dba88adc4f3637a9ed70ae0ec_--operator().c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x1804773C0 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180477A10 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1804793DC (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18009EB10 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@QEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BB7C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@det.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BF134 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800E6350 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18022E232 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?ActivateInputApp@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18045BB50 (-ActivateInputApp@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ??1EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046F1D0 (--1EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x18047A10C (-StartActivity@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18047ACC8 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTa.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  const unsigned __int16 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  RTL_SRWLOCK *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  int IsActivated; // eax
  unsigned __int16 *v14[4]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v15[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  TouchKeyboardExperienceManager::GetCurrentInputAppId(*((_QWORD *)this + 8), (__int64)v14);
  v5 = (const unsigned __int16 *)v14;
  if ( v14[3] >= (unsigned __int16 *)8 )
    v5 = v14[0];
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"EnsureInputAppIsReady");
  v15[0] = &TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::`vftable';
  TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady *)v15,
    v5);
  v9 = (RTL_SRWLOCK *)*((_QWORD *)this + 8);
  if ( v14[2] )
  {
    IsActivated = TouchKeyboardExperienceManager::EnsureInputAppIsActivated(v9, v6, v7, v8);
    v11 = IsActivated;
    if ( IsActivated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9C0,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)IsActivated);
LABEL_9:
      TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::~EnsureInputAppIsReady((TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady *)v15);
      std::wstring::_Tidy_deallocate((__int64)v14);
      return v11;
    }
LABEL_8:
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v15);
    v11 = 0;
    goto LABEL_9;
  }
  v10 = TouchKeyboardExperienceManager::ActivateInputApp((TouchKeyboardExperienceManager *)v9);
  v11 = v10;
  if ( v10 >= 0 )
    goto LABEL_8;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9BB,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v10);
  TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::~EnsureInputAppIsReady((TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady *)v15);
  std::wstring::~wstring((void **)v14);
  return v11;
}
