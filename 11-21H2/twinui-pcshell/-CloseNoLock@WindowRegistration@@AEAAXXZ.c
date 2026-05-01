/*
 * XREFs of ?CloseNoLock@WindowRegistration@@AEAAXXZ @ 0x1805D25E0
 * Callers:
 *     ??1WindowRegistration@@UEAA@XZ @ 0x1805D242C (--1WindowRegistration@@UEAA@XZ.c)
 *     ?Close@?$produce@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x1805D2520 (-Close@-$produce@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@@impl@winrt@@UEAAHXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180017658 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?SetStopResult@?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18002F9D0 (-SetStopResult@-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C5DC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperationKind@2@AEBVCorrelationVector@@@Z @ 0x1800C74C4 (-StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperat.c)
 *     ?get@?$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLogging@@P6AXXZ@Z @ 0x1800C77D8 (-get@-$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLoggi.c)
 *     ??1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ @ 0x1800C7F64 (--1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800C805C (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RegisterFlyoutWindow@Utils@@YAXPEAUHWND__@@_N@Z @ 0x1805D0D50 (-RegisterFlyoutWindow@Utils@@YAXPEAUHWND__@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall WindowRegistration::CloseNoLock(WindowRegistration *this)
{
  bool v2; // bl
  __int64 v3; // rcx
  _DWORD *v4; // rbx
  int v5; // [rsp+40h] [rbp-C0h] BYREF
  RTL_SRWLOCK *v6; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+50h] [rbp-B0h] BYREF
  void **v8; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v9[24]; // [rsp+68h] [rbp-98h] BYREF
  int v10; // [rsp+80h] [rbp-80h]
  __int64 v11; // [rsp+90h] [rbp-70h]

  if ( *((_BYTE *)this + 48) )
  {
    wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v8);
    v8 = &MeetAndChatTelemetry::MeetAndChatManagerOperation::`vftable';
    MeetAndChatTelemetry::MeetAndChatManagerOperation::StartActivity(
      (__int64)&v8,
      2,
      (volatile signed __int64 **)this + 4);
    Utils::RegisterFlyoutWindow(*((HWND *)this + 3), 0LL);
    *((_BYTE *)this + 48) = 0;
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)&v8,
      &v6);
    v2 = wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
           v11,
           0,
           &v5);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v6);
    if ( v2 )
    {
      ((void (__fastcall *)(void ***))v8[1])(&v8);
    }
    else
    {
      v4 = (_DWORD *)wil::details::static_lazy<MeetAndChatTelemetryLogging>::get(
                       v3,
                       _lambda_f7280a8f7c8a9a0f992333b64944e967_::_lambda_invoker_cdecl_)[1];
      if ( *v4 > 5u )
      {
        LODWORD(v6) = GetCurrentThreadId();
        v5 = 0;
        v7 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)v4,
          byte_18069D52E,
          (const GUID *)(v11 + 8),
          0LL,
          (__int64)&v7,
          (__int64)&v5,
          (__int64)&v6);
      }
    }
    if ( v10 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v9);
    MeetAndChatTelemetry::MeetAndChatManagerOperation::~MeetAndChatManagerOperation((MeetAndChatTelemetry::MeetAndChatManagerOperation *)&v8);
  }
}
