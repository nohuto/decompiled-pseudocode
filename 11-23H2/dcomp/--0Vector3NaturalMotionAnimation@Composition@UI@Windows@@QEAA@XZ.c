/*
 * XREFs of ??0Vector3NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x180122CF0
 * Callers:
 *     ??$MakeAndInitialize2@VBounceVector3NaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVBounceVector3NaturalMotionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18011FB18 (--$MakeAndInitialize2@VBounceVector3NaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCom.c)
 *     ??$MakeAndInitialize2@VSpringVector3NaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSpringVector3NaturalMotionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180121B34 (--$MakeAndInitialize2@VSpringVector3NaturalMotionAnimation@Composition@UI@Windows@@V1234@PEAVCom.c)
 * Callees:
 *     ??0NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x180122AE8 (--0NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Vector3NaturalMotionAnimation *__fastcall Windows::UI::Composition::Vector3NaturalMotionAnimation::Vector3NaturalMotionAnimation(
        Windows::UI::Composition::Vector3NaturalMotionAnimation *this)
{
  Windows::UI::Composition::Vector3NaturalMotionAnimation *result; // rax

  Windows::UI::Composition::NaturalMotionAnimation::NaturalMotionAnimation(this);
  *(_QWORD *)this = &Windows::UI::Composition::Vector3NaturalMotionAnimation::`vftable';
  *((_QWORD *)this + 56) = &Windows::UI::Composition::Vector3NaturalMotionAnimation::Api::`vftable';
  result = this;
  *((_BYTE *)this + 412) = 0;
  *((_BYTE *)this + 428) = 0;
  return result;
}
