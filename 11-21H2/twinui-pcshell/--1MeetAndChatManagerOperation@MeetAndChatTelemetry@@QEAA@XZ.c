/*
 * XREFs of ??1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ @ 0x1800C7F64
 * Callers:
 *     ?OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@56@0@Z @ 0x18003D410 (-OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAE.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1 @ 0x1801D26E0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDes_ea_1801D26E0.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801D29C6 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDe_ea_1801D29C6.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::OnListenerWindowMessage_::_1_::dtor$1 @ 0x180216670 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--OnListenerWin_ea_180216670.c)
 *     ?CloseNoLock@WindowRegistration@@AEAAXXZ @ 0x1805D25E0 (-CloseNoLock@WindowRegistration@@AEAAXXZ.c)
 *     _WindowRegistration::CloseNoLock_::_1_::dtor$0 @ 0x1805D2748 (_WindowRegistration--CloseNoLock_--_1_--dtor$0.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180017658 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?SetStopResult@?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18002F9D0 (-SetStopResult@-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VMeetAndChatTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180180358 (-reset@-$shared_object@V-$ActivityData@VMeetAndChatTelemetryLogging@@U_TlgReflectorTag_Param0IsP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall MeetAndChatTelemetry::MeetAndChatManagerOperation::~MeetAndChatManagerOperation(
        MeetAndChatTelemetry::MeetAndChatManagerOperation *this)
{
  _QWORD *v1; // rdi
  bool v3; // zf
  char v4; // si
  _DWORD *v5; // rcx
  int v6; // edx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 312);
  v3 = *((_QWORD *)this + 39) == 0LL;
  *(_QWORD *)this = &MeetAndChatTelemetry::MeetAndChatManagerOperation::`vftable';
  v4 = 1;
  if ( v3 )
    goto LABEL_2;
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &v7);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MeetAndChatTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
  if ( v4 )
  {
LABEL_2:
    v5 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v5 == 1 )
    {
      LODWORD(v7) = v5[22];
      v6 = -2147024322;
      if ( (int)v7 < 0 )
        v6 = (int)v7;
      wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        (__int64)v5,
        v6,
        (int *)&v7);
      (*(void (__fastcall **)(MeetAndChatTelemetry::MeetAndChatManagerOperation *))(*(_QWORD *)this + 8LL))(this);
    }
  }
  wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
