/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VVector2NaturalMotionAnimation@Composition@UI@Windows@@UIVector2NaturalMotionAnimation@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180129110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Vector2NaturalMotionAnimation,Windows::UI::Composition::IVector2NaturalMotionAnimation>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 432),
           a2,
           a3);
}
