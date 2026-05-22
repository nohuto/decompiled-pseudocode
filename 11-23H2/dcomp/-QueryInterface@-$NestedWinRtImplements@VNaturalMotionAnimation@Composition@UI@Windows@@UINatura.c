/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VNaturalMotionAnimation@Composition@UI@Windows@@UINaturalMotionAnimation@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B5FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::NaturalMotionAnimation,Windows::UI::Composition::INaturalMotionAnimation>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 344),
           a2,
           a3);
}
