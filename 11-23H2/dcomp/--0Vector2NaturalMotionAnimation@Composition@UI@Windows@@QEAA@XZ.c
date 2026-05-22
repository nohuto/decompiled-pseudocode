/*
 * XREFs of ??0Vector2NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x180122CAC
 * Callers:
 *     ??$MakeAndInitialize2@VBounceVector2NaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVBounceVector2NaturalMotionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18011FA28 (--$MakeAndInitialize2@VBounceVector2NaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCom.c)
 *     ??$MakeAndInitialize2@VSpringVector2NaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSpringVector2NaturalMotionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180121A44 (--$MakeAndInitialize2@VSpringVector2NaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCom.c)
 * Callees:
 *     ??0NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x180122AE8 (--0NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Vector2NaturalMotionAnimation *__fastcall Windows::UI::Composition::Vector2NaturalMotionAnimation::Vector2NaturalMotionAnimation(
        Windows::UI::Composition::Vector2NaturalMotionAnimation *this)
{
  Windows::UI::Composition::Vector2NaturalMotionAnimation *result; // rax

  Windows::UI::Composition::NaturalMotionAnimation::NaturalMotionAnimation(this);
  *(_QWORD *)this = &Windows::UI::Composition::Vector2NaturalMotionAnimation::`vftable';
  *((_QWORD *)this + 54) = &Windows::UI::Composition::Vector2NaturalMotionAnimation::Api::`vftable';
  result = this;
  *((_BYTE *)this + 408) = 0;
  *((_BYTE *)this + 420) = 0;
  return result;
}
