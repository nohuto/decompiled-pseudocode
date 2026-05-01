/*
 * XREFs of ?StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18004B97C
 * Callers:
 *     ??$?0$$V@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18004B658 (--$-0$$V@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA.c)
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

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::StartActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdi
  const GUID *v5; // rax
  const GUID *v6; // r8
  __int64 v7; // rdx
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+38h] [rbp-29h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-21h] BYREF
  __int64 v11; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp+7h] BYREF
  void *v14; // [rsp+78h] [rbp+17h]
  int v15; // [rsp+80h] [rbp+1Fh]
  int v16; // [rsp+84h] [rbp+23h]
  __int64 *v17; // [rsp+88h] [rbp+27h]
  int v18; // [rsp+90h] [rbp+2Fh]
  int v19; // [rsp+94h] [rbp+33h]
  WINBOOL *p_fPending; // [rsp+98h] [rbp+37h]
  int v21; // [rsp+A0h] [rbp+3Fh]
  int v22; // [rsp+A4h] [rbp+43h]

  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(this, &v11);
  v2 = *((_QWORD *)this + 6);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    *(_QWORD *)&EventDescriptor.Id = &`NotificationCenterLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B3F78;
    qword_1807B3F78 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3F90 = (__int64)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
    LODWORD(EventDescriptor.Keyword) = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&EventDescriptor, v7, v8);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *(_OWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  *(_DWORD *)v2 = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
  v4 = *(_QWORD *)(wil::details::static_lazy<NotificationCenterLogging>::get(
                     v3,
                     _lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v4 > 5u )
  {
    fPending = GetCurrentThreadId();
    v11 = 0LL;
    v5 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v6 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
    p_fPending = &fPending;
    v21 = 4;
    v22 = 0;
    v17 = &v11;
    v18 = 8;
    v19 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v4 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v14 = &unk_1806A242E;
    v15 = 67;
    v16 = 1;
    LODWORD(Context) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v4 + 32), &EventDescriptor, v6, v5, 4u, &UserData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)((char *)this + 8));
}
