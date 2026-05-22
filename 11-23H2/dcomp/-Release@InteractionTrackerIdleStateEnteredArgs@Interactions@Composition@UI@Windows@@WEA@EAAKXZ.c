/*
 * XREFs of ?Release@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WEA@EAAKXZ @ 0x1800B0240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs::Release(
        __int64 a1)
{
  return Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs::Release((Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs *)(a1 - 64));
}
