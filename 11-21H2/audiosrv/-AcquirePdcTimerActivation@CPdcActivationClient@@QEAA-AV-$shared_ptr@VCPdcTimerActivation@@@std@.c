/*
 * XREFs of ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x180023580
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x1800222B0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVCVADServer@@@?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@QEAAPEAPEAVCVADServer@@QEAPEAV2@AEBQEAV2@@Z @ 0x18002537C (--$_Emplace_reallocate@AEBQEAVCVADServer@@@-$vector@PEAVCVADServer@@V-$allocator@PEAVCVADServer@.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x180102F20 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CPdcActivationClient::AcquirePdcTimerActivation(union _RTL_RUN_ONCE a1, _QWORD *a2, _QWORD *a3)
{
  union _RTL_RUN_ONCE *v3; // r12
  union _RTL_RUN_ONCE *v4; // r14
  _QWORD *v5; // r15
  struct _Mtx_internal_imp_t *v8; // rbx
  int v9; // eax
  _QWORD *v10; // rdx
  HANDLE ProcessHeap; // rax
  union _RTL_RUN_ONCE *v12; // rax
  __int64 v13; // rdi
  const wchar_t *v14; // rbx
  __int64 v15; // rcx
  const wchar_t *v16; // rax
  const wchar_t *v17; // rax
  wchar_t *v18; // rax
  __int64 v19; // rax
  int v20; // ebx
  int v21; // r9d
  __int64 v22; // r8
  std::_Ref_count_base *v23; // rcx
  union _RTL_RUN_ONCE v25; // rdx
  LPVOID Context; // [rsp+50h] [rbp-168h] BYREF
  int v27; // [rsp+58h] [rbp-160h]
  WINBOOL fPending; // [rsp+5Ch] [rbp-15Ch] BYREF
  int v29; // [rsp+60h] [rbp-158h] BYREF
  int v30; // [rsp+64h] [rbp-154h] BYREF
  int v31; // [rsp+68h] [rbp-150h] BYREF
  int v32; // [rsp+6Ch] [rbp-14Ch] BYREF
  union _RTL_RUN_ONCE *Ptr; // [rsp+70h] [rbp-148h] BYREF
  int v34; // [rsp+78h] [rbp-140h]
  _QWORD v35[2]; // [rsp+80h] [rbp-138h] BYREF
  _DWORD v36[2]; // [rsp+90h] [rbp-128h] BYREF
  __int64 v37; // [rsp+98h] [rbp-120h]
  const wchar_t *v38; // [rsp+A0h] [rbp-118h]
  _QWORD *v39; // [rsp+A8h] [rbp-110h]
  __int64 v40; // [rsp+B0h] [rbp-108h]
  _QWORD v41[3]; // [rsp+C0h] [rbp-F8h] BYREF
  char v42[152]; // [rsp+D8h] [rbp-E0h] BYREF

  v5 = a3;
  v35[1] = a2;
  Context = a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  v27 = 1;
  if ( !*(_QWORD *)a1.Ptr )
    return a2;
  v8 = (struct _Mtx_internal_imp_t *)((char *)a1.Ptr + 32);
  Ptr = (union _RTL_RUN_ONCE *)((char *)a1.Ptr + 32);
  v9 = _Mtx_lock((_Mtx_t)((char *)a1.Ptr + 32));
  if ( v9 )
  {
    std::_Throw_C_error(v9);
    goto LABEL_30;
  }
  v10 = (_QWORD *)*((_QWORD *)a1.Ptr + 2);
  if ( v10 == *((_QWORD **)a1.Ptr + 3) )
  {
    std::vector<CVADServer *>::_Emplace_reallocate<CVADServer * const &>((char *)a1.Ptr + 8, v10, &Context);
    v5 = Context;
  }
  else
  {
    *v10 = v5;
    *((_QWORD *)a1.Ptr + 2) += 8LL;
  }
  _Mtx_unlock(v8);
  ProcessHeap = GetProcessHeap();
  v12 = (union _RTL_RUN_ONCE *)HeapAlloc(ProcessHeap, 0, 0x28uLL);
  v4 = v12;
  Ptr = v12;
  if ( v12 )
  {
    *(_OWORD *)&v12->Ptr = 0LL;
    LODWORD(v12[1].Ptr) = 1;
    HIDWORD(v12[1].Ptr) = 1;
    v12->Ptr = &std::_Ref_count_obj2<CPdcTimerActivation>::`vftable';
    v3 = v12 + 2;
    v12[2].Ptr = 0LL;
    v12[3].Ptr = a1.Ptr;
    v12[4].Ptr = v5;
    v41[0] = 1LL;
    v41[1] = v5;
    v41[2] = 576LL;
    memset_0(v42, 0, 0x90uLL);
    v13 = v5[24];
    v14 = 0LL;
    v15 = *(_QWORD *)(v13 + 72);
    if ( !v15 )
      goto LABEL_13;
    v16 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 72LL))(v15);
    v14 = v16;
    if ( v16 )
    {
      if ( *v16 )
        goto LABEL_13;
    }
    v17 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 72) + 80LL))(*(_QWORD *)(v13 + 72));
    if ( !v17 || !*v17 )
      goto LABEL_13;
    v18 = wcsrchr(v17, 0x5Cu);
    if ( v18 )
    {
      v14 = v18 + 1;
      goto LABEL_13;
    }
LABEL_30:
    v14 = 0LL;
LABEL_13:
    v36[0] = 1;
    v36[1] = 300;
    v37 = 0LL;
    v38 = L"Unknown";
    v39 = v41;
    v40 = 0LL;
    if ( v14 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( v14[v19] );
      if ( v19 )
        v38 = v14;
    }
    v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD))Pdcv2ActivationClientActivate)(
            *(_QWORD *)v3[1].Ptr,
            v36,
            (union _RTL_RUN_ONCE)v3[2].Ptr,
            2LL,
            L"TimerForAudioPlayback",
            0,
            v3,
            &v29);
    if ( v20 >= 0 )
      Pdcv2ActivationClientSetBrokeredProcessId(v3->Ptr, *((unsigned int *)v5 + 16));
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Ptr = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
      Context = &qword_1801C2788;
      qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
      qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      v34 = 0;
      wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&Ptr);
    }
    v22 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v22 > 4u
      && (*(_BYTE *)(v22 + 16) & 0x40) != 0
      && (*(_QWORD *)(v22 + 24) & 0x40LL) == *(_QWORD *)(v22 + 24) )
    {
      v30 = v29;
      v31 = v20;
      v25.Ptr = v3[2].Ptr;
      v35[0] = *((_QWORD *)v25.Ptr + 70);
      v32 = *((_DWORD *)v25.Ptr + 16);
      Ptr = (union _RTL_RUN_ONCE *)v25.Ptr;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v22,
        (unsigned int)&unk_18018AE3A,
        v22,
        v21,
        (__int64)&Ptr,
        (__int64)&v32,
        (__int64)v35,
        (__int64)&v31,
        (__int64)&v30);
    }
    goto LABEL_25;
  }
  v4 = 0LL;
LABEL_25:
  *a2 = v4 + 2;
  v23 = (std::_Ref_count_base *)a2[1];
  a2[1] = v4;
  if ( v23 )
    std::_Ref_count_base::_Decref(v23);
  return a2;
}
