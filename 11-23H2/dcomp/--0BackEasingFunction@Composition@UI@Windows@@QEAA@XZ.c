/*
 * XREFs of ??0BackEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x1801226B8
 * Callers:
 *     ??$MakeAndInitialize2@VBackEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVBackEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x18011F780 (--$MakeAndInitialize2@VBackEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4Com.c)
 *     ??$MakeAndInitialize2@VBackEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVBackEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x18012DDC8 (--$MakeAndInitialize2@VBackEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4.c)
 * Callees:
 *     ??0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180079A98 (--0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::BackEasingFunction *__fastcall Windows::UI::Composition::BackEasingFunction::BackEasingFunction(
        Windows::UI::Composition::BackEasingFunction *this)
{
  Windows::UI::Composition::CompositionEasingFunction::CompositionEasingFunction(this);
  *(_QWORD *)this = &Windows::UI::Composition::BackEasingFunction::`vftable';
  *((_QWORD *)this + 19) = &Windows::UI::Composition::BackEasingFunction::Api::`vftable';
  return this;
}
