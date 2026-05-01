/*
 * XREFs of ?StartActivity@SetViewPosition@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x1800793C4
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180076880 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180076664 (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

void __fastcall CImmersiveAppTelemetry::SetViewPosition::StartActivity(
        CImmersiveAppTelemetry::SetViewPosition *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v7; // r9
  const GUID *v8; // r8
  __int64 v9; // rcx
  int v10; // eax
  REGHANDLE v11; // rcx
  __int64 v12; // rdx
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v14; // rdx
  void (*v15)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+38h] [rbp-89h] BYREF
  WINBOOL v17; // [rsp+3Ch] [rbp-85h] BYREF
  DWORD v18; // [rsp+40h] [rbp-81h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-79h] BYREF
  LPVOID v20; // [rsp+50h] [rbp-71h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-69h] BYREF
  __int64 v22; // [rsp+68h] [rbp-59h] BYREF
  LPINIT_ONCE v23; // [rsp+70h] [rbp-51h] BYREF
  int v24; // [rsp+78h] [rbp-49h]
  LPINIT_ONCE v25; // [rsp+80h] [rbp-41h] BYREF
  int v26; // [rsp+88h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-29h] BYREF
  void *v28; // [rsp+A8h] [rbp-19h]
  int v29; // [rsp+B0h] [rbp-11h]
  int v30; // [rsp+B4h] [rbp-Dh]
  __int64 *v31; // [rsp+B8h] [rbp-9h]
  __int64 v32; // [rsp+C0h] [rbp-1h]
  DWORD *v33; // [rsp+C8h] [rbp+7h]
  __int64 v34; // [rsp+D0h] [rbp+Fh]
  const unsigned __int16 *v35; // [rsp+D8h] [rbp+17h]
  int v36; // [rsp+E0h] [rbp+1Fh]
  int v37; // [rsp+E4h] [rbp+23h]

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    (RTL_SRWLOCK **)&EventDescriptor);
  v4 = *((_QWORD *)this + 6);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v23 = &`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B3D58;
    qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v24 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v23, v12, v13);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *(_OWORD *)(v4 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  *(_DWORD *)v4 = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&EventDescriptor);
  v20 = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v17, &v20) && v17 )
  {
    v25 = &`CAppManagerLogging::Instance'::`2'::wrapper;
    v20 = &qword_1807B3D58;
    qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v26 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v25, v14, v15);
  }
  v5 = *((_QWORD *)v20 + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v22 = 0LL;
    v18 = CurrentThreadId;
    v7 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v8 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
    if ( a2 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a2[v9] );
      v10 = 2 * v9 + 2;
    }
    else
    {
      a2 = &LocaleName;
      v10 = 2;
    }
    v36 = v10;
    v35 = a2;
    v33 = &v18;
    v31 = &v22;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *(_QWORD *)(v5 + 8);
    v37 = 0;
    v34 = 4LL;
    v32 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v28 = &unk_18069FA26;
    UserData.Reserved = 2;
    v11 = *(_QWORD *)(v5 + 32);
    v29 = 66;
    v30 = 1;
    fPending = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(v11, &EventDescriptor, v8, v7, 5u, &UserData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CImmersiveAppTelemetry::SetViewPosition *)((char *)this + 8));
}
