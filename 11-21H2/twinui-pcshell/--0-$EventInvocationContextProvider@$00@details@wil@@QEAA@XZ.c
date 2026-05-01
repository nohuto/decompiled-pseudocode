/*
 * XREFs of ??0?$EventInvocationContextProvider@$00@details@wil@@QEAA@XZ @ 0x1800AD8E4
 * Callers:
 *     ??$MakeAndInitialize@V?$EventInvocationContextProvider@$00@details@wil@@UIEventInvocationContextProvider@23@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEventInvocationContextProvider@details@wil@@@Z @ 0x1800AD81C (--$MakeAndInitialize@V-$EventInvocationContextProvider@$00@details@wil@@UIEventInvocationContext.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180082710 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::details::EventInvocationContextProvider<1>::EventInvocationContextProvider<1>(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &Windows::Foundation::Collections::IIterable<unsigned int>::`vftable';
  v2 = a1 + 2;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 2));
  a1[7] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<wil::details::IEventInvocationContextProvider,Microsoft::WRL::FtmBase>::`vftable';
  a1[1] = &Microsoft::WRL::RuntimeClass<wil::details::IEventInvocationContextProvider,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Microsoft::WRL::RuntimeClass<wil::details::IEventInvocationContextProvider,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *a1 = &wil::details::EventInvocationContextProvider<1>::`vftable';
  a1[1] = &wil::details::EventInvocationContextProvider<1>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &wil::details::EventInvocationContextProvider<1>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  a1[8] = 0LL;
  a1[9] = 0LL;
  return a1;
}
