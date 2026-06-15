/*
 * XREFs of GetAudioSessionManager @ 0x18000C780
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAudioSessionManager(
        __int64 a1,
        const unsigned __int16 *a2,
        struct CEndpointStore ***a3,
        _DWORD *a4)
{
  _FILETIME v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  CEndpointStoreCache *v11; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  int EndpointStore; // eax
  unsigned int v14; // edi
  __int64 v15; // rax
  int v16; // eax
  struct CEndpointStore **v17; // rax
  struct CEndpointStore **v18; // rdi
  struct CEndpointStore *v19; // rdx
  struct CEndpointStore *v20; // rbx
  signed __int32 v21; // eax
  __int64 v23; // r9
  __int64 v24; // rdx
  struct CEndpointStore *v25; // [rsp+28h] [rbp-29h] BYREF
  struct CEndpointStore *v26; // [rsp+30h] [rbp-21h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-19h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-11h] BYREF
  struct _FILETIME pftDueTime; // [rsp+48h] [rbp-9h] BYREF
  _QWORD pv[2]; // [rsp+50h] [rbp-1h] BYREF
  DWORD CurrentThreadId; // [rsp+60h] [rbp+Fh]
  const wchar_t *v32; // [rsp+68h] [rbp+17h]
  _FILETIME v33; // [rsp+70h] [rbp+1Fh]
  char v34; // [rsp+78h] [rbp+27h]
  int v35; // [rsp+7Ch] [rbp+2Bh]
  int v36; // [rsp+80h] [rbp+2Fh]
  union _RTL_RUN_ONCE *v37; // [rsp+88h] [rbp+37h] BYREF
  int v38; // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v8 = g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v37 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v38 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v37);
  }
  v10 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v10;
  CurrentThreadId = GetCurrentThreadId();
  v32 = L"GetAudioSessionManager";
  v33 = v8;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  if ( (unsigned int)v9 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v9 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v9 / 3, 0);
    }
  }
  v25 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v11, a2, &v25);
  v14 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)EndpointStore,
      (int)v25);
    v20 = v25;
    goto LABEL_19;
  }
  v15 = *(_QWORD *)g_PolicyManager;
  v26 = 0LL;
  v16 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, struct CEndpointStore **))(v15 + 32))(
          g_PolicyManager,
          a1,
          &v26);
  v14 = v16;
  if ( v16 < 0 )
  {
    v23 = (unsigned int)v16;
    v24 = 1394LL;
  }
  else
  {
    v17 = (struct CEndpointStore **)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    v18 = v17;
    if ( v17 )
    {
      v19 = v26;
      v20 = v25;
      *v17 = v25;
      if ( v20 )
      {
        do
          v21 = *((_DWORD *)v20 + 3);
        while ( v21 != 0x7FFFFFFF
             && v21 != _InterlockedCompareExchange((volatile signed __int32 *)v20 + 3, v21 + 1, v21) );
        v20 = v25;
      }
      v18[1] = v19;
      if ( v19 )
        (*(void (__fastcall **)(struct CEndpointStore *))(*(_QWORD *)v19 + 8LL))(v19);
      *a3 = v18;
      *a4 = (*(__int64 (__fastcall **)(struct CEndpointStore *))(*(_QWORD *)v26 + 112LL))(v26) == 0;
      v14 = 0;
      goto LABEL_17;
    }
    v14 = -2147024882;
    v23 = 2147942414LL;
    v24 = 1397LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)v23,
    (int)v25);
  v20 = v25;
LABEL_17:
  if ( v26 )
    (*(void (__fastcall **)(struct CEndpointStore *))(*(_QWORD *)v26 + 16LL))(v26);
LABEL_19:
  if ( v20 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v20);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v14;
}
