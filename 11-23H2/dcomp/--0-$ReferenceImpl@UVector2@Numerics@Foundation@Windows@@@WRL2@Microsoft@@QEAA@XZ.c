/*
 * XREFs of ??0?$ReferenceImpl@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x180167EC8
 * Callers:
 *     ??$MakeAndInitialize@V?$ReferenceImpl@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@V123@AEAUVector2@Numerics@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAV?$ReferenceImpl@UVector2@Numerics@Foundation@Windows@@@WRL2@2@AEAUVector2@Numerics@Foundation@Windows@@@Z @ 0x180167E14 (--$MakeAndInitialize@V-$ReferenceImpl@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@V12.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002DED4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector2>::ReferenceImpl<Windows::Foundation::Numerics::Vector2>(
        _QWORD *a1)
{
  _QWORD *v2; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx

  v2 = a1 + 3;
  *a1 = &Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *> *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 3));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *a1 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IReference<Windows::Foundation::Numerics::Vector2>,Windows::Foundation::IPropertyValue,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::IReference<Windows::Foundation::Numerics::Vector2>'};
  a1[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IReference<Windows::Foundation::Numerics::Vector2>,Windows::Foundation::IPropertyValue,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::IPropertyValue,Microsoft::WRL::FtmBase>'};
  a1[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IReference<Windows::Foundation::Numerics::Vector2>,Windows::Foundation::IPropertyValue,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::IPropertyValue'};
  *v2 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IReference<Windows::Foundation::Numerics::Vector2>,Windows::Foundation::IPropertyValue,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  a1[8] = 1LL;
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  *a1 = &Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector2>::`vftable'{for `Windows::Foundation::IReference<Windows::Foundation::Numerics::Vector2>'};
  a1[1] = &Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::IPropertyValue,Microsoft::WRL::FtmBase>'};
  a1[2] = &Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector2>::`vftable'{for `Windows::Foundation::IPropertyValue'};
  *v2 = &Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
