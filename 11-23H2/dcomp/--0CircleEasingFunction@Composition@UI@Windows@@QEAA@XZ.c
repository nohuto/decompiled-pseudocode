/*
 * XREFs of ??0CircleEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180122780
 * Callers:
 *     ??$MakeAndInitialize2@VCircleEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCircleEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@@Z @ 0x18011FE14 (--$MakeAndInitialize2@VCircleEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4C.c)
 *     ??$MakeAndInitialize2@VCircleEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCircleEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@@Z @ 0x18012DF80 (--$MakeAndInitialize2@VCircleEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA.c)
 * Callees:
 *     ??0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180079A98 (--0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CircleEasingFunction *__fastcall Windows::UI::Composition::CircleEasingFunction::CircleEasingFunction(
        Windows::UI::Composition::CircleEasingFunction *this)
{
  Windows::UI::Composition::CompositionEasingFunction::CompositionEasingFunction(this);
  *(_QWORD *)this = &Windows::UI::Composition::SineEasingFunction::`vftable';
  *((_QWORD *)this + 19) = &Windows::UI::Composition::CircleEasingFunction::Api::`vftable';
  return this;
}
