/*
 * XREFs of ??0CDeviceOrientationNotificationsHandler@@QEAA@XZ @ 0x14006B74C
 * Callers:
 *     std::call_once__lambda_c3c562c1cb4a987d14005078cd1fca93___ @ 0x14006ABB0 (std--call_once__lambda_c3c562c1cb4a987d14005078cd1fca93___.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

CDeviceOrientationNotificationsHandler *__fastcall CDeviceOrientationNotificationsHandler::CDeviceOrientationNotificationsHandler(
        CDeviceOrientationNotificationsHandler *this)
{
  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceOrientationNotificationsCallback>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceOrientationNotificationsCallback>::`vftable'{for `IDeviceOrientationNotificationsCallback'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceOrientationNotificationsCallback>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CDeviceOrientationNotificationsHandler::`vftable';
  *((_QWORD *)this + 1) = &CDeviceOrientationNotificationsHandler::`vftable'{for `IDeviceOrientationNotificationsCallback'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceOrientationNotificationsCallback>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 1, 0, 0);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  return this;
}
