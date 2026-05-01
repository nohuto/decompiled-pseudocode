/*
 * XREFs of _lambda_2f79d86dba88adc4f3637a9ed70ae0ec_::operator() @ 0x1801AF838
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2f79d86dba88adc4f3637a9ed70ae0ec___::Run @ 0x1801B1140 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2f79d86dba88adc4f3637a9ed70ae0ec___--Run.c)
 * Callees:
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18008D1B0 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BF9E8 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18017928C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180190C7C (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18022F360 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_2f79d86dba88adc4f3637a9ed70ae0ec_::operator()(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int IsReady; // eax
  _BYTE v5[88]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 8),
    (wil::ActivityThreadWatcher *)v5);
  if ( !TouchKeyboardExperienceManager::IsSessionShuttingDown(v3, v2) )
  {
    if ( *(_QWORD *)a1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 736LL) )
      {
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)a1 + 1184LL), GetTickCount64());
        IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(*(KeyboardHosting::TabTipAdapter **)(*(_QWORD *)a1 + 736LL));
        if ( IsReady < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x728,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)IsReady);
      }
    }
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    a1 + 8,
    0);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v5);
}
