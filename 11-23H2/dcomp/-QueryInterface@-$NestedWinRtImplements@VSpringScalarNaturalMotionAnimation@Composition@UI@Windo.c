/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VSpringScalarNaturalMotionAnimation@Composition@UI@Windows@@UISpringScalarNaturalMotionAnimation@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180129050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::SpringScalarNaturalMotionAnimation,Windows::UI::Composition::ISpringScalarNaturalMotionAnimation>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 456),
           a2,
           a3);
}
