/*
 * XREFs of s_tsSessionGetAudioProtocol @ 0x180021310
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 */

__int64 __fastcall s_tsSessionGetAudioProtocol(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  _FILETIME v9; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int AudioProtocol; // ebx
  WINBOOL fPending; // [rsp+20h] [rbp-88h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-80h] BYREF
  union _RTL_RUN_ONCE *v15; // [rsp+30h] [rbp-78h] BYREF
  int v16; // [rsp+38h] [rbp-70h]
  _QWORD pv[2]; // [rsp+40h] [rbp-68h] BYREF
  DWORD CurrentThreadId; // [rsp+50h] [rbp-58h]
  const wchar_t *v19; // [rsp+58h] [rbp-50h]
  _FILETIME v20; // [rsp+60h] [rbp-48h]
  char v21; // [rsp+68h] [rbp-40h]
  __int64 v22; // [rsp+6Ch] [rbp-3Ch]

  if ( !(unsigned int)IsTSSessionGetAudioProtocolSupported() )
    return 2147500033LL;
  v8 = g_AudioSrvWatchDogTimerInMs;
  v9 = g_AudioHealthMonitor;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v15 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v16 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v15);
  }
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v20 = v9;
  v21 = 0;
  v22 = 0LL;
  v19 = L"s_tsSessionGetAudioProtocol";
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
  AudioProtocol = TS_SessionGetAudioProtocol(a1, a2, a3, a4);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return AudioProtocol;
}
