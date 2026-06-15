/*
 * XREFs of AudioServerStopStream @ 0x180024130
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

__int64 __fastcall AudioServerStopStream(__int64 a1, __int64 a2, unsigned int a3)
{
  GUID v6; // xmm0
  _FILETIME v7; // rsi
  __int64 v8; // rdi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r9d
  unsigned int v15; // edi
  LPVOID Context; // [rsp+20h] [rbp-59h] BYREF
  WINBOOL fPending; // [rsp+28h] [rbp-51h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-49h] BYREF
  DWORD v20; // [rsp+40h] [rbp-39h]
  const wchar_t *v21; // [rsp+48h] [rbp-31h]
  _FILETIME v22; // [rsp+50h] [rbp-29h]
  char v23; // [rsp+58h] [rbp-21h]
  __int64 v24; // [rsp+5Ch] [rbp-1Dh]
  _OWORD v25[2]; // [rsp+68h] [rbp-11h] BYREF
  GUID v26; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  if ( a1 )
    v6 = *(GUID *)(a1 + 280);
  else
    v6 = GUID_00000000_0000_0000_0000_000000000000;
  v25[0] = v6;
  v25[1] = v6;
  v26 = v6;
  EtwEventActivityIdControl(4LL, &v26);
  v7 = g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    *(_QWORD *)&v25[0] = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    DWORD2(v25[0]) = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(v25);
  }
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v22 = v7;
  v20 = CurrentThreadId;
  v21 = L"AudioServerStopStream";
  v23 = 0;
  v24 = 0LL;
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
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, a2, a3);
  v15 = v11;
  if ( v11 < 0 )
  {
    if ( v11 != -2005139336 && v11 != -2004287484 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC5C,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v11,
        (int)Context);
  }
  else
  {
    *(_DWORD *)(a1 + 276) = 0;
    v15 = 0;
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v12, v13, v14);
  EtwEventActivityIdControl(4LL, &v26);
  return v15;
}
