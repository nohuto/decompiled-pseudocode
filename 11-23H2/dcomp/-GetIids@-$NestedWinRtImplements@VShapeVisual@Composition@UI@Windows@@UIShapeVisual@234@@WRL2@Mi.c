/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VShapeVisual@Composition@UI@Windows@@UIShapeVisual@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180128000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::ShapeVisual,Windows::UI::Composition::IShapeVisual>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 352),
           a2,
           a3);
}
