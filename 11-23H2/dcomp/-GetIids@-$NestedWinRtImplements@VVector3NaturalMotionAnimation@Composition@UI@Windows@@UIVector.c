/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VVector3NaturalMotionAnimation@Composition@UI@Windows@@UIVector3NaturalMotionAnimation@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180127EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Vector3NaturalMotionAnimation,Windows::UI::Composition::IVector3NaturalMotionAnimation>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 448),
           a2,
           a3);
}
