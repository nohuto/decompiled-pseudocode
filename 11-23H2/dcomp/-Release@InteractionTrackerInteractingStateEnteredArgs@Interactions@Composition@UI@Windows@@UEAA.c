/*
 * XREFs of ?Release@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAKXZ @ 0x18013A770
 * Callers:
 *     ?Release@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@W7EAAKXZ @ 0x1800B01C0 (-Release@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@W7EA.c)
 *     ?Release@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@WCI@EAAKXZ @ 0x1800B01E0 (-Release@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@WCI@.c)
 *     ?Release@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WDA@EAAKXZ @ 0x1800B0200 (-Release@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WDA@EAAKXZ.c)
 *     ?Release@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@WDI@EAAKXZ @ 0x1800B0220 (-Release@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@WDI@.c)
 *     ?Release@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WEA@EAAKXZ @ 0x1800B0240 (-Release@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs::Release(
        __int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2,IInspectable>::Release(this);
}
