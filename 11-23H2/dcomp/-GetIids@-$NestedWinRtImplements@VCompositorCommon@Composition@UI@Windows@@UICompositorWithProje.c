/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositorWithProjectedShadow@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18010FD70
 * Callers:
 *     ?GetIids@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UICompositionAnimationTelemetryInternal@Internal@234@UIKeyFrameAnimationInternal@6234@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AE5B0 (-GetIids@-$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UICompositionAnimati.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositorCommon,Windows::UI::Composition::ICompositorWithProjectedShadow>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 392),
           a2,
           a3);
}
