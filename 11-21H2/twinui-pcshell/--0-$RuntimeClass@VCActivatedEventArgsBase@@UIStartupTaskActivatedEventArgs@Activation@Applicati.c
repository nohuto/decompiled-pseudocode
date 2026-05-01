/*
 * XREFs of ??0?$RuntimeClass@VCActivatedEventArgsBase@@UIStartupTaskActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18057119C
 * Callers:
 *     ??0StartupTaskActivatedEventArgsImpl@@QEAA@XZ @ 0x1805713C8 (--0StartupTaskActivatedEventArgsImpl@@QEAA@XZ.c)
 * Callees:
 *     ??0CActivatedEventArgsBase@@QEAA@XZ @ 0x1800A4300 (--0CActivatedEventArgsBase@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

CActivatedEventArgsBase *__fastcall Microsoft::WRL::RuntimeClass<CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>::RuntimeClass<CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>(
        CActivatedEventArgsBase *a1)
{
  CActivatedEventArgsBase::CActivatedEventArgsBase(a1);
  *((_QWORD *)a1 + 22) = 1LL;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>::`vftable';
  *((_QWORD *)a1 + 1) = &Microsoft::WRL::RuntimeClass<CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>::`vftable'{for `Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser'};
  *((_QWORD *)a1 + 2) = &Microsoft::WRL::RuntimeClass<CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)a1 + 3) = &Microsoft::WRL::RuntimeClass<CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>'};
  *((_QWORD *)a1 + 4) = &Microsoft::WRL::RuntimeClass<CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)a1 + 19) = &Microsoft::WRL::RuntimeClass<CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)a1 + 20) = &Microsoft::WRL::RuntimeClass<CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
