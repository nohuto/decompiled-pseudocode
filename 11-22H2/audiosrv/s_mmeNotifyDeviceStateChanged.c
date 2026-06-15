/*
 * XREFs of s_mmeNotifyDeviceStateChanged @ 0x180002200
 * Callers:
 *     <none>
 * Callees:
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x180002480 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z @ 0x180002560 (-OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180065AF8 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     atexit @ 0x180067008 (atexit.c)
 *     WPP_SF_Sd @ 0x1800E3B38 (WPP_SF_Sd.c)
 */

__int64 __fastcall s_mmeNotifyDeviceStateChanged(__int64 a1, __int64 a2, int a3)
{
  struct _FILETIME v3; // rsi
  __int64 v4; // rbx
  DWORD LastError; // edi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  PSID v10; // rsi
  PSID v11; // rbx
  BOOL v12; // ebx
  DynamicAudioEndpointManager *v13; // rbx
  WINBOOL IsMember; // [rsp+30h] [rbp-39h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-35h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-31h] BYREF
  _FILETIME pftDueTime; // [rsp+40h] [rbp-29h] BYREF
  _QWORD pv[2]; // [rsp+48h] [rbp-21h] BYREF
  DWORD v20; // [rsp+58h] [rbp-11h]
  const wchar_t *v21; // [rsp+60h] [rbp-9h]
  struct _FILETIME v22; // [rsp+68h] [rbp-1h]
  char v23; // [rsp+70h] [rbp+7h]
  __int64 v24; // [rsp+74h] [rbp+Bh]
  __int128 v25; // [rsp+80h] [rbp+17h] BYREF
  __int16 v26; // [rsp+90h] [rbp+27h]

  v3 = g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  LastError = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    *(_QWORD *)&v25 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801CFD38;
    qword_1801CFD38 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801CFD50 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    DWORD2(v25) = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v25);
  }
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v22 = v3;
  v20 = CurrentThreadId;
  v21 = L"s_mmeNotifyDeviceStateChanged";
  v23 = 0;
  v24 = 0LL;
  if ( (unsigned int)v4 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (_FILETIME)(-10000 * v4 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v4 / 3, 0);
    }
  }
  v10 = AudioEndpointBuilderSid;
  v11 = AudiosrvSid;
  if ( RpcImpersonateClient(0LL) )
    goto LABEL_20;
  v12 = CheckTokenMembership(0LL, v11, &IsMember);
  if ( v12 && !IsMember )
    v12 = CheckTokenMembership(0LL, v10, &IsMember);
  RpcRevertToSelf();
  if ( !v12 )
  {
LABEL_20:
    LastError = GetLastError();
  }
  else
  {
    if ( !IsMember )
      goto LABEL_17;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        25,
        (unsigned int)&WPP_ea4dc79131a5388790567eb319c308bd_Traceguids,
        a2,
        a3);
    }
    RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
    RtlReleaseResource(&PnpInfoResource);
    v13 = g_DynamicAudioEndpointManager;
    v26 = 0;
    v25 = 0LL;
    DynamicAudioEndpointManager::OnRuleOperation(g_DynamicAudioEndpointManager, a2, 0LL, &v25, a3);
    DynamicAudioEndpointManager::RefreshPublishedDefaults(v13, (bool (*const)[9])&v25, 0);
    if ( !IsMember )
LABEL_17:
      LastError = 5;
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return LastError;
}
