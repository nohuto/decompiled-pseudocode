/*
 * XREFs of ??0CMicBoostNotificationsDelegator@@QEAA@XZ @ 0x140077E70
 * Callers:
 *     ??$MakeAndInitialize@VCMicBoostNotificationsDelegator@@V1@PEAVCMicBoostNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCMicBoostNotificationsDelegator@@$$QEAPEAVCMicBoostNotificationsHandler@@@Z @ 0x140077C9C (--$MakeAndInitialize@VCMicBoostNotificationsDelegator@@V1@PEAVCMicBoostNotificationsHandler@@@De.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

CMicBoostNotificationsDelegator *__fastcall CMicBoostNotificationsDelegator::CMicBoostNotificationsDelegator(
        CMicBoostNotificationsDelegator *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IControlChangeNotify>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CMicBoostNotificationsDelegator::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  return this;
}
