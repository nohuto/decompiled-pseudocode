/*
 * XREFs of ?StartActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x180022DC0
 * Callers:
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1800225F0 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800232B4 (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AD744 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CFramePresentationTelemetry::ReconcileApplicationViewState::StartActivity(
        CFramePresentationTelemetry::ReconcileApplicationViewState *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  __int64 v6; // rbx
  DWORD CurrentThreadId; // eax
  const GUID *v8; // r9
  const GUID *v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  REGHANDLE v12; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-89h] BYREF
  WINBOOL v14; // [rsp+3Ch] [rbp-85h] BYREF
  DWORD v15; // [rsp+40h] [rbp-81h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-79h] BYREF
  LPVOID v17; // [rsp+50h] [rbp-71h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-69h] BYREF
  __int64 v19; // [rsp+68h] [rbp-59h] BYREF
  union _RTL_RUN_ONCE *v20; // [rsp+70h] [rbp-51h] BYREF
  int v21; // [rsp+78h] [rbp-49h]
  union _RTL_RUN_ONCE *v22; // [rsp+80h] [rbp-41h] BYREF
  int v23; // [rsp+88h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-29h] BYREF
  void *v25; // [rsp+A8h] [rbp-19h]
  int v26; // [rsp+B0h] [rbp-11h]
  int v27; // [rsp+B4h] [rbp-Dh]
  __int64 *v28; // [rsp+B8h] [rbp-9h]
  __int64 v29; // [rsp+C0h] [rbp-1h]
  DWORD *v30; // [rsp+C8h] [rbp+7h]
  __int64 v31; // [rsp+D0h] [rbp+Fh]
  const unsigned __int16 *v32; // [rsp+D8h] [rbp+17h]
  int v33; // [rsp+E0h] [rbp+1Fh]
  int v34; // [rsp+E4h] [rbp+23h]

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    &EventDescriptor);
  v4 = *((_QWORD *)this + 6);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v20 = &`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_18098DB60;
    qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v21 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v20);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *(_OWORD *)(v4 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  v5 = *(RTL_SRWLOCK **)&EventDescriptor.Id;
  *(_DWORD *)v4 = 1;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v17 = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v14, &v17) && v14 )
  {
    v22 = &`CAppManagerLogging::Instance'::`2'::wrapper;
    v17 = &qword_18098DB60;
    qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v23 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v22);
  }
  v6 = *((_QWORD *)v17 + 1);
  if ( *(_DWORD *)v6 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v19 = 0LL;
    v15 = CurrentThreadId;
    v8 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v9 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
    if ( a2 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a2[v10] );
      v11 = 2 * v10 + 2;
    }
    else
    {
      a2 = &LocaleName;
      v11 = 2;
    }
    v12 = *(_QWORD *)(v6 + 32);
    v33 = v11;
    v30 = &v15;
    v28 = &v19;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *(_QWORD *)(v6 + 8);
    v32 = a2;
    v34 = 0;
    v31 = 4LL;
    v29 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v25 = &unk_180846112;
    UserData.Reserved = 2;
    v26 = 80;
    v27 = 1;
    fPending = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(v12, &EventDescriptor, v9, v8, 5u, &UserData);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(this);
}
