/*
 * XREFs of ?Destroy@ConditionalExpressionAnimator@Composition@UI@Windows@@MEAAXXZ @ 0x18019ADF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResources@ConditionalExpressionAnimator@Composition@UI@Windows@@AEAAXXZ @ 0x18019AE14 (-ReleaseResources@ConditionalExpressionAnimator@Composition@UI@Windows@@AEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::ConditionalExpressionAnimator::Destroy(
        Windows::UI::Composition::ConditionalExpressionAnimator *this)
{
  Windows::UI::Composition::ConditionalExpressionAnimator::ReleaseResources(this);
  Windows::UI::Composition::CompositionPropertyAnimator::Destroy(this);
}
