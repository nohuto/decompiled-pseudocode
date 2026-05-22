/*
 * XREFs of ??0UiaEndpointNotifierCallback@Composition@UI@Windows@@QEAA@XZ @ 0x180088A94
 * Callers:
 *     ??$MakeAndInitialize@VUiaEndpointNotifierCallback@Composition@UI@Windows@@UIUiaEndpointNotifierCallback@@PEAVCompositionIsland@234@AEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIUiaEndpointNotifierCallback@@$$QEAPEAVCompositionIsland@Composition@UI@Windows@@AEAU_GUID@@@Z @ 0x180088A00 (--$MakeAndInitialize@VUiaEndpointNotifierCallback@Composition@UI@Windows@@UIUiaEndpointNotifierC.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002DED4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::UI::Composition::UiaEndpointNotifierCallback *__fastcall Windows::UI::Composition::UiaEndpointNotifierCallback::UiaEndpointNotifierCallback(
        Windows::UI::Composition::UiaEndpointNotifierCallback *this)
{
  _QWORD *v1; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx

  v1 = (_QWORD *)((char *)this + 24);
  Microsoft::WRL::FtmBase::FtmBase((Windows::UI::Composition::UiaEndpointNotifierCallback *)((char *)this + 24));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IUiaEndpointNotifierCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IUiaEndpointNotifierCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IUiaEndpointNotifierCallback,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Windows::UI::Composition::UiaEndpointNotifierCallback::`vftable'{for `IWeakReferenceSource'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IUiaEndpointNotifierCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = 1LL;
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)this = &Windows::UI::Composition::UiaEndpointNotifierCallback::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Windows::UI::Composition::UiaEndpointNotifierCallback::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IUiaEndpointNotifierCallback,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Windows::UI::Composition::UiaEndpointNotifierCallback::`vftable'{for `IWeakReferenceSource'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IUiaEndpointNotifierCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
