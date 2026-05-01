/*
 * XREFs of ?StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007C190
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007B5B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1802D9BA8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD **),
        int a3,
        __int64 a4)
{
  __int64 v7; // rax
  RTL_SRWLOCK *v8; // rdi
  RTL_SRWLOCK *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r14
  const WCHAR *v12; // rdi
  const GUID *v13; // r9
  const GUID *v14; // r8
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rdi
  __int64 v18; // r14
  unsigned __int64 v19; // rsi
  __int64 *v20; // r14
  __int64 v21; // rcx
  HANDLE ProcessHeap; // rax
  _QWORD *v23; // r15
  void (__fastcall *v24)(HANDLE, _QWORD *); // r12
  HANDLE v25; // rax
  _QWORD *v26; // rcx
  signed __int64 v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  void (*v30)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v31; // rdx
  void (*v32)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPVOID pv; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v34; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v36; // [rsp+44h] [rbp-BCh] BYREF
  BOOL v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+4Ch] [rbp-B4h] BYREF
  DWORD CurrentThreadId; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID v41; // [rsp+60h] [rbp-A0h] BYREF
  RTL_SRWLOCK *v42; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v43; // [rsp+70h] [rbp-90h]
  __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-80h] BYREF
  LPINIT_ONCE v46; // [rsp+90h] [rbp-70h] BYREF
  int v47; // [rsp+98h] [rbp-68h]
  LPINIT_ONCE v48; // [rsp+A0h] [rbp-60h] BYREF
  int v49; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+50h] BYREF
  void *v51; // [rsp+160h] [rbp+60h]
  int v52; // [rsp+168h] [rbp+68h]
  int v53; // [rsp+16Ch] [rbp+6Ch]
  __int64 *v54; // [rsp+170h] [rbp+70h]
  __int64 v55; // [rsp+178h] [rbp+78h]
  DWORD *p_CurrentThreadId; // [rsp+180h] [rbp+80h]
  __int64 v57; // [rsp+188h] [rbp+88h]
  const WCHAR *v58; // [rsp+190h] [rbp+90h]
  int v59; // [rsp+198h] [rbp+98h]
  int v60; // [rsp+19Ch] [rbp+9Ch]
  int *v61; // [rsp+1A0h] [rbp+A0h]
  __int64 v62; // [rsp+1A8h] [rbp+A8h]
  BOOL *v63; // [rsp+1B0h] [rbp+B0h]
  __int64 v64; // [rsp+1B8h] [rbp+B8h]

  v34 = 0LL;
  (**a2)(a2, &GUID_979cde28_2164_437c_b963_55e5d4ac1d02, &v34);
  pv = 0LL;
  v7 = *v34;
  pv = 0LL;
  (*(void (__fastcall **)(_QWORD *, LPVOID *))(v7 + 32))(v34, &pv);
  v8 = *(RTL_SRWLOCK **)(a1 + 312);
  if ( v8 )
  {
    v9 = v8 + 32;
    AcquireSRWLockExclusive(v9);
    v42 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v42);
  }
  else
  {
    v42 = 0LL;
    v9 = 0LL;
  }
  v10 = *(_QWORD *)(a1 + 48);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(
         &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    v46 = &`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B3DE0;
    qword_1807B3DE0 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3DF8 = (__int64)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    v47 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v46, v29, v30);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *(_OWORD *)(v10 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v10 + 8));
  *(_DWORD *)v10 = 1;
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  v41 = 0LL;
  if ( __std_init_once_begin_initialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &v36, &v41)
    && v36 )
  {
    v48 = &`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
    v41 = &qword_1807B3DE0;
    qword_1807B3DE0 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3DF8 = (__int64)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    v49 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v48, v31, v32);
  }
  v11 = *((_QWORD *)v41 + 1);
  if ( *(_DWORD *)v11 > 5u )
  {
    v37 = a4 != 0;
    v38 = a3;
    v12 = (const WCHAR *)pv;
    CurrentThreadId = GetCurrentThreadId();
    v44 = 0LL;
    v13 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    v14 = (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL);
    v63 = &v37;
    v64 = 4LL;
    v61 = &v38;
    v62 = 4LL;
    if ( v12 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v12[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v12 = &LocaleName;
      v16 = 2;
    }
    v58 = v12;
    v59 = v16;
    v60 = 0;
    p_CurrentThreadId = &CurrentThreadId;
    v57 = 4LL;
    v54 = &v44;
    v55 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v11 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v51 = &unk_1806A1439;
    v52 = 108;
    v53 = 1;
    v43 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v11 + 32), &EventDescriptor, v14, v13, 7u, &UserData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v17 = a1 + 8;
    v18 = wil::details::g_pThreadFailureCallbacks;
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      v19 = GetCurrentThreadId();
      v20 = (__int64 *)(v18 + 8 * (v19 % 0xA));
      v21 = *v20;
      if ( *v20 )
      {
        while ( *(_DWORD *)v21 != (_DWORD)v19 )
        {
          v21 = *(_QWORD *)(v21 + 8);
          if ( !v21 )
            goto LABEL_24;
        }
        v26 = (_QWORD *)(v21 + 16);
      }
      else
      {
LABEL_24:
        ProcessHeap = GetProcessHeap();
        v23 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
        v24 = (void (__fastcall *)(HANDLE, _QWORD *))wil::details::g_pfnRtlDisownModuleHeapAllocation;
        if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
        {
          v25 = GetProcessHeap();
          v24(v25, v23);
        }
        if ( v23 )
        {
          *(_DWORD *)v23 = v19;
          v23[1] = 0LL;
          v26 = v23 + 2;
          v23[2] = 0LL;
          _m_prefetchw(v20);
          do
          {
            v27 = *v20;
            v23[1] = *v20;
          }
          while ( v27 != _InterlockedCompareExchange64(v20, (signed __int64)v23, v27) );
        }
        else
        {
          v26 = 0LL;
        }
      }
      *(_QWORD *)v17 = v26;
      if ( v26 )
      {
        *(_QWORD *)(v17 + 16) = *v26;
        *v26 = v17;
        *(_DWORD *)(v17 + 24) = GetCurrentThreadId();
      }
    }
    else
    {
      *(_QWORD *)v17 = 0LL;
    }
  }
  if ( pv )
    CoTaskMemFree(pv);
  v28 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
  }
}
