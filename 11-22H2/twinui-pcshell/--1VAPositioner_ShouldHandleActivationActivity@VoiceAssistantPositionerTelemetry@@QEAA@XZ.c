/*
 * XREFs of ??1VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x18003F4D0
 * Callers:
 *     ?ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18003F530 (-ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     _VoiceAssistantPositioner::ShouldHandleActivation_::_1_::dtor$0 @ 0x1802BEF61 (_VoiceAssistantPositioner--ShouldHandleActivation_--_1_--dtor$0.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006FDB4 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B0834 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?ReportStopActivity@?$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1805ADCCC (-ReportStopActivity@-$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorT.c)
 *     ?SetUnhandledException@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x1805AE08C (-SetUnhandledException@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProvid.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::~VAPositioner_ShouldHandleActivationActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *this)
{
  _QWORD *v1; // rdi
  bool v3; // zf
  char v4; // si
  unsigned int v5; // eax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 312);
  v3 = *((_QWORD *)this + 39) == 0LL;
  *(_QWORD *)this = &VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::`vftable';
  v4 = 1;
  if ( v3 )
    goto LABEL_2;
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    &SRWLock);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v4 )
  {
LABEL_2:
    if ( **((_DWORD **)this + 6) == 1 )
    {
      v5 = wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException();
      wil::ActivityBase<WindowManagementLogging,1,0,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        this,
        v5);
    }
  }
  wil::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>(this);
}
