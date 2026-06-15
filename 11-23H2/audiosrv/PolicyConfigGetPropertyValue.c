/*
 * XREFs of PolicyConfigGetPropertyValue @ 0x180052AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180065B08 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180067018 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigGetPropertyValue(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  struct _FILETIME v5; // rdi
  __int64 v6; // rbx
  __int64 v10; // rcx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v13; // ebx
  WINBOOL fPending; // [rsp+38h] [rbp-21h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-19h] BYREF
  union _RTL_RUN_ONCE *v17; // [rsp+48h] [rbp-11h] BYREF
  int v18; // [rsp+50h] [rbp-9h]
  _QWORD pv[2]; // [rsp+58h] [rbp-1h] BYREF
  DWORD v20; // [rsp+68h] [rbp+Fh]
  const wchar_t *v21; // [rsp+70h] [rbp+17h]
  struct _FILETIME v22; // [rsp+78h] [rbp+1Fh]
  char v23; // [rsp+80h] [rbp+27h]
  int v24; // [rsp+84h] [rbp+2Bh]
  int v25; // [rsp+88h] [rbp+2Fh]

  v5 = g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v17 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801CFD38;
    qword_1801CFD38 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801CFD50 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v18 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v17);
  }
  v10 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v10;
  CurrentThreadId = GetCurrentThreadId();
  v24 = 0;
  v25 = 0;
  v20 = CurrentThreadId;
  v21 = L"PolicyConfigGetPropertyValue";
  v22 = v5;
  v23 = 0;
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
  v13 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, __int64, __int64))(*(_QWORD *)g_PolicyConfig + 88LL))(
          g_PolicyConfig,
          a2,
          a3,
          a4,
          a5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v13;
}
