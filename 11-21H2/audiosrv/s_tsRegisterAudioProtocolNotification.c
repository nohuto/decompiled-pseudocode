/*
 * XREFs of s_tsRegisterAudioProtocolNotification @ 0x180023F80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 */

__int64 __fastcall s_tsRegisterAudioProtocolNotification(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  _FILETIME v5; // rbp
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r9d
  union _RTL_RUN_ONCE *v12; // [rsp+20h] [rbp-78h] BYREF
  int v13; // [rsp+28h] [rbp-70h]
  _QWORD pv[2]; // [rsp+30h] [rbp-68h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-58h]
  const wchar_t *v16; // [rsp+48h] [rbp-50h]
  _FILETIME v17; // [rsp+50h] [rbp-48h]
  char v18; // [rsp+58h] [rbp-40h]
  __int64 v19; // [rsp+5Ch] [rbp-3Ch]
  __int64 fPending; // [rsp+B0h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+B8h] [rbp+20h] BYREF

  if ( !(unsigned int)IsTSRegisterAudioProtocolNotificationSupported() )
    return 2147500033LL;
  v4 = g_AudioSrvWatchDogTimerInMs;
  v5 = g_AudioHealthMonitor;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v12 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v13 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v12);
  }
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v17 = v5;
  v18 = 0;
  v19 = 0LL;
  v16 = L"s_tsRegisterAudioProtocolNotification";
  if ( (unsigned int)v4 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      fPending = -10000 * v4 / 3;
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&fPending, (unsigned int)v4 / 3, 0);
    }
  }
  v7 = TS_RegisterAudioProtocolNotification(a1, a2);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v8, v9, v10);
  return v7;
}
