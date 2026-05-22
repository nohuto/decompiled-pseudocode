/*
 * XREFs of ?QueryInterface@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18013A560
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@UIInspectable@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFE80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800AFE80.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@UIInspectable@@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFEA0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800AFEA0.c)
 *     ?QueryInterface@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFEC0 (-QueryInterface@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@WDA@EA.c)
 *     ?QueryInterface@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFEE0 (-QueryInterface@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@WDI@EA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs::QueryInterface(
        __int64 this,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs,IInspectable>>(
           this,
           a2,
           a3);
}
