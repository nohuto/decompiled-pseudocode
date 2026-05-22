/*
 * XREFs of ??0BounceEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x1801226F0
 * Callers:
 *     ??$MakeAndInitialize2@VBounceEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@AEAHAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVBounceEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@AEAHAEAM@Z @ 0x18011F854 (--$MakeAndInitialize2@VBounceEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4C.c)
 *     ??$MakeAndInitialize2@VBounceEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@AEAHAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVBounceEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@AEAHAEAM@Z @ 0x18012DE9C (--$MakeAndInitialize2@VBounceEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA.c)
 * Callees:
 *     ??0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180079A98 (--0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::BounceEasingFunction *__fastcall Windows::UI::Composition::BounceEasingFunction::BounceEasingFunction(
        Windows::UI::Composition::BounceEasingFunction *this)
{
  Windows::UI::Composition::CompositionEasingFunction::CompositionEasingFunction(this);
  *(_QWORD *)this = &Windows::UI::Composition::ElasticEasingFunction::`vftable';
  *((_QWORD *)this + 19) = &Windows::UI::Composition::BounceEasingFunction::Api::`vftable';
  return this;
}
