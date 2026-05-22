/*
 * XREFs of ?QueryInterface@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18013A4B0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerIdleStateEnteredArgs2@6789@UIInspectable@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFC80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800AFC80.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerIdleStateEnteredArgs2@6789@UIInspectable@@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFCA0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800AFCA0.c)
 *     ?QueryInterface@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFCC0 (-QueryInterface@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WDA@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerIdleStateEnteredArgs2@6789@UIInspectable@@@Details@WRL@Microsoft@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFCE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800AFCE0.c)
 *     ?QueryInterface@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFD00 (-QueryInterface@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WEA@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs::QueryInterface(
        __int64 this,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2,IInspectable>>(
           this,
           a2,
           a3);
}
