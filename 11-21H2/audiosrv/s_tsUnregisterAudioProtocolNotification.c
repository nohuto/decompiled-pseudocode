/*
 * XREFs of s_tsUnregisterAudioProtocolNotification @ 0x18000C620
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 */

__int64 __fastcall s_tsUnregisterAudioProtocolNotification(__int64 a1, __int64 a2)
{
  _FILETIME v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rcx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v9; // ebx
  union _RTL_RUN_ONCE *v11; // [rsp+20h] [rbp-50h] BYREF
  int v12; // [rsp+28h] [rbp-48h]
  _QWORD pv[2]; // [rsp+30h] [rbp-40h] BYREF
  DWORD v14; // [rsp+40h] [rbp-30h]
  const wchar_t *v15; // [rsp+48h] [rbp-28h]
  _FILETIME v16; // [rsp+50h] [rbp-20h]
  char v17; // [rsp+58h] [rbp-18h]
  int v18; // [rsp+5Ch] [rbp-14h]
  int v19; // [rsp+60h] [rbp-10h]
  __int64 fPending; // [rsp+B0h] [rbp+40h] BYREF
  LPVOID Context; // [rsp+B8h] [rbp+48h] BYREF

  if ( !(unsigned int)IsTSUnregisterAudioProtocolNotificationSupported() )
    return 2147500033LL;
  v4 = g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v11 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v12 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v11);
  }
  v6 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v6;
  CurrentThreadId = GetCurrentThreadId();
  v18 = 0;
  v19 = 0;
  v14 = CurrentThreadId;
  v15 = L"s_tsUnregisterAudioProtocolNotification";
  v16 = v4;
  v17 = 0;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      fPending = -10000 * v5 / 3;
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&fPending, (unsigned int)v5 / 3, 0);
    }
  }
  v9 = TS_UnregisterAudioProtocolNotification(a1, a2);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v9;
}
