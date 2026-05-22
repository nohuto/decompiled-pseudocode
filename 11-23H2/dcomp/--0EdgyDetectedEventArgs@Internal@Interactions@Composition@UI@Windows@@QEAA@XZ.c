/*
 * XREFs of ??0EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x180130D18
 * Callers:
 *     ??$MakeAndInitialize@VEdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@V123456@PEAUHSTRING__@@AEAPEBUEdgyDetectedParams@@@Details@WRL@Microsoft@@YAJPEAPEAVEdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@$$QEAPEAUHSTRING__@@AEAPEBUEdgyDetectedParams@@@Z @ 0x180130B88 (--$MakeAndInitialize@VEdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@V12345.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002DED4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs *__fastcall Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs::EdgyDetectedEventArgs(
        Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs *this)
{
  _QWORD *v1; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx

  v1 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs *)((char *)this + 8));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs>::`vftable'{for `IInspectable'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs>'};
  *((_QWORD *)this + 8) = 1LL;
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)this = &Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 9) = 0LL;
  *v1 = &Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs>'};
  *((_QWORD *)this + 5) = &Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 6) = &Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs>'};
  *((_OWORD *)this + 5) = 0LL;
  *((_OWORD *)this + 6) = 0LL;
  *((_OWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  return this;
}
