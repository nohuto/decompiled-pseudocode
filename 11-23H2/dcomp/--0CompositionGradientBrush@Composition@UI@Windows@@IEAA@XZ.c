/*
 * XREFs of ??0CompositionGradientBrush@Composition@UI@Windows@@IEAA@XZ @ 0x18005DDC4
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionLinearGradientBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionLinearGradientBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005DE5C (--$MakeAndInitialize2@VCompositionLinearGradientBrush@Composition@UI@Windows@@V1234@PEAVComposit.c)
 *     ??$MakeAndInitialize2@VCompositionRadialGradientBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionRadialGradientBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1801205A4 (--$MakeAndInitialize2@VCompositionRadialGradientBrush@Composition@UI@Windows@@V1234@PEAVComposit.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionGradientBrush *__fastcall Windows::UI::Composition::CompositionGradientBrush::CompositionGradientBrush(
        Windows::UI::Composition::CompositionGradientBrush *this)
{
  Windows::UI::Composition::CompositionGradientBrush *result; // rax

  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionBrushT<Windows::UI::Composition::CompositionBrush,Windows::UI::Composition::ProxyObject>::Api::`vftable';
  *(_QWORD *)this = &Windows::UI::Composition::CompositionGradientBrushT<Windows::UI::Composition::CompositionGradientBrush,Windows::UI::Composition::CompositionBrush>::`vftable';
  *((_QWORD *)this + 19) = &Windows::UI::Composition::CompositionGradientBrushT<Windows::UI::Composition::CompositionGradientBrush,Windows::UI::Composition::CompositionBrush>::Api::`vftable'{for `Windows::UI::Composition::ICompositionGradientBrush'};
  *((_QWORD *)this + 20) = &Windows::UI::Composition::CompositionGradientBrushT<Windows::UI::Composition::CompositionGradientBrush,Windows::UI::Composition::CompositionBrush>::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionGradientBrush2>'};
  *((_QWORD *)this + 22) = &DirectComposition::CRebuildableObject::`vftable';
  *((_BYTE *)this + 192) &= 0xFCu;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  result = this;
  *((_DWORD *)this + 53) = 2;
  return result;
}
