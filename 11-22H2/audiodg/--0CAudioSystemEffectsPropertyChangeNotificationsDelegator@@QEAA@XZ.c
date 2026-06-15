/*
 * XREFs of ??0CAudioSystemEffectsPropertyChangeNotificationsDelegator@@QEAA@XZ @ 0x140072B18
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsDelegator@@V1@PEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsDelegator@@$$QEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x140072944 (--$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsDelegator@@V1@PEAVCAudioSyst.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

CAudioSystemEffectsPropertyChangeNotificationsDelegator *__fastcall CAudioSystemEffectsPropertyChangeNotificationsDelegator::CAudioSystemEffectsPropertyChangeNotificationsDelegator(
        CAudioSystemEffectsPropertyChangeNotificationsDelegator *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioSystemEffectsPropertyChangeNotificationClient>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CAudioSystemEffectsPropertyChangeNotificationsDelegator::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  return this;
}
