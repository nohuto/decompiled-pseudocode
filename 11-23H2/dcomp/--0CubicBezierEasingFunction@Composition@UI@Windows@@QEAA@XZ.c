/*
 * XREFs of ??0CubicBezierEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180079408
 * Callers:
 *     ??$MakeAndInitialize2@VCubicBezierEasingFunction@Composition@UI@Windows@@VCompositionEasingFunction@234@PEAVCompositor@234@MMMM@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAM222@Z @ 0x180079440 (--$MakeAndInitialize2@VCubicBezierEasingFunction@Composition@UI@Windows@@VCompositionEasingFunct.c)
 * Callees:
 *     ??0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180079A98 (--0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CubicBezierEasingFunction *__fastcall Windows::UI::Composition::CubicBezierEasingFunction::CubicBezierEasingFunction(
        Windows::UI::Composition::CubicBezierEasingFunction *this)
{
  Windows::UI::Composition::CompositionEasingFunction::CompositionEasingFunction(this);
  *(_QWORD *)this = &Windows::UI::Composition::CubicBezierEasingFunction::`vftable';
  *((_QWORD *)this + 19) = &Windows::UI::Composition::CubicBezierEasingFunction::Api::`vftable';
  return this;
}
