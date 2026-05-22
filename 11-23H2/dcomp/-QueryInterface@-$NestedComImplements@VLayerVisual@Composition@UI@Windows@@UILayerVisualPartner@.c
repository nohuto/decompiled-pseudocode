/*
 * XREFs of ?QueryInterface@?$NestedComImplements@VLayerVisual@Composition@UI@Windows@@UILayerVisualPartner@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180129010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedComImplements<Windows::UI::Composition::LayerVisual,Windows::UI::Composition::ILayerVisualPartner>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 336),
           a2,
           a3);
}
