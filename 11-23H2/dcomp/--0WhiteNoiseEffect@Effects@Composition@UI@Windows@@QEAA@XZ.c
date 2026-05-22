/*
 * XREFs of ??0WhiteNoiseEffect@Effects@Composition@UI@Windows@@QEAA@XZ @ 0x18014610C
 * Callers:
 *     ??$MakeAndInitialize2@VWhiteNoiseEffect@Effects@Composition@UI@Windows@@V12345@@Details@WRL2@Microsoft@@YAJPEAPEAVWhiteNoiseEffect@Effects@Composition@UI@Windows@@@Z @ 0x18014607C (--$MakeAndInitialize2@VWhiteNoiseEffect@Effects@Composition@UI@Windows@@V12345@@Details@WRL2@Mic.c)
 * Callees:
 *     ??0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ @ 0x180040E8C (--0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ.c)
 */

Windows::UI::Composition::Effects::WhiteNoiseEffect *__fastcall Windows::UI::Composition::Effects::WhiteNoiseEffect::WhiteNoiseEffect(
        Windows::UI::Composition::Effects::WhiteNoiseEffect *this)
{
  Microsoft::WRL2::NestableRuntimeClass::NestableRuntimeClass(this);
  *(_QWORD *)this = &Windows::UI::Composition::Effects::WhiteNoiseEffect::`vftable';
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 3) = &Windows::UI::Composition::Effects::WhiteNoiseEffect::Api::`vftable'{for `Windows::UI::Composition::Effects::IWhiteNoiseEffect'};
  *((_QWORD *)this + 4) = &Windows::UI::Composition::Effects::WhiteNoiseEffect::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop>'};
  *((_QWORD *)this + 5) = &Windows::UI::Composition::Effects::WhiteNoiseEffect::Api::`vftable'{for `Windows::Graphics::Effects::IGraphicsEffectSource'};
  *((_QWORD *)this + 6) = &Windows::UI::Composition::Effects::WhiteNoiseEffect::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop>'};
  return this;
}
