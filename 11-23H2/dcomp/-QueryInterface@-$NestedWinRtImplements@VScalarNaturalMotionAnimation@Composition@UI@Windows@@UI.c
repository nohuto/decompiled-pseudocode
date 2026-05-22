/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VScalarNaturalMotionAnimation@Composition@UI@Windows@@UIScalarNaturalMotionAnimation@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801290B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::ScalarNaturalMotionAnimation,Windows::UI::Composition::IScalarNaturalMotionAnimation>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 424),
           a2,
           a3);
}
