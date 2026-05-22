/*
 * XREFs of ??0PointLight@Composition@UI@Windows@@QEAA@XZ @ 0x180122B90
 * Callers:
 *     ??$MakeAndInitialize2@VPointLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVPointLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180121190 (--$MakeAndInitialize2@VPointLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2.c)
 *     ??$MakeAndInitialize2@VPointLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVPointLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x180121254 (--$MakeAndInitialize2@VPointLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WR.c)
 * Callees:
 *     ??0CompositionLight@Composition@UI@Windows@@QEAA@XZ @ 0x1800856B8 (--0CompositionLight@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::PointLight *__fastcall Windows::UI::Composition::PointLight::PointLight(
        Windows::UI::Composition::PointLight *this)
{
  Windows::UI::Composition::CompositionLight::CompositionLight(this);
  *(_QWORD *)this = &Windows::UI::Composition::PointLight::`vftable'{for `Windows::UI::Composition::ProxyObject'};
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 17) = &Windows::UI::Composition::PointLight::`vftable'{for `Windows::UI::Composition::VisualUnorderedCollectionImpl::Accessor'};
  *((_QWORD *)this + 33) = &Windows::UI::Composition::PointLight::Api::`vftable';
  *((_QWORD *)this + 34) = &Windows::UI::Composition::PointLight::Api::`vftable'{for `Windows::UI::Composition::IPointLight2'};
  *((_QWORD *)this + 35) = &Windows::UI::Composition::PointLight::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IPointLight3>'};
  return this;
}
