/*
 * XREFs of s_mmeNotifyDefaultDeviceChanged @ 0x180002650
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180065B08 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180067018 (atexit.c)
 *     WPP_SF_ddS @ 0x180110754 (WPP_SF_ddS.c)
 */

__int64 __fastcall s_mmeNotifyDefaultDeviceChanged(__int64 a1, int a2, char a3, __int64 a4)
{
  struct _FILETIME v4; // rdi
  __int64 v5; // rbx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  PSID v11; // rdi
  PSID v12; // rbx
  BOOL v13; // ebx
  int v14; // edx
  int v15; // r8d
  DWORD LastError; // ebx
  WINBOOL IsMember; // [rsp+30h] [rbp-29h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-25h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-21h] BYREF
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp-19h] BYREF
  _QWORD pv[2]; // [rsp+48h] [rbp-11h] BYREF
  DWORD v23; // [rsp+58h] [rbp-1h]
  const wchar_t *v24; // [rsp+60h] [rbp+7h]
  struct _FILETIME v25; // [rsp+68h] [rbp+Fh]
  char v26; // [rsp+70h] [rbp+17h]
  __int64 v27; // [rsp+74h] [rbp+1Bh]
  union _RTL_RUN_ONCE *v28; // [rsp+80h] [rbp+27h] BYREF
  int v29; // [rsp+88h] [rbp+2Fh]

  v4 = g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v28 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801CFD38;
    qword_1801CFD38 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801CFD50 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v29 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v28);
  }
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v25 = v4;
  v23 = CurrentThreadId;
  v24 = L"s_mmeNotifyDefaultDeviceChanged";
  v26 = 0;
  v27 = 0LL;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v5 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v5 / 3, 0);
    }
  }
  v11 = AudioEndpointBuilderSid;
  v12 = AudiosrvSid;
  if ( RpcImpersonateClient(0LL) )
    goto LABEL_20;
  v13 = CheckTokenMembership(0LL, v12, &IsMember);
  if ( v13 && !IsMember )
    v13 = CheckTokenMembership(0LL, v11, &IsMember);
  RpcRevertToSelf();
  if ( !v13 )
  {
LABEL_20:
    LastError = GetLastError();
    CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
    return LastError;
  }
  else
  {
    if ( !IsMember )
      goto LABEL_19;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_ddS(*((_QWORD *)WPP_GLOBAL_Control + 2), v14, v15, a2, a3, a4);
    }
    RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
    RtlReleaseResource(&PnpInfoResource);
    if ( IsMember )
    {
      CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
      return 0LL;
    }
    else
    {
LABEL_19:
      CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
      return 5LL;
    }
  }
}
