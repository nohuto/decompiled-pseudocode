/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCompositionLight@Composition@UI@Windows@@UICompositionLight@234@UICompositionLight2@234@UICompositionLight3@234@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AE550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionLight,Windows::UI::Composition::ICompositionLight,Windows::UI::Composition::ICompositionLight2,Windows::UI::Composition::ICompositionLight3>::GetIids(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualTarget,Windows::UI::Composition::IVisualTargetPartner,Windows::UI::Composition::Private::ICompositionTargetPartner>::GetIids(a1 - 8);
}
