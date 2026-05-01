/*
 * XREFs of _lambda_5bca6f87553ee4a307de3070de971dc8_::operator() @ 0x1801B0020
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5bca6f87553ee4a307de3070de971dc8___::Run @ 0x1801B11A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5bca6f87553ee4a307de3070de971dc8___--Run.c)
 * Callees:
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18008D1B0 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800A46A0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800E6350 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180181988 (-UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_1e563fd95344ca67be7b6f27f8cd95fa___ @ 0x1801AEF00 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_1e563fd95344ca67be7b6f27f8cd95fa___.c)
 *     ??$StopWithResult@_NAEAU?$atomic@_N@std@@@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXJ$$QEA_NAEAU?$atomic@_N@std@@@Z @ 0x1801AF040 (--$StopWithResult@_NAEAU-$atomic@_N@std@@@InputAppActivation@TouchKeyboardExperienceTelemetryLog.c)
 *     ?StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGHI@Z @ 0x1801B1280 (-StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGHI@Z.c)
 *     ??$RetryCountMaxReached@AEAU?$atomic@I@std@@@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXAEAU?$atomic@I@std@@@Z @ 0x1804581B0 (--$RetryCountMaxReached@AEAU-$atomic@I@std@@@InputAppActivation@TouchKeyboardExperienceTelemetry.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18045A67C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ??1InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AD98 (--1InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?BuildInputAppStartupPreferences@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18045CC34 (-BuildInputAppStartupPreferences@TouchKeyboardExperienceManager@@AEAA-AV-$basic_string@GU-$char_.c)
 *     ?ClearCurrentInputAppId@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x18045CEA8 (-ClearCurrentInputAppId@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 *     _anonymous_namespace_::GetRelaunchPolicyFromActivationResult @ 0x18045EA6C (_anonymous_namespace_--GetRelaunchPolicyFromActivationResult.c)
 *     ?RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1804641A8 (-RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18047308C (-OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180475584 (-OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1804793DC (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_5bca6f87553ee4a307de3070de971dc8_::operator()(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // rsi
  unsigned __int16 *v2; // r14
  __int64 v3; // rbx
  const unsigned __int16 *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int32 v15; // eax
  __int64 v16; // rdi
  volatile __int32 *v17; // rbx
  int RelaunchPolicyFromActivationResult; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  volatile signed __int32 *v21; // r8
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  __int64 v24; // rdx
  __int64 v26; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C8h] BYREF
  void *v28[4]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v29[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v1 = a1;
  v2 = a1 + 16;
  v3 = *((_QWORD *)a1 + 4);
  v4 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v4 = *(const unsigned __int16 **)a1;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v29);
  v29[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivation::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppActivation::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::InputAppActivation *)v29,
    v4,
    *(_DWORD *)(v3 + 1192),
    *(_DWORD *)(v3 + 1196));
  if ( TouchKeyboardExperienceManager::IsSessionShuttingDown(v6, v5) )
  {
    _InterlockedExchange((volatile __int32 *)(v3 + 1200), -2147024255);
    LOBYTE(v26) = 1;
    TouchKeyboardExperienceTelemetryLogger::InputAppActivation::StopWithResult<bool,std::atomic<bool> &>(
      (TouchKeyboardExperienceTelemetryLogger::InputAppActivation *)v29,
      *(unsigned int *)(v3 + 1200),
      (bool *)&v26,
      (bool *)(v3 + 1205));
    goto LABEL_25;
  }
  v10 = TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges(
          (TouchKeyboardExperienceManager *)v3,
          v7,
          v8,
          v9);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1069,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  v12 = TouchKeyboardExperienceManager::RegisterForApplicationStateChanges((TouchKeyboardExperienceManager *)v3);
  *(_BYTE *)(v3 + 1204) = 0;
  if ( v12 < 0 )
  {
    v13 = 4202LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_28;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 1196));
  v14 = TouchKeyboardExperienceManager::BuildInputAppStartupPreferences(v11, v28);
  if ( *(_QWORD *)(v14 + 24) >= 8uLL )
    v14 = *(_QWORD *)v14;
  if ( *((_QWORD *)v1 + 3) >= 8uLL )
    v1 = *(unsigned __int16 **)v1;
  v15 = ActivateApplicationForExperienceWithPropertySet(v1, (const WCHAR *)v14, 0LL, 0LL, 1u, 0LL);
  v16 = *(_QWORD *)v2;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)v2 + 1200LL), v15);
  std::wstring::~wstring(v28);
  v17 = (volatile __int32 *)(v16 + 1192);
  if ( *(int *)(v16 + 1200) >= 0 )
  {
    _InterlockedExchange(v17, 0);
    KeyboardHosting::TabTipAdapter::OnInputAppActivated(*(KeyboardHosting::TabTipAdapter **)(v16 + 736));
LABEL_24:
    v3 = v16;
    goto LABEL_25;
  }
  TouchKeyboardExperienceManager::ClearCurrentInputAppId((TouchKeyboardExperienceManager *)v16);
  KeyboardHosting::TabTipAdapter::OnInputAppTerminated(*(KeyboardHosting::TabTipAdapter **)(v16 + 736));
  _InterlockedIncrement(v17);
  if ( *v17 >= 0x168u )
  {
    TouchKeyboardExperienceTelemetryLogger::InputAppActivation::RetryCountMaxReached<std::atomic<unsigned int> &>(
      v29,
      v16 + 1192);
    _InterlockedExchange(v17, 0);
    goto LABEL_24;
  }
  RelaunchPolicyFromActivationResult = anonymous_namespace_::GetRelaunchPolicyFromActivationResult(*(unsigned int *)(v16 + 1200));
  if ( RelaunchPolicyFromActivationResult == 1 )
  {
    v22 = KeyboardHosting::TabTipAdapter::RelaunchInputAppAfterTermination(*(KeyboardHosting::TabTipAdapter **)(v16 + 736));
    v23 = retaddr;
    if ( v22 >= 0 )
      goto LABEL_24;
    v24 = 4238LL;
LABEL_23:
    wil::details::in1diag3::_Log_Hr(
      v23,
      (void *)v24,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v22);
    goto LABEL_24;
  }
  v3 = v16;
  if ( RelaunchPolicyFromActivationResult == 2 )
  {
    v27 = v16;
    v22 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_1e563fd95344ca67be7b6f27f8cd95fa___(
            v20,
            v19,
            v21,
            &v27);
    v23 = retaddr;
    if ( v22 < 0 )
    {
      v24 = 4260LL;
      goto LABEL_23;
    }
  }
LABEL_25:
  LOBYTE(v26) = 0;
  TouchKeyboardExperienceTelemetryLogger::InputAppActivation::StopWithResult<bool,std::atomic<bool> &>(
    (TouchKeyboardExperienceTelemetryLogger::InputAppActivation *)v29,
    *(unsigned int *)(v3 + 1200),
    (bool *)&v26,
    (bool *)(v3 + 1205));
  v12 = *(_DWORD *)(v3 + 1200);
  if ( v12 < 0 )
  {
    v13 = 4269LL;
    goto LABEL_27;
  }
LABEL_28:
  TouchKeyboardExperienceTelemetryLogger::InputAppActivation::~InputAppActivation((TouchKeyboardExperienceTelemetryLogger::InputAppActivation *)v29);
  return (unsigned int)v12;
}
