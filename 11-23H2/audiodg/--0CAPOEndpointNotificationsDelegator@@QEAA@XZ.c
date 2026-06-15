/*
 * XREFs of ??0CAPOEndpointNotificationsDelegator@@QEAA@XZ @ 0x1400715A0
 * Callers:
 *     ??$MakeAndInitialize@VCAPOEndpointNotificationsDelegator@@V1@PEAVCAPOEndpointNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEndpointNotificationsDelegator@@$$QEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x1400713CC (--$MakeAndInitialize@VCAPOEndpointNotificationsDelegator@@V1@PEAVCAPOEndpointNotificationsHandle.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CAPOEndpointNotificationsDelegator *__fastcall CAPOEndpointNotificationsDelegator::CAPOEndpointNotificationsDelegator(
        CAPOEndpointNotificationsDelegator *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioEndpointVolumeInternalCallback>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CAPOEndpointNotificationsDelegator::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  return this;
}
