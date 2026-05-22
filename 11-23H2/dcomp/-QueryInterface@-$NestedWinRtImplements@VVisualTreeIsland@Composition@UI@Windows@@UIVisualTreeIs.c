/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VVisualTreeIsland@Composition@UI@Windows@@UIVisualTreeIsland@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualTreeIsland,Windows::UI::Composition::IVisualTreeIsland>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 488),
           a2,
           a3);
}
