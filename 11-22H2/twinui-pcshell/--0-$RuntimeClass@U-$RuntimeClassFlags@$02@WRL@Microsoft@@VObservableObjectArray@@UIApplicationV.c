/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1805645F8
 * Callers:
 *     ??0SwitchItemCollection@@QEAA@XZ @ 0x180564700 (--0SwitchItemCollection@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0ObservableObjectArray@@QEAA@XZ @ 0x180564690 (--0ObservableObjectArray@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ObservableObjectArray,IApplicationViewChangeListener,ISwitchItemCollection>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ObservableObjectArray,IApplicationViewChangeListener,ISwitchItemCollection>(
        _QWORD *a1)
{
  ObservableObjectArray::ObservableObjectArray((ObservableObjectArray *)(a1 + 1));
  a1[23] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ObservableObjectArray,IApplicationViewChangeListener,ISwitchItemCollection>::`vftable';
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ObservableObjectArray,IApplicationViewChangeListener,ISwitchItemCollection>::`vftable'{for `Microsoft::WRL::Details::Selector<ObservableObjectArray,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<ObservableObjectArray>,IWeakReferenceSource,IApplicationViewChangeListener,ISwitchItemCollection>>'};
  a1[19] = &SwitchItemCollection::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IApplicationViewChangeListener,ISwitchItemCollection>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<ObservableObjectArray>,IWeakReferenceSource,IApplicationViewChangeListener,ISwitchItemCollection>>'};
  a1[20] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ObservableObjectArray,IApplicationViewChangeListener,ISwitchItemCollection>::`vftable'{for `IApplicationViewChangeListener'};
  a1[21] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ObservableObjectArray,IApplicationViewChangeListener,ISwitchItemCollection>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISwitchItemCollection>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
