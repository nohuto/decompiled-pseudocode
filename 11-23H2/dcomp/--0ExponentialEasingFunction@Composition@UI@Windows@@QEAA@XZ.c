/*
 * XREFs of ??0ExponentialEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x18000C4B0
 * Callers:
 *     ??$MakeAndInitialize2@VExponentialEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVExponentialEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x18000C3F0 (--$MakeAndInitialize2@VExponentialEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@23.c)
 *     ??$MakeAndInitialize2@VExponentialEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVExponentialEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x18012E124 (--$MakeAndInitialize2@VExponentialEasingFunction@Composition@UI@Windows@@V1234@PEAV_ea_18012E124.c)
 * Callees:
 *     ??0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180079A98 (--0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::ExponentialEasingFunction *__fastcall Windows::UI::Composition::ExponentialEasingFunction::ExponentialEasingFunction(
        Windows::UI::Composition::ExponentialEasingFunction *this)
{
  Windows::UI::Composition::CompositionEasingFunction::CompositionEasingFunction(this);
  *(_QWORD *)this = &Windows::UI::Composition::PowerEasingFunction::`vftable';
  *((_QWORD *)this + 19) = &Windows::UI::Composition::ExponentialEasingFunction::Api::`vftable';
  return this;
}
