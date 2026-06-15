/*
 * XREFs of AudioServerGetAllVolumes @ 0x18000D3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetAllVolumes(__int64 a1, unsigned int a2, __int64 a3)
{
  GUID v6; // xmm0
  _FILETIME v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rcx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v12; // eax
  unsigned int v13; // ebx
  LPVOID Context; // [rsp+20h] [rbp-59h] BYREF
  WINBOOL fPending; // [rsp+28h] [rbp-51h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-49h] BYREF
  DWORD v18; // [rsp+40h] [rbp-39h]
  const wchar_t *v19; // [rsp+48h] [rbp-31h]
  _FILETIME v20; // [rsp+50h] [rbp-29h]
  char v21; // [rsp+58h] [rbp-21h]
  int v22; // [rsp+5Ch] [rbp-1Dh]
  int v23; // [rsp+60h] [rbp-19h]
  _OWORD v24[2]; // [rsp+68h] [rbp-11h] BYREF
  GUID v25; // [rsp+88h] [rbp+Fh] BYREF

  if ( a1 )
    v6 = *(GUID *)(a1 + 280);
  else
    v6 = GUID_00000000_0000_0000_0000_000000000000;
  v24[0] = v6;
  v24[1] = v6;
  v25 = v6;
  EtwEventActivityIdControl(4LL, &v25);
  v7 = g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    *(_QWORD *)&v24[0] = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    DWORD2(v24[0]) = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(v24);
  }
  v9 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v9;
  CurrentThreadId = GetCurrentThreadId();
  v22 = 0;
  v23 = 0;
  v18 = CurrentThreadId;
  v19 = L"AudioServerGetAllVolumes";
  v20 = v7;
  v21 = 0;
  if ( (unsigned int)v8 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      Context = (LPVOID)(-10000 * v8 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&Context, (unsigned int)v8 / 3, 0);
    }
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 200LL))(a1, a2, a3);
  v13 = v12;
  if ( v12 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetAllVolumes", 0xDABu, v12);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, &v25);
  return v13;
}
