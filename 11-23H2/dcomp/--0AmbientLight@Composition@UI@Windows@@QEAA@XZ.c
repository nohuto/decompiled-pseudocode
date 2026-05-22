/*
 * XREFs of ??0AmbientLight@Composition@UI@Windows@@QEAA@XZ @ 0x1800855FC
 * Callers:
 *     ??$MakeAndInitialize2@VAmbientLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVAmbientLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800163C0 (--$MakeAndInitialize2@VAmbientLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WR.c)
 *     ??$MakeAndInitialize2@VAmbientLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVAmbientLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x180092A7C (--$MakeAndInitialize2@VAmbientLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@.c)
 * Callees:
 *     ??0CompositionLight@Composition@UI@Windows@@QEAA@XZ @ 0x1800856B8 (--0CompositionLight@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::AmbientLight *__fastcall Windows::UI::Composition::AmbientLight::AmbientLight(
        Windows::UI::Composition::AmbientLight *this)
{
  Windows::UI::Composition::CompositionLight::CompositionLight(this);
  *(_QWORD *)this = &Windows::UI::Composition::AmbientLight::`vftable'{for `Windows::UI::Composition::ProxyObject'};
  *((_QWORD *)this + 17) = &Windows::UI::Composition::SpotLight::`vftable'{for `Windows::UI::Composition::VisualUnorderedCollectionImpl::Accessor'};
  *((_QWORD *)this + 33) = &Windows::UI::Composition::AmbientLight::Api::`vftable'{for `Windows::UI::Composition::IAmbientLight'};
  *((_QWORD *)this + 34) = &Windows::UI::Composition::AmbientLight::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IAmbientLight2>'};
  return this;
}
