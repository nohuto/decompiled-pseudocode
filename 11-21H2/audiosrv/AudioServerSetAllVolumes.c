/*
 * XREFs of AudioServerSetAllVolumes @ 0x18000D9A0
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

__int64 __fastcall AudioServerSetAllVolumes(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  GUID v8; // xmm0
  _FILETIME v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v14; // eax
  unsigned int v15; // ebx
  int v17; // [rsp+20h] [rbp-69h]
  LPVOID Context; // [rsp+30h] [rbp-59h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-51h] BYREF
  _QWORD pv[2]; // [rsp+40h] [rbp-49h] BYREF
  DWORD v21; // [rsp+50h] [rbp-39h]
  const wchar_t *v22; // [rsp+58h] [rbp-31h]
  _FILETIME v23; // [rsp+60h] [rbp-29h]
  char v24; // [rsp+68h] [rbp-21h]
  int v25; // [rsp+6Ch] [rbp-1Dh]
  int v26; // [rsp+70h] [rbp-19h]
  _OWORD v27[2]; // [rsp+78h] [rbp-11h] BYREF
  GUID v28; // [rsp+98h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  if ( a1 )
    v8 = *(GUID *)(a1 + 280);
  else
    v8 = GUID_00000000_0000_0000_0000_000000000000;
  v27[0] = v8;
  v27[1] = v8;
  v28 = v8;
  EtwEventActivityIdControl(4LL, &v28);
  v9 = g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    *(_QWORD *)&v27[0] = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    DWORD2(v27[0]) = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(v27);
  }
  v11 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v11;
  CurrentThreadId = GetCurrentThreadId();
  v25 = 0;
  v26 = 0;
  v21 = CurrentThreadId;
  v22 = L"AudioServerSetAllVolumes";
  v23 = v9;
  v24 = 0;
  if ( (unsigned int)v10 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      Context = (LPVOID)(-10000 * v10 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&Context, (unsigned int)v10 / 3, 0);
    }
  }
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 192LL))(a1, a2, a3, a4);
  v15 = v14;
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD52,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v14,
      v17);
  else
    v15 = 0;
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, &v28);
  return v15;
}
