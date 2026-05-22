/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VVisualTarget@Composition@UI@Windows@@UIVisualTargetPartner@234@UICompositionTargetPartner@Private@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800ACC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualTarget,Windows::UI::Composition::IVisualTargetPartner,Windows::UI::Composition::Private::ICompositionTargetPartner>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionShape,Windows::UI::Composition::ICompositionShape>::AddRef(a1 - 8);
}
