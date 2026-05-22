/*
 * XREFs of ??0CompositionSurfaceBrush@Composition@UI@Windows@@QEAA@XZ @ 0x180045700
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionSurfaceBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSurfaceBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180045644 (--$MakeAndInitialize2@VCompositionSurfaceBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionSurfaceBrush *__fastcall Windows::UI::Composition::CompositionSurfaceBrush::CompositionSurfaceBrush(
        Windows::UI::Composition::CompositionSurfaceBrush *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionBrushT<Windows::UI::Composition::CompositionBrush,Windows::UI::Composition::ProxyObject>::Api::`vftable';
  *((_QWORD *)this + 19) = &Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Api::`vftable';
  *((_QWORD *)this + 20) = &Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Api::`vftable'{for `Windows::UI::Composition::ICompositionSurfaceBrush2'};
  *((_QWORD *)this + 21) = &Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionSurfaceBrush3>'};
  *((_QWORD *)this + 23) = &Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Internal::`vftable';
  *(_QWORD *)this = &Windows::UI::Composition::CompositionSurfaceBrush::`vftable'{for `Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>'};
  *((_QWORD *)this + 25) = &Windows::UI::Composition::CompositionSurfaceBrush::`vftable'{for `Windows::UI::Composition::SurfaceBindPoint::IOwner'};
  *((_QWORD *)this + 26) = &Windows::UI::Composition::SurfaceBindPoint::`vftable';
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  return this;
}
