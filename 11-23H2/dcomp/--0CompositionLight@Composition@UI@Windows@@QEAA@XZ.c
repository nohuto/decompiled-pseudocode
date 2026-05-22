/*
 * XREFs of ??0CompositionLight@Composition@UI@Windows@@QEAA@XZ @ 0x1800856B8
 * Callers:
 *     ??$MakeAndInitialize2@VSharedLight@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVSharedLight@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAX@Z @ 0x180007888 (--$MakeAndInitialize2@VSharedLight@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEA.c)
 *     ??0AmbientLight@Composition@UI@Windows@@QEAA@XZ @ 0x1800855FC (--0AmbientLight@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0SpotLight@Composition@UI@Windows@@QEAA@XZ @ 0x180085650 (--0SpotLight@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0DistantLight@Composition@UI@Windows@@QEAA@XZ @ 0x180091BD8 (--0DistantLight@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0PointLight@Composition@UI@Windows@@QEAA@XZ @ 0x180122B90 (--0PointLight@Composition@UI@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionLight *__fastcall Windows::UI::Composition::CompositionLight::CompositionLight(
        Windows::UI::Composition::CompositionLight *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionLight::`vftable'{for `Windows::UI::Composition::ProxyObject'};
  *((_QWORD *)this + 17) = &Windows::UI::Composition::SpotLight::`vftable'{for `Windows::UI::Composition::VisualUnorderedCollectionImpl::Accessor'};
  *((_QWORD *)this + 18) = &Windows::UI::Composition::CompositionLight::Api::`vftable';
  *((_QWORD *)this + 19) = &Windows::UI::Composition::CompositionLight::Api::`vftable'{for `Windows::UI::Composition::ICompositionLight2'};
  *((_QWORD *)this + 20) = &Windows::UI::Composition::CompositionLight::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionLight3>'};
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 62) = 0;
  return this;
}
