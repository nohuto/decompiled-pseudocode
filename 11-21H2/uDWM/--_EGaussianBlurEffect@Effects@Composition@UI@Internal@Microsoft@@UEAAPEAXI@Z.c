/*
 * XREFs of ??_EGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAPEAXI@Z @ 0x1800117E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@UEAA@XZ @ 0x18001183C (--1-$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composi.c)
 *     ?InternalRelease@?$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180011D20 (-InternalRelease@-$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *__fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::`vector deleting destructor'(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease((char *)this + 64);
  Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::~EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
