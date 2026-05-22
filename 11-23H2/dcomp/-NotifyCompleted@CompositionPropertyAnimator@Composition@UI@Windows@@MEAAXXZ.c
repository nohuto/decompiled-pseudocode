/*
 * XREFs of ?NotifyCompleted@CompositionPropertyAnimator@Composition@UI@Windows@@MEAAXXZ @ 0x18001ABE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyObjectCompleted@BatchController@Composition@UI@Windows@@QEAAXPEAUBatchMember@234@@Z @ 0x18001AC30 (-NotifyObjectCompleted@BatchController@Composition@UI@Windows@@QEAAXPEAUBatchMember@234@@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionPropertyAnimator::NotifyCompleted(
        Windows::UI::Composition::CompositionPropertyAnimator *this)
{
  Windows::UI::Composition::BatchController::NotifyObjectCompleted(
    (Windows::UI::Composition::BatchController *)(*((_QWORD *)this + 3) + 680LL),
    (Windows::UI::Composition::CompositionPropertyAnimator *)((char *)this + 224));
  Windows::UI::Composition::BatchController::NotifyObjectCompleted(
    (Windows::UI::Composition::BatchController *)(*((_QWORD *)this + 3) + 608LL),
    (Windows::UI::Composition::CompositionPropertyAnimator *)((char *)this + 240));
}
