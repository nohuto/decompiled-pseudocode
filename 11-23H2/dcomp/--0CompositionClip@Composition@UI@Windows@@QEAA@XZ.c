/*
 * XREFs of ??0CompositionClip@Composition@UI@Windows@@QEAA@XZ @ 0x18006EC20
 * Callers:
 *     ??0RectangleClip@Composition@UI@Windows@@QEAA@XZ @ 0x18006EBCC (--0RectangleClip@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??$MakeAndInitialize2@VCompositionGeometricClip@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionGeometricClip@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180087AA4 (--$MakeAndInitialize2@VCompositionGeometricClip@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionClip *__fastcall Windows::UI::Composition::CompositionClip::CompositionClip(
        Windows::UI::Composition::CompositionClip *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionClip::`vftable';
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionClip::Api::`vftable'{for `Windows::UI::Composition::ICompositionClip'};
  *((_QWORD *)this + 18) = &Windows::UI::Composition::CompositionClip::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionClip2>'};
  return this;
}
