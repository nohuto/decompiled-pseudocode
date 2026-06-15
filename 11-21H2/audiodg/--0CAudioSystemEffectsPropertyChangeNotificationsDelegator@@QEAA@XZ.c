/*
 * XREFs of ??0CAudioSystemEffectsPropertyChangeNotificationsDelegator@@QEAA@XZ @ 0x14006A568
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsDelegator@@V1@PEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsDelegator@@$$QEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x14006A39C (--$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsDelegator@@V1@PEAVCAudioSyst.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
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
