/*
 * XREFs of AudioVolumeConnect @ 0x18000D640
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800C6664 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioVolumeConnect(__int64 a1, union _RTL_RUN_ONCE *a2, _QWORD *a3)
{
  _FILETIME v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rax
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rcx
  unsigned int v16; // ebx
  int v18; // [rsp+20h] [rbp-49h]
  LPVOID Context; // [rsp+30h] [rbp-39h] BYREF
  __int64 v20; // [rsp+38h] [rbp-31h] BYREF
  LPVOID v21; // [rsp+40h] [rbp-29h] BYREF
  union _RTL_RUN_ONCE *v22; // [rsp+48h] [rbp-21h] BYREF
  int v23; // [rsp+50h] [rbp-19h]
  _QWORD pv[2]; // [rsp+58h] [rbp-11h] BYREF
  DWORD CurrentThreadId; // [rsp+68h] [rbp-1h]
  const wchar_t *v26; // [rsp+70h] [rbp+7h]
  _FILETIME v27; // [rsp+78h] [rbp+Fh]
  char v28; // [rsp+80h] [rbp+17h]
  __int64 v29; // [rsp+84h] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned int Pid; // [rsp+E0h] [rbp+77h] BYREF
  __int64 fPending; // [rsp+E8h] [rbp+7Fh] BYREF

  v5 = g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v22 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v23 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v22);
  }
  v7 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v7;
  CurrentThreadId = GetCurrentThreadId();
  v26 = L"AudioVolumeConnect";
  v27 = v5;
  v28 = 0;
  v29 = 0LL;
  if ( (unsigned int)v6 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      fPending = -10000 * v6 / 3;
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&fPending, (unsigned int)v6 / 3, 0);
    }
  }
  *a3 = 0LL;
  v9 = *(_QWORD *)g_pVolumeProvider;
  v20 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IVolumeProvider *, union _RTL_RUN_ONCE *, __int64 *))(v9 + 40))(
          g_pVolumeProvider,
          a2,
          &v20);
  v11 = v10;
  if ( v10 < 0 )
  {
    v16 = -2004287484;
    if ( v10 != -2004287484 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
        (const char *)(unsigned int)v10,
        v18);
      v16 = v11;
    }
  }
  else
  {
    v12 = v20;
    v20 = 0LL;
    *a3 = v12;
    Pid = 0;
    I_RpcBindingInqLocalClientPID(0LL, &Pid);
    v21 = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &v21)
      && (_DWORD)fPending )
    {
      v22 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
      v21 = &qword_1801C2788;
      qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
      qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      v23 = 0;
      wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v22);
    }
    v15 = *((_QWORD *)v21 + 1);
    if ( *(_DWORD *)v15 > 4u
      && (*(_BYTE *)(v15 + 16) & 2) != 0
      && (*(_QWORD *)(v15 + 24) & 2LL) == *(_QWORD *)(v15 + 24) )
    {
      LODWORD(Context) = Pid;
      v22 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v15,
        (unsigned int)&unk_1801886DC,
        v13,
        v14,
        (__int64)&v22,
        (__int64)&Context);
    }
    v16 = 0;
  }
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v16;
}
