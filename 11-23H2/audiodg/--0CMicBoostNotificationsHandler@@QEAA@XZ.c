/*
 * XREFs of ??0CMicBoostNotificationsHandler@@QEAA@XZ @ 0x14006B7A8
 * Callers:
 *     ??$MakeAndInitialize@VCMicBoostNotificationsHandler@@V1@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCMicBoostNotificationsHandler@@AEAPEAUIMMDevice@@@Z @ 0x14006A76C (--$MakeAndInitialize@VCMicBoostNotificationsHandler@@V1@AEAPEAUIMMDevice@@@Details@WRL@Microsoft.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

CMicBoostNotificationsHandler *__fastcall CMicBoostNotificationsHandler::CMicBoostNotificationsHandler(
        CMicBoostNotificationsHandler *this)
{
  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IControlChangeNotify>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IControlChangeNotify>::`vftable'{for `IControlChangeNotify'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IControlChangeNotify>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CMicBoostNotificationsHandler::`vftable';
  *((_QWORD *)this + 1) = &CMicBoostNotificationsHandler::`vftable'{for `IControlChangeNotify'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IControlChangeNotify>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 72), 0, 0);
  *((_BYTE *)this + 112) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  return this;
}
