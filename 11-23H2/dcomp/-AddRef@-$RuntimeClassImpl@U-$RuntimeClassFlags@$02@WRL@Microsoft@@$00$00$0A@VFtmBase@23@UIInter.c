/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@UIInspectable@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800AA0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs,IInspectable>::AddRef(
        __int64 a1)
{
  return Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs::AddRef((Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs *)(a1 - 40));
}
