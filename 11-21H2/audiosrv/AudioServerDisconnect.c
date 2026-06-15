/*
 * XREFs of AudioServerDisconnect @ 0x180038EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerDisconnect(_QWORD *a1)
{
  GUID v2; // xmm0
  _FILETIME v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  LPCRITICAL_SECTION v7; // rbx
  struct CAudioThreadPool *v9; // rdi
  __int64 v10; // rax
  HANDLE OwningThread; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r9d
  WINBOOL fPending; // [rsp+40h] [rbp-39h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-31h] BYREF
  _QWORD pv[2]; // [rsp+50h] [rbp-29h] BYREF
  DWORD CurrentThreadId; // [rsp+60h] [rbp-19h]
  const wchar_t *v20; // [rsp+68h] [rbp-11h]
  _FILETIME v21; // [rsp+70h] [rbp-9h]
  char v22; // [rsp+78h] [rbp-1h]
  __int64 v23; // [rsp+7Ch] [rbp+3h]
  _OWORD v24[2]; // [rsp+88h] [rbp+Fh] BYREF
  GUID v25; // [rsp+A8h] [rbp+2Fh] BYREF

  if ( *a1 )
    v2 = *(GUID *)(*a1 + 280LL);
  else
    v2 = GUID_00000000_0000_0000_0000_000000000000;
  v24[0] = v2;
  v24[1] = v2;
  v25 = v2;
  EtwEventActivityIdControl(4LL, &v25);
  v3 = g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
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
  v5 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v5;
  CurrentThreadId = GetCurrentThreadId();
  v20 = L"AudioServerDisconnect";
  v21 = v3;
  v22 = 0;
  v23 = 0LL;
  if ( (unsigned int)v4 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      Context = (LPVOID)(-10000 * v4 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&Context, (unsigned int)v4 / 3, 0);
    }
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  *a1 = 0LL;
  v7 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  if ( LODWORD(v7[1].DebugInfo)-- == 1 )
  {
    v9 = ThreadPool;
    if ( !v7[3].OwningThread )
      v7[3].OwningThread = (HANDLE)(*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), LPCRITICAL_SECTION))(*(_QWORD *)ThreadPool + 8LL))(
                                     ThreadPool,
                                     CAudioDGProcess::OnADGInactivityTimerFiredHandler,
                                     v7);
    LODWORD(Context) = 4;
    if ( RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
           L"AudioDGInactiveTimeout",
           0x18u,
           0LL,
           &fPending,
           (LPDWORD)&Context) )
    {
      v10 = 300LL;
      fPending = 300;
    }
    else
    {
      v10 = (unsigned int)fPending;
    }
    OwningThread = v7[3].OwningThread;
    if ( OwningThread )
    {
      *(_QWORD *)&v24[0] = -10000000 * v10;
      (*(void (__fastcall **)(struct CAudioThreadPool *, HANDLE, _OWORD *, _QWORD, _DWORD))(*(_QWORD *)v9 + 24LL))(
        v9,
        OwningThread,
        v24,
        0LL,
        0);
    }
  }
  LeaveCriticalSection(v7);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v12, v13, v14);
  EtwEventActivityIdControl(4LL, &v25);
  return 0LL;
}
