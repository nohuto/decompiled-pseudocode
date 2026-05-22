/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VCompositionIsland@Composition@UI@Windows@@UICompositionIslandPartner@Internal@234@UICompositionDeferralHandlerPrivate@Private@234@@WRL2@Microsoft@@UEAAKXZ @ 0x1800124D0
 * Callers:
 *     ?AddRef@?$NestedWinRtImplements@VCompositionIsland@Composition@UI@Windows@@UICompositionIslandPartner@Internal@234@UICompositionDeferralHandlerPrivate@Private@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AB9B0 (-AddRef@-$NestedWinRtImplements@VCompositionIsland@Composition@UI@Windows@@UICompos_ea_1800AB9B0.c)
 *     ?AddRef@?$NestedWinRtImplements@VCompositionLight@Composition@UI@Windows@@UICompositionLight@234@UICompositionLight2@234@UICompositionLight3@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AE3D0 (-AddRef@-$NestedWinRtImplements@VCompositionLight@Composition@UI@Windows@@UICompositionLight@234.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionIsland,Windows::UI::Composition::Internal::ICompositionIslandPartner,Windows::UI::Composition::Private::ICompositionDeferralHandlerPrivate>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)(a1 - 144));
}
