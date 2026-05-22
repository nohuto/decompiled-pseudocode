/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UICompositionAnimationTelemetryInternal@Internal@234@UIKeyFrameAnimationInternal@6234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AE410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::KeyFrameAnimation,Windows::UI::Composition::Internal::ICompositionAnimationTelemetryInternal,Windows::UI::Composition::Internal::IKeyFrameAnimationInternal>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositorCommon,Windows::UI::Composition::ICompositorWithProjectedShadow>::AddRef(a1 - 8);
}
