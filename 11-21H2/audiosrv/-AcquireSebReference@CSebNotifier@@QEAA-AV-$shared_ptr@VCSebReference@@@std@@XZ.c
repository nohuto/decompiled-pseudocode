/*
 * XREFs of ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x180023330
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x1800222B0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18005DFD0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     _alloca_probe @ 0x18006A600 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
volatile signed __int32 **__fastcall CSebNotifier::AcquireSebReference(__int64 a1, volatile signed __int32 **a2)
{
  union _RTL_RUN_ONCE *v2; // r13
  int v5; // r12d
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // rdi
  volatile signed __int32 *v9; // r15
  int v10; // eax
  int v11; // r13d
  struct _TP_TIMER *v12; // rcx
  std::_Ref_count_base *v13; // rcx
  __int64 v15; // r10
  char v16; // [rsp+30h] [rbp-10B8h] BYREF
  int v17; // [rsp+34h] [rbp-10B4h]
  WINBOOL fPending; // [rsp+38h] [rbp-10B0h] BYREF
  int v19; // [rsp+3Ch] [rbp-10ACh] BYREF
  LPVOID Context[2]; // [rsp+40h] [rbp-10A8h] BYREF
  union _RTL_RUN_ONCE *v21; // [rsp+50h] [rbp-1098h] BYREF
  int v22; // [rsp+58h] [rbp-1090h]
  volatile signed __int32 *v23; // [rsp+60h] [rbp-1088h]
  volatile signed __int32 *v24; // [rsp+68h] [rbp-1080h]
  char v25[32]; // [rsp+70h] [rbp-1078h] BYREF
  char *v26; // [rsp+90h] [rbp-1058h]
  __int64 v27; // [rsp+98h] [rbp-1050h]
  int *v28; // [rsp+A0h] [rbp-1048h]
  __int64 v29; // [rsp+A8h] [rbp-1040h]
  _DWORD v30[1024]; // [rsp+B0h] [rbp-1038h] BYREF

  Context[1] = a2;
  v5 = 0;
  *a2 = 0LL;
  a2[1] = 0LL;
  v17 = 1;
  ProcessHeap = GetProcessHeap();
  v7 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v8 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 1;
    *((_DWORD *)v7 + 3) = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj2<CSebReference>::`vftable';
    *((_QWORD *)v7 + 2) = a1;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = v8 + 4;
  v23 = v8 + 4;
  v24 = v8;
  v10 = _Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v10 )
  {
    std::_Throw_C_error(v10);
LABEL_26:
    v21 = v2;
    Context[0] = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v22 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v21);
    goto LABEL_21;
  }
  v11 = (*(_DWORD *)a1)++;
  if ( v11 || *(_BYTE *)(a1 + 88) == 1 )
  {
    _Mtx_unlock((_Mtx_t)(a1 + 8));
    if ( v11 )
      goto LABEL_9;
    goto LABEL_7;
  }
  v30[1] = -1;
  v30[0] = 3;
  v5 = RtlPublishWnfStateData(WNF_SEB_AUDIO_ACTIVITY, 0LL, v30, 8LL, 0LL);
  if ( v5 >= 0 )
    *(_BYTE *)(a1 + 88) = 1;
  Context[0] = 0LL;
  v2 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
    goto LABEL_26;
LABEL_21:
  v15 = *((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v15 > 4u
    && (*(_BYTE *)(v15 + 16) & 0x40) != 0
    && (*(_QWORD *)(v15 + 24) & 0x40LL) == *(_QWORD *)(v15 + 24) )
  {
    v19 = v5;
    v16 = 1;
    v28 = &v19;
    v29 = 4LL;
    v26 = &v16;
    v27 = 1LL;
    tlgWriteTransfer_EtwEventWriteTransfer(v15, (unsigned int)&unk_18018AF4B, 0, 0, 4, (__int64)v25);
  }
  _Mtx_unlock((_Mtx_t)(a1 + 8));
LABEL_7:
  v12 = *(struct _TP_TIMER **)(a1 + 96);
  if ( v12 )
  {
    SetThreadpoolTimer(v12, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)(a1 + 96), 1);
  }
LABEL_9:
  if ( v8 )
  {
    _InterlockedIncrement(v8 + 2);
    v9 = v23;
  }
  *a2 = v9;
  v13 = (std::_Ref_count_base *)a2[1];
  a2[1] = v8;
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  if ( v8 && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v8);
  }
  return a2;
}
