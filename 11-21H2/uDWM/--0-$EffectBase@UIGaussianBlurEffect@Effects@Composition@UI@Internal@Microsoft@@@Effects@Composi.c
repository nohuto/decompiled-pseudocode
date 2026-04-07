/*
 * XREFs of ??0?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@QEAA@XZ @ 0x18003B698
 * Callers:
 *     ??0GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@QEAA@XZ @ 0x18003B62C (--0GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003B738 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>(
        _QWORD *a1)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>();
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::`vftable';
  a1[1] = &Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::`vftable'{for `IWeakReferenceSource'};
  a1[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>'};
  a1[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::`vftable'{for `Windows::Graphics::Effects::IGraphicsEffectD2D1Interop'};
  a1[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>'};
  if ( v2 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v2 + 8LL))(v2);
  *a1 = &Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::`vftable';
  a1[7] = 0LL;
  a1[1] = &Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::`vftable'{for `IWeakReferenceSource'};
  a1[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>'};
  a1[3] = &Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::`vftable'{for `Windows::Graphics::Effects::IGraphicsEffectD2D1Interop'};
  a1[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>'};
  return a1;
}
