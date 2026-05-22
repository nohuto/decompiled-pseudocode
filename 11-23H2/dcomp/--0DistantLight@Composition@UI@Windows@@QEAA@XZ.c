/*
 * XREFs of ??0DistantLight@Composition@UI@Windows@@QEAA@XZ @ 0x180091BD8
 * Callers:
 *     ??$MakeAndInitialize2@VDistantLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVDistantLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x180091B2C (--$MakeAndInitialize2@VDistantLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@.c)
 *     ??$MakeAndInitialize2@VDistantLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVDistantLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180120D34 (--$MakeAndInitialize2@VDistantLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WR.c)
 * Callees:
 *     ??0CompositionLight@Composition@UI@Windows@@QEAA@XZ @ 0x1800856B8 (--0CompositionLight@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::DistantLight *__fastcall Windows::UI::Composition::DistantLight::DistantLight(
        Windows::UI::Composition::DistantLight *this)
{
  Windows::UI::Composition::CompositionLight::CompositionLight(this);
  *(_QWORD *)this = &Windows::UI::Composition::DistantLight::`vftable'{for `Windows::UI::Composition::ProxyObject'};
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 17) = &Windows::UI::Composition::SpotLight::`vftable'{for `Windows::UI::Composition::VisualUnorderedCollectionImpl::Accessor'};
  *((_QWORD *)this + 33) = &Windows::UI::Composition::DistantLight::Api::`vftable'{for `Windows::UI::Composition::IDistantLight'};
  *((_QWORD *)this + 34) = &Windows::UI::Composition::DistantLight::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IDistantLight2>'};
  return this;
}
