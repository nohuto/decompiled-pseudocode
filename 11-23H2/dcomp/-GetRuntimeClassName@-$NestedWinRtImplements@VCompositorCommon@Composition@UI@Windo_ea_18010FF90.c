/*
 * XREFs of ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositorWithProjectedShadow@234@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18010FF90
 * Callers:
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UICompositionAnimationTelemetryInternal@Internal@234@UIKeyFrameAnimationInternal@6234@@WRL2@Microsoft@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AE750 (-GetRuntimeClassName@-$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UICompos.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositorCommon,Windows::UI::Composition::ICompositorWithProjectedShadow>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetRuntimeClassName(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 392),
           a2);
}
