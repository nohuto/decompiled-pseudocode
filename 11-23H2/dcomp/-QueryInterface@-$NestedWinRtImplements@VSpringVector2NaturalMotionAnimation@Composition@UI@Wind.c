/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VSpringVector2NaturalMotionAnimation@Composition@UI@Windows@@UISpringVector2NaturalMotionAnimation@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801290D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::SpringVector2NaturalMotionAnimation,Windows::UI::Composition::ISpringVector2NaturalMotionAnimation>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 464),
           a2,
           a3);
}
