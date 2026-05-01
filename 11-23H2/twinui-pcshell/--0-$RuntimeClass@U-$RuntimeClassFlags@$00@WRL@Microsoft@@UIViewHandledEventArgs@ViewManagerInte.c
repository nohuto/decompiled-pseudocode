/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIViewHandledEventArgs@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1804E5960
 * Callers:
 *     ??$MakeOrThrow@VUwpViewHandledEventArgs@@AEA_N@wil@@YA?AV?$ComPtr@VUwpViewHandledEventArgs@@@WRL@Microsoft@@AEA_N@Z @ 0x1804E37B0 (--$MakeOrThrow@VUwpViewHandledEventArgs@@AEA_N@wil@@YA-AV-$ComPtr@VUwpViewHandledEventArgs@@@WRL.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800C9020 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs,Microsoft::WRL::FtmBase>(
        _QWORD *a1)
{
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 2));
  a1[7] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  a1[2] = &ViewHandledEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
