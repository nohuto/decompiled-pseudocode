/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VRedirectVisual@Composition@UI@Windows@@UIRedirectVisual@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074F30
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VLayerVisual@Composition@UI@Windows@@UILayerVisual@234@UILayerVisual2@234@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEB70 (-QueryInterface@-$NestedWinRtImplements@VLayerVisual@Composition@UI@Windows@@UILayerVisual@234@U.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::RedirectVisual,Windows::UI::Composition::IRedirectVisual>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 312),
           a2,
           a3);
}
