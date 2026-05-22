/*
 * XREFs of ??0TransformInformation@Private@Composition@UI@Windows@@QEAA@XZ @ 0x1801059C8
 * Callers:
 *     ??$MakeAndInitialize@VTransformInformation@Private@Composition@UI@Windows@@UITransformInformation@2345@PEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUITransformInformation@Private@Composition@UI@Windows@@$$QEAPEAUHWND__@@@Z @ 0x180104A04 (--$MakeAndInitialize@VTransformInformation@Private@Composition@UI@Windows@@UITransformInformatio.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002DED4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::UI::Composition::Private::TransformInformation *__fastcall Windows::UI::Composition::Private::TransformInformation::TransformInformation(
        Windows::UI::Composition::Private::TransformInformation *this)
{
  _QWORD *v1; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx

  v1 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((Windows::UI::Composition::Private::TransformInformation *)((char *)this + 16));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::UI::Composition::Private::ITransformInformation,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::UI::Composition::Private::ITransformInformation,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::UI::Composition::Private::ITransformInformation,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = 1LL;
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)this = &Windows::UI::Composition::Private::TransformInformation::`vftable';
  *((_QWORD *)this + 1) = &Windows::UI::Composition::Private::TransformInformation::`vftable'{for `IWeakReferenceSource'};
  *v1 = &Windows::UI::Composition::Private::TransformInformation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
