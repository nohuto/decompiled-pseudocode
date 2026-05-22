/*
 * XREFs of ??0CompositionVisualSurface@Composition@UI@Windows@@QEAA@XZ @ 0x18007FBA8
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionVisualSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionVisualSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x18007FAFC (--$MakeAndInitialize2@VCompositionVisualSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionVisualSurface *__fastcall Windows::UI::Composition::CompositionVisualSurface::CompositionVisualSurface(
        Windows::UI::Composition::CompositionVisualSurface *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionVisualSurface::`vftable';
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionVisualSurface::Api::`vftable'{for `Windows::UI::Composition::ICompositionVisualSurface'};
  *((_QWORD *)this + 18) = &Windows::UI::Composition::CompositionVisualSurface::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionSurface>'};
  *((_QWORD *)this + 20) = &Windows::UI::Composition::CompositionVisualSurface::Partner::`vftable';
  return this;
}
