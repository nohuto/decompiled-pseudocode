/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCursorVisual@Composition@UI@Windows@@UICursorVisualPartner@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180127F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CursorVisual,Windows::UI::Composition::ICursorVisualPartner>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 312),
           a2,
           a3);
}
