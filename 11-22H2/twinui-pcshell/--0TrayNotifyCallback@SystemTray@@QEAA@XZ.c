/*
 * XREFs of ??0TrayNotifyCallback@SystemTray@@QEAA@XZ @ 0x180547DD0
 * Callers:
 *     ??$MakeAndInitialize@VTrayNotifyCallback@SystemTray@@V12@AEAPEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAVTrayNotifyCallback@SystemTray@@AEAPEAUHSTRING__@@@Z @ 0x180547D44 (--$MakeAndInitialize@VTrayNotifyCallback@SystemTray@@V12@AEAPEAUHSTRING__@@@Details@WRL@Microsof.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

SystemTray::TrayNotifyCallback *__fastcall SystemTray::TrayNotifyCallback::TrayNotifyCallback(
        SystemTray::TrayNotifyCallback *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,INotificationCB>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SystemTray::TrayNotifyCallback::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 7LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_OWORD *)this + 4) = 0LL;
  *((_BYTE *)this + 80) = 0;
  return this;
}
