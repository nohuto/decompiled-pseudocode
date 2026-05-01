/*
 * XREFs of ?StartActivity@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXPEBG@Z @ 0x18004B45C
 * Callers:
 *     ??$?0PEBG@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG@Z @ 0x18004B190 (--$-0PEBG@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800730FC (-LockExclusive@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@P6AXXZ@Z @ 0x1800A6D60 (-get@-$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity::StartActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v8; // rax
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 v11; // rcx
  int v12; // eax
  REGHANDLE v13; // rcx
  __int64 v14; // rdx
  void (*v15)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+38h] [rbp-59h] BYREF
  DWORD v17; // [rsp+3Ch] [rbp-55h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-51h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-49h] BYREF
  __int64 v20; // [rsp+58h] [rbp-39h] BYREF
  LPINIT_ONCE v21; // [rsp+60h] [rbp-31h] BYREF
  int v22; // [rsp+68h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-19h] BYREF
  void *v24; // [rsp+88h] [rbp-9h]
  int v25; // [rsp+90h] [rbp-1h]
  int v26; // [rsp+94h] [rbp+3h]
  __int64 *v27; // [rsp+98h] [rbp+7h]
  __int64 v28; // [rsp+A0h] [rbp+Fh]
  DWORD *v29; // [rsp+A8h] [rbp+17h]
  __int64 v30; // [rsp+B0h] [rbp+1Fh]
  const unsigned __int16 *v31; // [rsp+B8h] [rbp+27h]
  int v32; // [rsp+C0h] [rbp+2Fh]
  int v33; // [rsp+C4h] [rbp+33h]

  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    &EventDescriptor);
  v4 = *((_QWORD *)this + 6);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v21 = &`NotificationCenterLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B3F78;
    qword_1807B3F78 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3F90 = (__int64)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
    v22 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v21, v14, v15);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *(_OWORD *)(v4 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  *(_DWORD *)v4 = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&EventDescriptor);
  v6 = *(_QWORD *)(wil::details::static_lazy<NotificationCenterLogging>::get(
                     v5,
                     _lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v6 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v20 = 0LL;
    v17 = CurrentThreadId;
    v8 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v9 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
    v10 = (const GUID *)v8;
    if ( a2 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a2[v11] );
      v12 = 2 * v11 + 2;
    }
    else
    {
      a2 = &LocaleName;
      v12 = 2;
    }
    v32 = v12;
    v31 = a2;
    v29 = &v17;
    v27 = &v20;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *(_QWORD *)(v6 + 8);
    v33 = 0;
    v30 = 4LL;
    v28 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v24 = &unk_1806A32E5;
    UserData.Reserved = 2;
    v13 = *(_QWORD *)(v6 + 32);
    v25 = 77;
    v26 = 1;
    fPending = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(v13, &EventDescriptor, v9, v10, 5u, &UserData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity *)((char *)this + 8));
}
