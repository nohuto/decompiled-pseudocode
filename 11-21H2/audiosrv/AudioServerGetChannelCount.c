/*
 * XREFs of AudioServerGetChannelCount @ 0x18000CED0
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

__int64 __fastcall AudioServerGetChannelCount(__int64 a1, __int64 a2)
{
  GUID v4; // xmm0
  _FILETIME v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v10; // eax
  unsigned int v11; // ebx
  LPVOID Context; // [rsp+20h] [rbp-49h] BYREF
  WINBOOL fPending; // [rsp+28h] [rbp-41h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-39h] BYREF
  DWORD v16; // [rsp+40h] [rbp-29h]
  const wchar_t *v17; // [rsp+48h] [rbp-21h]
  _FILETIME v18; // [rsp+50h] [rbp-19h]
  char v19; // [rsp+58h] [rbp-11h]
  int v20; // [rsp+5Ch] [rbp-Dh]
  int v21; // [rsp+60h] [rbp-9h]
  _OWORD v22[2]; // [rsp+68h] [rbp-1h] BYREF
  GUID v23; // [rsp+88h] [rbp+1Fh] BYREF

  if ( a1 )
    v4 = *(GUID *)(a1 + 280);
  else
    v4 = GUID_00000000_0000_0000_0000_000000000000;
  v22[0] = v4;
  v22[1] = v4;
  v23 = v4;
  EtwEventActivityIdControl(4LL, &v23);
  v5 = g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    *(_QWORD *)&v22[0] = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    DWORD2(v22[0]) = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(v22);
  }
  v7 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v7;
  CurrentThreadId = GetCurrentThreadId();
  v20 = 0;
  v21 = 0;
  v16 = CurrentThreadId;
  v17 = L"AudioServerGetChannelCount";
  v18 = v5;
  v19 = 0;
  if ( (unsigned int)v6 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      Context = (LPVOID)(-10000 * v6 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&Context, (unsigned int)v6 / 3, 0);
    }
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, a2);
  v11 = v10;
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetChannelCount", 0xCD0u, v10);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, &v23);
  return v11;
}
