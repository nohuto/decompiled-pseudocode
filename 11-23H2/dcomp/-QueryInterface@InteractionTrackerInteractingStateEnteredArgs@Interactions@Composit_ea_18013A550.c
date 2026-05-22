/*
 * XREFs of ?QueryInterface@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18013A550
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInteractingStateEnteredArgs2@6789@UIInspectable@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFDE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800AFDE0.c)
 *     ?QueryInterface@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFE00 (-QueryInterface@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Window.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInteractingStateEnteredArgs2@6789@UIInspectable@@@Details@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFE20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800AFE20.c)
 *     ?QueryInterface@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFE40 (-QueryInterface@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composit_ea_1800AFE40.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInteractingStateEnteredArgs2@6789@UIInspectable@@@Details@WRL@Microsoft@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFE60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800AFE60.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs::QueryInterface(
        __int64 this,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2,IInspectable>>(
           this,
           a2,
           a3);
}
