/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VCompositionLight@Composition@UI@Windows@@UICompositionLight@234@UICompositionLight2@234@UICompositionLight3@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AE3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionLight,Windows::UI::Composition::ICompositionLight,Windows::UI::Composition::ICompositionLight2,Windows::UI::Composition::ICompositionLight3>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionIsland,Windows::UI::Composition::Internal::ICompositionIslandPartner,Windows::UI::Composition::Private::ICompositionDeferralHandlerPrivate>::AddRef(a1 - 16);
}
