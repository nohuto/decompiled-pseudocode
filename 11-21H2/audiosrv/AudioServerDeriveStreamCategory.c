/*
 * XREFs of AudioServerDeriveStreamCategory @ 0x180021190
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AudioServerDeriveStreamCategory(__int64 a1, int a2, unsigned int a3, unsigned int *a4)
{
  _FILETIME v4; // r14
  __int64 v5; // rbp
  __int64 v8; // rsi
  unsigned int v9; // ebx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-78h] BYREF
  union _RTL_RUN_ONCE *v14; // [rsp+28h] [rbp-70h] BYREF
  int v15; // [rsp+30h] [rbp-68h]
  _QWORD pv[2]; // [rsp+38h] [rbp-60h] BYREF
  DWORD v17; // [rsp+48h] [rbp-50h]
  const wchar_t *v18; // [rsp+50h] [rbp-48h]
  _FILETIME v19; // [rsp+58h] [rbp-40h]
  char v20; // [rsp+60h] [rbp-38h]
  __int64 v21; // [rsp+64h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  WINBOOL v23; // [rsp+A8h] [rbp+10h] BYREF

  v4 = g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v8 = a2;
  v9 = 0;
  pftDueTime = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v23, (LPVOID *)&pftDueTime)
    && v23 )
  {
    v14 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    pftDueTime = (struct _FILETIME)&qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v15 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v14);
  }
  pv[1] = *(_QWORD *)(*(_QWORD *)&pftDueTime + 8LL);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v19 = v4;
  v17 = CurrentThreadId;
  v18 = L"AudioServerDeriveStreamCategory";
  v20 = 0;
  v21 = 0LL;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v5 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v5 / 3, 0);
    }
  }
  if ( (unsigned int)v8 > 0xE || a3 > 0x17 )
    goto LABEL_14;
  if ( (_DWORD)v8 )
  {
    if ( !a3 )
    {
      a3 = dword_180181790[v8];
      goto LABEL_10;
    }
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      pftDueTime.dwLowDateTime);
    v9 = -2147024809;
    goto LABEL_11;
  }
LABEL_10:
  *a4 = a3;
LABEL_11:
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v9;
}
