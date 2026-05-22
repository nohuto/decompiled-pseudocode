/*
 * XREFs of ??0SineEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180122C74
 * Callers:
 *     ??$MakeAndInitialize2@VSineEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSineEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@@Z @ 0x180121894 (--$MakeAndInitialize2@VSineEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4Com.c)
 *     ??$MakeAndInitialize2@VSineEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSineEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@@Z @ 0x18012E2CC (--$MakeAndInitialize2@VSineEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4.c)
 * Callees:
 *     ??0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180079A98 (--0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::SineEasingFunction *__fastcall Windows::UI::Composition::SineEasingFunction::SineEasingFunction(
        Windows::UI::Composition::SineEasingFunction *this)
{
  Windows::UI::Composition::CompositionEasingFunction::CompositionEasingFunction(this);
  *(_QWORD *)this = &Windows::UI::Composition::SineEasingFunction::`vftable';
  *((_QWORD *)this + 19) = &Windows::UI::Composition::SineEasingFunction::Api::`vftable';
  return this;
}
