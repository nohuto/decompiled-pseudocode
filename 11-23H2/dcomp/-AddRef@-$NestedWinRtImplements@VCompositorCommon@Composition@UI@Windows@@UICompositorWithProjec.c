/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositorWithProjectedShadow@234@@WRL2@Microsoft@@UEAAKXZ @ 0x18010E620
 * Callers:
 *     ?AddRef@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UICompositionAnimationTelemetryInternal@Internal@234@UIKeyFrameAnimationInternal@6234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AE410 (-AddRef@-$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UICompositionAnimatio.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositorCommon,Windows::UI::Composition::ICompositorWithProjectedShadow>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)(a1 - 392));
}
