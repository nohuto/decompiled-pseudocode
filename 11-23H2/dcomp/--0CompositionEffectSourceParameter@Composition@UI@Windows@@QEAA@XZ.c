/*
 * XREFs of ??0CompositionEffectSourceParameter@Composition@UI@Windows@@QEAA@XZ @ 0x18007EDC0
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionEffectSourceParameter@Composition@UI@Windows@@V1234@AEAPEAUHSTRING__@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEffectSourceParameter@Composition@UI@Windows@@AEAPEAUHSTRING__@@@Z @ 0x18007ECDC (--$MakeAndInitialize2@VCompositionEffectSourceParameter@Composition@UI@Windows@@V1234@AEAPEAUHST.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::UI::Composition::CompositionEffectSourceParameter *__fastcall Windows::UI::Composition::CompositionEffectSourceParameter::CompositionEffectSourceParameter(
        Windows::UI::Composition::CompositionEffectSourceParameter *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL2::NestableRuntimeClass::`vftable';
  *((_DWORD *)this + 4) = 1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionEffectSourceParameter::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 3) = &Windows::UI::Composition::CompositionEffectSourceParameter::Api::`vftable'{for `Windows::UI::Composition::ICompositionEffectSourceParameter'};
  *((_QWORD *)this + 4) = &Windows::UI::Composition::CompositionEffectSourceParameter::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Graphics::Effects::IGraphicsEffectSource>'};
  return this;
}
