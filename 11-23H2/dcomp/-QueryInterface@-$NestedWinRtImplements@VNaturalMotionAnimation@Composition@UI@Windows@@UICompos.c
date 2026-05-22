/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VNaturalMotionAnimation@Composition@UI@Windows@@UICompositionAnimationTelemetryInternal@Internal@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180110A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::NaturalMotionAnimation,Windows::UI::Composition::Internal::ICompositionAnimationTelemetryInternal>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 360),
           a2,
           a3);
}
