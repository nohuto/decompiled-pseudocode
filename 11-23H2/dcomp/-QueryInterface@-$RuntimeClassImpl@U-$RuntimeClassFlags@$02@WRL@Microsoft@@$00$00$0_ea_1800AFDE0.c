/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInteractingStateEnteredArgs2@6789@UIInspectable@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2,IInspectable>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs::QueryInterface(
           (Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs *)(a1 - 8),
           a2,
           a3);
}
