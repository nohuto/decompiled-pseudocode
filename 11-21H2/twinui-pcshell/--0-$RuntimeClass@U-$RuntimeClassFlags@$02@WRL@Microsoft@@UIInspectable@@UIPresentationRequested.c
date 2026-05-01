/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UIPresentationRequestedArgs@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1802EC688
 * Callers:
 *     ??0PresentationRequestedArgs@@QEAA@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1802EC70C (--0PresentationRequestedArgs@@QEAA@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@In.c)
 *     ??0PresentationRequestedArgs@@QEAA@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@I@Z @ 0x1802EC7AC (--0PresentationRequestedArgs@@QEAA@PEAUIWindowingEnvironmentSettings@ViewManagerInt_ea_1802EC7AC.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180082710 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,IPresentationRequestedArgs,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,IPresentationRequestedArgs,Microsoft::WRL::FtmBase>(
        _QWORD *a1)
{
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 3));
  a1[8] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,IPresentationRequestedArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,IPresentationRequestedArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IPresentationRequestedArgs,Microsoft::WRL::FtmBase>'};
  a1[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,IPresentationRequestedArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IPresentationRequestedArgs'};
  a1[3] = &PresentationRequestedArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
