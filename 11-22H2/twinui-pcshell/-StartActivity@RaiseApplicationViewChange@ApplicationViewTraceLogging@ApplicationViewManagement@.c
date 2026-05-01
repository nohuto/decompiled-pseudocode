/*
 * XREFs of ?StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800C6530
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800C8550 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800BCBAC (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18038FEB8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3,
        __int64 a4)
{
  __int64 v7; // rbx
  void (__fastcall *v8)(__int64, __int64); // rdi
  __int64 v9; // rax
  RTL_SRWLOCK *v10; // rbx
  RTL_SRWLOCK *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  const WCHAR *v14; // rbx
  const GUID *v15; // r9
  const GUID *v16; // r8
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rbx
  __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r15
  __int64 v23; // rax
  _QWORD *v24; // rax
  signed __int64 v25; // rdx
  _QWORD *v26; // rcx
  signed __int64 *v27; // r8
  signed __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  void (*v31)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v32; // rdx
  void (*v33)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  DWORD CurrentThreadId; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v37; // [rsp+44h] [rbp-BCh] BYREF
  BOOL v38; // [rsp+48h] [rbp-B8h] BYREF
  int v39; // [rsp+4Ch] [rbp-B4h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v41; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v43; // [rsp+68h] [rbp-98h]
  PSRWLOCK SRWLock; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+78h] [rbp-88h]
  __int64 v46; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  union _RTL_RUN_ONCE *v48; // [rsp+98h] [rbp-68h] BYREF
  int v49; // [rsp+A0h] [rbp-60h]
  union _RTL_RUN_ONCE *v50; // [rsp+A8h] [rbp-58h] BYREF
  int v51; // [rsp+B0h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+60h] BYREF
  void *v53; // [rsp+170h] [rbp+70h]
  int v54; // [rsp+178h] [rbp+78h]
  int v55; // [rsp+17Ch] [rbp+7Ch]
  __int64 *v56; // [rsp+180h] [rbp+80h]
  __int64 v57; // [rsp+188h] [rbp+88h]
  DWORD *p_CurrentThreadId; // [rsp+190h] [rbp+90h]
  __int64 v59; // [rsp+198h] [rbp+98h]
  const WCHAR *v60; // [rsp+1A0h] [rbp+A0h]
  int v61; // [rsp+1A8h] [rbp+A8h]
  int v62; // [rsp+1ACh] [rbp+ACh]
  int *v63; // [rsp+1B0h] [rbp+B0h]
  __int64 v64; // [rsp+1B8h] [rbp+B8h]
  BOOL *v65; // [rsp+1C0h] [rbp+C0h]
  __int64 v66; // [rsp+1C8h] [rbp+C8h]

  v35 = 0LL;
  (**a2)(a2, &GUID_979cde28_2164_437c_b963_55e5d4ac1d02, &v35);
  pv = 0LL;
  v7 = v35;
  v8 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 32LL);
  v9 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
  v8(v7, v9);
  v10 = *(RTL_SRWLOCK **)(a1 + 312);
  if ( v10 )
  {
    v11 = v10 + 32;
    AcquireSRWLockExclusive(v11);
    SRWLock = 0LL;
  }
  else
  {
    v11 = 0LL;
    v45 = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 48);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(
         &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    v48 = &`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
    Context = &qword_18098DDC8;
    qword_18098DDC8 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098DDE0 = (__int64)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    v49 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v48, v30, v31);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *(_OWORD *)(v12 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v12 + 8));
  *(_DWORD *)v12 = 1;
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  v41 = 0LL;
  if ( __std_init_once_begin_initialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &v37, &v41)
    && v37 )
  {
    v50 = &`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
    v41 = &qword_18098DDC8;
    qword_18098DDC8 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098DDE0 = (__int64)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    v51 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v50, v32, v33);
  }
  v13 = *((_QWORD *)v41 + 1);
  if ( *(_DWORD *)v13 > 5u )
  {
    v38 = a4 != 0;
    v39 = a3;
    v14 = (const WCHAR *)pv;
    CurrentThreadId = GetCurrentThreadId();
    v46 = 0LL;
    v15 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    v16 = (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL);
    v65 = &v38;
    v66 = 4LL;
    v63 = &v39;
    v64 = 4LL;
    if ( v14 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( v14[v17] );
      v18 = 2 * v17 + 2;
    }
    else
    {
      v14 = &LocaleName;
      v18 = 2;
    }
    v60 = v14;
    v61 = v18;
    v62 = 0;
    p_CurrentThreadId = &CurrentThreadId;
    v59 = 4LL;
    v56 = &v46;
    v57 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v13 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v53 = &unk_180846D85;
    v54 = 108;
    v55 = 1;
    v43 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v13 + 32), &EventDescriptor, v16, v15, 7u, &UserData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v19 = a1 + 8;
    v20 = wil::details::g_pThreadFailureCallbacks;
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      v21 = GetCurrentThreadId();
      v22 = 8 * (v21 % 0xA);
      v23 = *(_QWORD *)(v22 + v20);
      if ( v23 )
      {
        while ( *(_DWORD *)v23 != (_DWORD)v21 )
        {
          v23 = *(_QWORD *)(v23 + 8);
          if ( !v23 )
            goto LABEL_24;
        }
        v26 = (_QWORD *)(v23 + 16);
      }
      else
      {
LABEL_24:
        v24 = wil::details::ProcessHeapAlloc(0, 0x18uLL);
        v25 = (signed __int64)v24;
        if ( v24 )
        {
          *(_DWORD *)v24 = v21;
          v24[1] = 0LL;
          v26 = v24 + 2;
          v24[2] = 0LL;
          v27 = (signed __int64 *)(v22 + v20);
          do
          {
            v28 = *v27;
            *(_QWORD *)(v25 + 8) = *v27;
          }
          while ( v28 != _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + v20), v25, v28) );
        }
        else
        {
          v26 = 0LL;
        }
      }
      *(_QWORD *)v19 = v26;
      if ( v26 )
      {
        *(_QWORD *)(v19 + 16) = *v26;
        *v26 = v19;
        *(_DWORD *)(v19 + 24) = GetCurrentThreadId();
      }
    }
    else
    {
      *(_QWORD *)v19 = 0LL;
    }
  }
  if ( pv )
    CoTaskMemFree(pv);
  v29 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
}
