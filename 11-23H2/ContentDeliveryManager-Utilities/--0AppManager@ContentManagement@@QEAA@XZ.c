/*
 * XREFs of ??0AppManager@ContentManagement@@QEAA@XZ @ 0x18007D868
 * Callers:
 *     ??$MakeAndInitialize@VAppManager@ContentManagement@@UIAppManager@2@AEAPEAUIUser@System@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAUIAppManager@ContentManagement@@AEAPEAUIUser@System@Windows@@@Z @ 0x18007B968 (--$MakeAndInitialize@VAppManager@ContentManagement@@UIAppManager@2@AEAPEAUIUser@System@Windows@@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B018 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

RTL_SRWLOCK *__fastcall ContentManagement::AppManager::AppManager(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi

  v2 = this + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&this[1]);
  this[8].Ptr = (PVOID)1;
  this->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::`vftable'{for `IInspectable'};
  v2->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IAppManager>'};
  this[5].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::`vftable'{for `IWeakReferenceSource'};
  this[6].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IAppManager>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  this->Ptr = &ContentManagement::AppManager::`vftable'{for `IInspectable'};
  v2->Ptr = &ContentManagement::AppManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IAppManager>'};
  this[5].Ptr = &ContentManagement::AppManager::`vftable'{for `IWeakReferenceSource'};
  this[6].Ptr = &ContentManagement::AppManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IAppManager>'};
  this[9].Ptr = 0LL;
  this[10].Ptr = 0LL;
  InitializeSRWLock(this + 11);
  return this;
}
