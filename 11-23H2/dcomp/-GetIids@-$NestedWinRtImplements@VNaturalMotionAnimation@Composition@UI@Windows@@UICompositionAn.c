/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VNaturalMotionAnimation@Composition@UI@Windows@@UICompositionAnimationTelemetryInternal@Internal@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180127FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::NaturalMotionAnimation,Windows::UI::Composition::Internal::ICompositionAnimationTelemetryInternal>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 360),
           a2,
           a3);
}
