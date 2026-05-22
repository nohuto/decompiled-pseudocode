/*
 * XREFs of ??0ScalarNaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x180122BF8
 * Callers:
 *     ??$MakeAndInitialize2@VBounceScalarNaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVBounceScalarNaturalMotionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18011F938 (--$MakeAndInitialize2@VBounceScalarNaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVComp.c)
 *     ??$MakeAndInitialize2@VSpringScalarNaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSpringScalarNaturalMotionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180121954 (--$MakeAndInitialize2@VSpringScalarNaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVComp.c)
 * Callees:
 *     ??0NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x180122AE8 (--0NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::ScalarNaturalMotionAnimation *__fastcall Windows::UI::Composition::ScalarNaturalMotionAnimation::ScalarNaturalMotionAnimation(
        Windows::UI::Composition::ScalarNaturalMotionAnimation *this)
{
  Windows::UI::Composition::ScalarNaturalMotionAnimation *result; // rax

  Windows::UI::Composition::NaturalMotionAnimation::NaturalMotionAnimation(this);
  *(_QWORD *)this = &Windows::UI::Composition::ScalarNaturalMotionAnimation::`vftable';
  *((_QWORD *)this + 53) = &Windows::UI::Composition::ScalarNaturalMotionAnimation::Api::`vftable';
  result = this;
  *((_BYTE *)this + 404) = 0;
  *((_BYTE *)this + 412) = 0;
  return result;
}
