/*
 * XREFs of ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18052A148
 * Callers:
 *     _lambda_ca8ece6d0ba6e230db3589fff51d060c_::operator() @ 0x18020866C (_lambda_ca8ece6d0ba6e230db3589fff51d060c_--operator().c)
 *     ?OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x18020AA5C (-OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4065fbdabcb0238c7b9491b60aa07d8e___::Run @ 0x18020B920 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4065fbdabcb0238c7b9491b60aa07d8e___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ea84869255a99aa3914583e116944a22___::Run @ 0x18020BAB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ea84869255a99aa3914583e116944a22___--Run.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800AFF20 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??1RelaunchInputAppAfterTermination@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802DCDA2 (--1RelaunchInputAppAfterTermination@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802DCE94 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ??$?0$$V@RelaunchInputAppAfterTermination@TouchKeyboardExperienceTelemetryLogger@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18051D978 (--$-0$$V@RelaunchInputAppAfterTermination@TouchKeyboardExperienceTelemetryLogger@@AEAA@U-$integr.c)
 *     ?InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1805248A8 (-InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::RelaunchInputAppAfterTermination(
        KeyboardHosting::TabTipAdapter *this,
        char a2)
{
  int v3; // edx
  SC_HANDLE v4; // rax
  unsigned int v5; // ebx
  int IsReady; // eax
  __int64 v8; // rdx
  __int64 v9[40]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTermination::RelaunchInputAppAfterTermination(
    (__int64)v9,
    a2);
  if ( GetSystemMetrics(0x2000) )
    goto LABEL_4;
  v4 = OpenSCManagerW(0LL, 0LL, 1u);
  if ( v4 )
  {
    CloseServiceHandle(v4);
LABEL_7:
    IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(this);
    v5 = IsReady;
    if ( IsReady >= 0 )
    {
      IsReady = KeyboardHosting::TabTipAdapter::InvokeEnsureInputAppIsActivated(this);
      v5 = IsReady;
      if ( IsReady >= 0 )
        goto LABEL_4;
      v8 = 2875LL;
    }
    else
    {
      v8 = 2874LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)IsReady);
    goto LABEL_5;
  }
  if ( GetLastError() != 1115 )
    goto LABEL_7;
LABEL_4:
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v9, v3);
  v5 = 0;
LABEL_5:
  TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTermination::~RelaunchInputAppAfterTermination((TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTermination *)v9);
  return v5;
}
