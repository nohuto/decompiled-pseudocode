/*
 * XREFs of ??0SpotLight@Composition@UI@Windows@@QEAA@XZ @ 0x180085650
 * Callers:
 *     ??$MakeAndInitialize2@VSpotLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSpotLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18000AE80 (--$MakeAndInitialize2@VSpotLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@.c)
 *     ??$MakeAndInitialize2@VSpotLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVSpotLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x180091D6C (--$MakeAndInitialize2@VSpotLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL.c)
 * Callees:
 *     ??0CompositionLight@Composition@UI@Windows@@QEAA@XZ @ 0x1800856B8 (--0CompositionLight@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::SpotLight *__fastcall Windows::UI::Composition::SpotLight::SpotLight(
        Windows::UI::Composition::SpotLight *this)
{
  Windows::UI::Composition::CompositionLight::CompositionLight(this);
  *(_QWORD *)this = &Windows::UI::Composition::SpotLight::`vftable'{for `Windows::UI::Composition::ProxyObject'};
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 17) = &Windows::UI::Composition::SpotLight::`vftable'{for `Windows::UI::Composition::VisualUnorderedCollectionImpl::Accessor'};
  *((_QWORD *)this + 33) = &Windows::UI::Composition::SpotLight::Api::`vftable';
  *((_QWORD *)this + 34) = &Windows::UI::Composition::SpotLight::Api::`vftable'{for `Windows::UI::Composition::ISpotLight2'};
  *((_QWORD *)this + 35) = &Windows::UI::Composition::SpotLight::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ISpotLight3>'};
  return this;
}
