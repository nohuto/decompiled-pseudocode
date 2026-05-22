/*
 * XREFs of ?Release@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WDA@EAAKXZ @ 0x1800B0200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs::Release(
        __int64 a1)
{
  return Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs::Release((Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs *)(a1 - 48));
}
