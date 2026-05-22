/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VBounceVector3NaturalMotionAnimation@Composition@UI@Windows@@UIBounceVector3NaturalMotionAnimation@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180129070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::BounceVector3NaturalMotionAnimation,Windows::UI::Composition::IBounceVector3NaturalMotionAnimation>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 472),
           a2,
           a3);
}
