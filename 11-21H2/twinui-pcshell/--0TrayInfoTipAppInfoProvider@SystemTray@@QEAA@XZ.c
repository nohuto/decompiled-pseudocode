/*
 * XREFs of ??0TrayInfoTipAppInfoProvider@SystemTray@@QEAA@XZ @ 0x18015FF40
 * Callers:
 *     ??$MakeAndInitialize@VTrayInfoTipAppInfoProvider@SystemTray@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x18015FE60 (--$MakeAndInitialize@VTrayInfoTipAppInfoProvider@SystemTray@@UIInspectable@@$$V@Details@WRL@Micr.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180082710 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

SystemTray::TrayInfoTipAppInfoProvider *__fastcall SystemTray::TrayInfoTipAppInfoProvider::TrayInfoTipAppInfoProvider(
        SystemTray::TrayInfoTipAppInfoProvider *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((SystemTray::TrayInfoTipAppInfoProvider *)((char *)this + 16));
  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Microsoft::WRL::RuntimeClass<Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SystemTray::TrayInfoTipAppInfoProvider::`vftable';
  *((_QWORD *)this + 1) = &SystemTray::TrayInfoTipAppInfoProvider::`vftable'{for `IWeakReferenceSource'};
  *v2 = &SystemTray::TrayInfoTipAppInfoProvider::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
