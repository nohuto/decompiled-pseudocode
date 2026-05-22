/*
 * XREFs of ??0NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x180122AE8
 * Callers:
 *     ??0ScalarNaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x180122BF8 (--0ScalarNaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0Vector2NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x180122CAC (--0Vector2NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0Vector3NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x180122CF0 (--0Vector3NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??0CompositionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x18005EFE4 (--0CompositionAnimation@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::NaturalMotionAnimation *__fastcall Windows::UI::Composition::NaturalMotionAnimation::NaturalMotionAnimation(
        Windows::UI::Composition::NaturalMotionAnimation *this)
{
  Windows::UI::Composition::CompositionAnimation::CompositionAnimation(this);
  *(_QWORD *)this = &Windows::UI::Composition::NaturalMotionAnimation::`vftable';
  *((_QWORD *)this + 43) = &Windows::UI::Composition::NaturalMotionAnimation::Api::`vftable';
  *((_QWORD *)this + 45) = &Windows::UI::Composition::NaturalMotionAnimation::Internal::`vftable';
  return this;
}
