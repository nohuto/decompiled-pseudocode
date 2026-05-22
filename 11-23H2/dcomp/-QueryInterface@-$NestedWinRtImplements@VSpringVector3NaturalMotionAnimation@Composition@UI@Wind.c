/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VSpringVector3NaturalMotionAnimation@Composition@UI@Windows@@UISpringVector3NaturalMotionAnimation@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801290F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::SpringVector3NaturalMotionAnimation,Windows::UI::Composition::ISpringVector3NaturalMotionAnimation>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 480),
           a2,
           a3);
}
