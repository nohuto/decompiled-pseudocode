/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositorWithProjectedShadow@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180110B10
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UICompositionAnimationTelemetryInternal@Internal@234@UIKeyFrameAnimationInternal@6234@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEB10 (-QueryInterface@-$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIComposition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositorCommon,Windows::UI::Composition::ICompositorWithProjectedShadow>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 392),
           a2,
           a3);
}
