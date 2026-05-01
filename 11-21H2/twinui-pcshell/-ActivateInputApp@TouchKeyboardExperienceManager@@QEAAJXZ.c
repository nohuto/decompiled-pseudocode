/*
 * XREFs of ?ActivateInputApp@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18045BB50
 * Callers:
 *     ?ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180065890 (-ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18022F360 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BF134 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?Stop@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1801B1380 (-Stop@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ??1ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AD40 (--1ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?ActivationSkipped@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18045BCB8 (-ActivationSkipped@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV?$function@$$A6AJPEBG@Z@std@@@Z @ 0x18045E318 (-GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV-$function@$$A6AJPEBG@Z@st.c)
 *     ?StartActivity@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1804652E4 (-StartActivity@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::ActivateInputApp(TouchKeyboardExperienceManager *this)
{
  unsigned int v2; // ebx
  const unsigned __int16 *v3; // rdx
  char v4; // si
  char v5; // al
  int DefautInputAppIdAndContinue; // eax
  int v7; // r14d
  int v9[4]; // [rsp+20h] [rbp-E0h]
  void **v10; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v11; // [rsp+38h] [rbp-C8h]
  char v12; // [rsp+48h] [rbp-B8h]
  TouchKeyboardExperienceManager *v13; // [rsp+50h] [rbp-B0h]
  void ***v14; // [rsp+68h] [rbp-98h]
  char v15; // [rsp+80h] [rbp-80h]
  _QWORD v16[40]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"ActivateInputApp");
  v16[0] = &TouchKeyboardExperienceTelemetryLogger::ActivateInputApp::`vftable';
  TouchKeyboardExperienceTelemetryLogger::ActivateInputApp::StartActivity((TouchKeyboardExperienceTelemetryLogger::ActivateInputApp *)v16);
  v2 = 0;
  if ( *((_BYTE *)this + 1205) )
  {
    v3 = L"SkippedDuringConnectedStandby";
LABEL_9:
    TouchKeyboardExperienceTelemetryLogger::ActivateInputApp::Stop(
      (TouchKeyboardExperienceTelemetryLogger::ActivateInputApp *)v16,
      v3);
    goto LABEL_10;
  }
  v4 = 0;
  v5 = *((_BYTE *)this + 1204);
  *((_BYTE *)this + 1204) = 1;
  if ( v5 )
  {
    TouchKeyboardExperienceTelemetryLogger::ActivateInputApp::ActivationSkipped((TouchKeyboardExperienceTelemetryLogger::ActivateInputApp *)v16);
    v4 = 1;
LABEL_7:
    v3 = L"SkippedDuringAnotherActivation";
    if ( !v4 )
      v3 = L"Activated";
    goto LABEL_9;
  }
  *(_QWORD *)v9 = TouchKeyboardExperienceManager::OnInputAppChangeApproved;
  v9[2] = 0;
  v10 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (TouchKeyboardExperienceManager::*)(unsigned short const *),TouchKeyboardExperienceManager *,std::_Ph<1> const &>,long,unsigned short const *>::`vftable';
  v11 = *(_OWORD *)v9;
  v12 = v15;
  v13 = this;
  v14 = &v10;
  DefautInputAppIdAndContinue = TouchKeyboardExperienceManager::GetDefautInputAppIdAndContinue(this, &v10);
  v7 = DefautInputAppIdAndContinue;
  if ( DefautInputAppIdAndContinue >= 0 )
    goto LABEL_7;
  *((_BYTE *)this + 1204) = 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x20F,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)DefautInputAppIdAndContinue);
  v2 = v7;
LABEL_10:
  TouchKeyboardExperienceTelemetryLogger::ActivateInputApp::~ActivateInputApp((TouchKeyboardExperienceTelemetryLogger::ActivateInputApp *)v16);
  return v2;
}
