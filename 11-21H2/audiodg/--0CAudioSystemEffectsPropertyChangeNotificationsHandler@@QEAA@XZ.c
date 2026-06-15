/*
 * XREFs of ??0CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAA@XZ @ 0x140064AA4
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@V1@AEAPEBGAEAU_GUID@@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAPEBGAEAU_GUID@@AEAPEAUIMMDevice@@@Z @ 0x140064264 (--$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@V1@AEAPEBGAEAU_GUID.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

CAudioSystemEffectsPropertyChangeNotificationsHandler *__fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::CAudioSystemEffectsPropertyChangeNotificationsHandler(
        CAudioSystemEffectsPropertyChangeNotificationsHandler *this)
{
  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioSystemEffectsPropertyChangeNotificationClient>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioSystemEffectsPropertyChangeNotificationClient>::`vftable'{for `IAudioSystemEffectsPropertyChangeNotificationClient'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioSystemEffectsPropertyChangeNotificationClient>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CAudioSystemEffectsPropertyChangeNotificationsHandler::`vftable';
  *((_QWORD *)this + 1) = &CAudioSystemEffectsPropertyChangeNotificationsHandler::`vftable'{for `IAudioSystemEffectsPropertyChangeNotificationClient'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioSystemEffectsPropertyChangeNotificationClient>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 7LL;
  *((_WORD *)this + 28) = 0;
  *((_QWORD *)this + 11) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 96), 0, 0);
  *((_BYTE *)this + 136) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  return this;
}
