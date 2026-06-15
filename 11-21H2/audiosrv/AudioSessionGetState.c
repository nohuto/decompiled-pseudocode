/*
 * XREFs of AudioSessionGetState @ 0x18000C3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionGetState(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  _FILETIME v3; // rsi
  __int64 v4; // rbx
  __int64 v6; // rcx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v9; // eax
  unsigned int v10; // ebx
  union _RTL_RUN_ONCE *v12; // [rsp+20h] [rbp-50h] BYREF
  int v13; // [rsp+28h] [rbp-48h]
  _QWORD pv[2]; // [rsp+30h] [rbp-40h] BYREF
  DWORD v15; // [rsp+40h] [rbp-30h]
  const wchar_t *v16; // [rsp+48h] [rbp-28h]
  _FILETIME v17; // [rsp+50h] [rbp-20h]
  char v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+5Ch] [rbp-14h]
  int v20; // [rsp+60h] [rbp-10h]
  __int64 fPending; // [rsp+A0h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+B0h] [rbp+40h] BYREF

  v2 = *a1;
  v3 = g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
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
  v6 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v6;
  CurrentThreadId = GetCurrentThreadId();
  v19 = 0;
  v20 = 0;
  v15 = CurrentThreadId;
  v16 = L"AudioSessionGetState";
  v17 = v3;
  v18 = 0;
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
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 144LL))(v2, a2);
  v10 = v9;
  if ( v9 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionGetState", 0x679u, v9);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v10;
}
