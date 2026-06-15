/*
 * XREFs of AudioServerStartStream @ 0x1800220D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AudioServerStartStream(__int64 a1, __int64 a2, unsigned int a3)
{
  GUID v6; // xmm0
  _FILETIME v7; // r14
  __int64 v8; // rsi
  unsigned int v9; // ebx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r9d
  unsigned int v16; // edi
  LPVOID Context; // [rsp+20h] [rbp-59h] BYREF
  WINBOOL fPending; // [rsp+28h] [rbp-51h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-49h] BYREF
  DWORD v21; // [rsp+40h] [rbp-39h]
  const wchar_t *v22; // [rsp+48h] [rbp-31h]
  _FILETIME v23; // [rsp+50h] [rbp-29h]
  char v24; // [rsp+58h] [rbp-21h]
  __int64 v25; // [rsp+5Ch] [rbp-1Dh]
  _OWORD v26[2]; // [rsp+68h] [rbp-11h] BYREF
  GUID v27; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  if ( a1 )
    v6 = *(GUID *)(a1 + 280);
  else
    v6 = GUID_00000000_0000_0000_0000_000000000000;
  v26[0] = v6;
  v26[1] = v6;
  v27 = v6;
  EtwEventActivityIdControl(4LL, &v27);
  v7 = g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  v9 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    *(_QWORD *)&v26[0] = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    DWORD2(v26[0]) = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(v26);
  }
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v23 = v7;
  v21 = CurrentThreadId;
  v22 = L"AudioServerStartStream";
  v24 = 0;
  v25 = 0LL;
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
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, a2, a3);
  v16 = v12;
  if ( v12 < 0 )
  {
    v9 = -2005139336;
    if ( v12 != -2005139336 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC3C,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v12,
        (int)Context);
      v9 = v16;
    }
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v13, v14, v15);
  EtwEventActivityIdControl(4LL, &v27);
  return v9;
}
