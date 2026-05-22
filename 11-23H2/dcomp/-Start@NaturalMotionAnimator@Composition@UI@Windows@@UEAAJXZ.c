/*
 * XREFs of ?Start@NaturalMotionAnimator@Composition@UI@Windows@@UEAAJXZ @ 0x1801A1B80
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureRegisteredInBatch@CompositionPropertyAnimator@Composition@UI@Windows@@MEAAXXZ @ 0x180190720 (-EnsureRegisteredInBatch@CompositionPropertyAnimator@Composition@UI@Windows@@MEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::NaturalMotionAnimator::Start(
        Windows::UI::Composition::NaturalMotionAnimator *this)
{
  Windows::UI::Composition::CompositionPropertyAnimator::EnsureRegisteredInBatch(this);
  return 0LL;
}
