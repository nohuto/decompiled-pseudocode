/*
 * XREFs of ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18007ACC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180072110 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180076664 (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?_ComputeDesiredApplicationRect@CFrameApplicationPresentation@@AEAAJPEAUtagRECT@@@Z @ 0x18007A8E4 (-_ComputeDesiredApplicationRect@CFrameApplicationPresentation@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18007A9B0 (-_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VI.c)
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18007AC50 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180126700 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18022A4D4 (-SetStopResult@-$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802DEE4C (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802DF564 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_1802DF564.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CFrameApplicationPresentation::ReconcileApplicationViewState(
        CFrameApplicationPresentation *this,
        struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  const WCHAR *v4; // rbx
  __int64 v5; // rdi
  const GUID *v6; // r9
  __int64 v7; // rcx
  int v8; // eax
  int v9; // edi
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  int v13; // r10d
  int v14; // r11d
  __int128 v15; // xmm3
  __int128 v16; // xmm2
  __int64 v17; // xmm1_8
  int v18; // eax
  __int64 v20; // rdx
  void (*v21)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v22; // rdx
  void (*v23)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v24; // eax
  __int64 v25; // rdx
  void *v26; // rbx
  void *v27; // rbx
  HANDLE ProcessHeap; // rax
  void *v29; // rbx
  HANDLE v30; // rax
  __int64 v31; // rdx
  void (*v32)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPVOID v33; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v35; // [rsp+3Ch] [rbp-C4h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+44h] [rbp-BCh] BYREF
  WINBOOL v38; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v40; // [rsp+58h] [rbp-A8h] BYREF
  RTL_SRWLOCK *v41; // [rsp+60h] [rbp-A0h] BYREF
  LPINIT_ONCE v42; // [rsp+68h] [rbp-98h] BYREF
  int v43; // [rsp+70h] [rbp-90h]
  unsigned int v44; // [rsp+78h] [rbp-88h]
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  LPINIT_ONCE v47; // [rsp+98h] [rbp-68h] BYREF
  int v48; // [rsp+A0h] [rbp-60h]
  __int128 v49; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v50; // [rsp+B8h] [rbp-48h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  int v52; // [rsp+D0h] [rbp-30h]
  struct tagRECT rc; // [rsp+D8h] [rbp-28h] BYREF
  void **v54; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v55[3]; // [rsp+F8h] [rbp-8h] BYREF
  int v56; // [rsp+110h] [rbp+10h]
  int *v57; // [rsp+118h] [rbp+18h]
  int *v58; // [rsp+120h] [rbp+20h]
  int v59; // [rsp+128h] [rbp+28h] BYREF
  char v60; // [rsp+12Ch] [rbp+2Ch]
  GUID v61[2]; // [rsp+130h] [rbp+30h] BYREF
  int v62; // [rsp+150h] [rbp+50h] BYREF
  const char *v63; // [rsp+158h] [rbp+58h]
  LPVOID v64; // [rsp+160h] [rbp+60h]
  char v65; // [rsp+168h] [rbp+68h]
  __int64 v66; // [rsp+170h] [rbp+70h]
  __int128 v67; // [rsp+178h] [rbp+78h]
  __int128 v68; // [rsp+188h] [rbp+88h]
  __int128 v69; // [rsp+198h] [rbp+98h]
  __int128 v70; // [rsp+1A8h] [rbp+A8h]
  __int128 v71; // [rsp+1B8h] [rbp+B8h]
  __int128 v72; // [rsp+1C8h] [rbp+C8h]
  __int128 v73; // [rsp+1D8h] [rbp+D8h]
  __int128 v74; // [rsp+1E8h] [rbp+E8h]
  __int128 v75; // [rsp+1F8h] [rbp+F8h]
  __int64 v76; // [rsp+208h] [rbp+108h]
  _BYTE lpMem[24]; // [rsp+210h] [rbp+110h] BYREF
  void *v78; // [rsp+228h] [rbp+128h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+230h] [rbp+130h] BYREF
  void *v80; // [rsp+240h] [rbp+140h]
  int v81; // [rsp+248h] [rbp+148h]
  int v82; // [rsp+24Ch] [rbp+14Ch]
  __int64 *v83; // [rsp+250h] [rbp+150h]
  __int64 v84; // [rsp+258h] [rbp+158h]
  DWORD *p_CurrentThreadId; // [rsp+260h] [rbp+160h]
  __int64 v86; // [rsp+268h] [rbp+168h]
  const WCHAR *v87; // [rsp+270h] [rbp+170h]
  int v88; // [rsp+278h] [rbp+178h]
  int v89; // [rsp+27Ch] [rbp+17Ch]

  *(_OWORD *)a2 = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_OWORD *)a2 + 2) = 0LL;
  v55[0] = 0LL;
  v55[1] = &v54;
  v55[2] = 0LL;
  v56 = 0;
  v57 = &v62;
  v58 = &v59;
  v59 = 0;
  v60 = 0;
  v65 = 0;
  v62 = 0;
  v63 = "ReconcileApplicationViewState";
  v64 = 0LL;
  v66 = 1LL;
  memset(lpMem, 0, sizeof(lpMem));
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v78 = 0LL;
  v54 = &CFramePresentationTelemetry::ReconcileApplicationViewState::`vftable';
  v4 = (const WCHAR *)*((_QWORD *)this + 76);
  v33 = 0LL;
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v47 = &`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B3D58;
    qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v48 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v47, v20, v21);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    v61[0] = 0LL;
  else
    EventActivityIdControl(3u, v61);
  v59 = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v33);
  v40 = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v35, &v40) && v35 )
  {
    v42 = &`CAppManagerLogging::Instance'::`2'::wrapper;
    v40 = &qword_1807B3D58;
    qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v43 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v42, v22, v23);
  }
  v5 = *((_QWORD *)v40 + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v45 = 0LL;
    v6 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v54);
    if ( v4 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v4[v7] );
      v8 = 2 * v7 + 2;
    }
    else
    {
      v4 = &LocaleName;
      v8 = 2;
    }
    v87 = v4;
    v88 = v8;
    v89 = 0;
    p_CurrentThreadId = &CurrentThreadId;
    v86 = 4LL;
    v83 = &v45;
    v84 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v5 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v80 = &unk_1806A07D6;
    v81 = 80;
    v82 = 1;
    v44 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, (LPCGUID)(v58 + 2), v6, 5u, &UserData);
  }
  if ( !v56 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v55);
  v9 = CFrameApplicationPresentation::_ComputeDesiredApplicationRect((HWND *)this, &rc);
  if ( v9 >= 0 )
  {
    v9 = CFrameApplicationPresentation::_ComputeApplicationViewData(
           (HWND *)this,
           &rc,
           (struct APPLICATION_VIEW_DATA *)&v49);
    if ( v9 >= 0 )
    {
      if ( !ImmersiveApplicationLayout::AreAppViewDataEqual(
              (CFrameApplicationPresentation *)((char *)this + 168),
              (const struct APPLICATION_VIEW_DATA *)&v49,
              (const struct APPLICATION_VIEW_DATA *)(unsigned int)(*((_DWORD *)this + 36) - *((_DWORD *)this + 34)))
        && v12 == v11
        && v14 == v13 )
      {
        *((_DWORD *)a2 + 11) |= 1u;
      }
      v15 = v49;
      *(_OWORD *)v10 = v49;
      v16 = v50;
      *(_OWORD *)(v10 + 16) = v50;
      v17 = v51;
      *(_QWORD *)(v10 + 32) = v51;
      v18 = v52;
      *(_DWORD *)(v10 + 40) = v52;
      *(struct tagRECT *)((char *)this + 136) = rc;
      *(_OWORD *)a2 = v15;
      *((_OWORD *)a2 + 1) = v16;
      *((_QWORD *)a2 + 4) = v17;
      *((_DWORD *)a2 + 10) = v18;
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v54, (unsigned int)v9);
  v54 = &CFramePresentationTelemetry::ReconcileApplicationViewState::`vftable';
  if ( v78 )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)&v54,
      &v41);
    if ( !v78 || *(_DWORD *)v78 != 1 )
    {
      wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)&v78);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v41);
      goto LABEL_23;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v41);
  }
  if ( *v58 == 1 )
  {
    v24 = v58[22];
    v37 = v24;
    v25 = 2147942974LL;
    if ( v24 < 0 )
      v25 = (unsigned int)v24;
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
      v58,
      v25,
      &v37);
    ((void (__fastcall *)(void ***))v54[1])(&v54);
  }
LABEL_23:
  if ( v78 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v78, 0xFFFFFFFF) == 1 )
    {
      v26 = v78;
      if ( v78 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v78 + 8);
        operator delete(v26, 0x108uLL);
      }
    }
    v78 = 0LL;
  }
  if ( *(_QWORD *)lpMem )
  {
    if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)lpMem, 0xFFFFFFFF) == 1 )
    {
      v27 = *(void **)lpMem;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v27);
    }
    *(_OWORD *)lpMem = 0LL;
  }
  if ( v65 )
  {
    v29 = v64;
    v30 = GetProcessHeap();
    HeapFree(v30, 0, v29);
    v65 = 0;
  }
  v64 = 0LL;
  if ( v59 == 1 )
  {
    v59 = 2;
    v33 = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v38, &v33) && v38 )
    {
      v42 = &`CAppManagerLogging::Instance'::`2'::wrapper;
      v33 = &qword_1807B3D58;
      qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v43 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v42, v31, v32);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)v33 + 1), v61);
  }
  v59 = 3;
  if ( v56 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v55);
  return (unsigned int)v9;
}
