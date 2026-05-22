/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VLayerVisual@Composition@UI@Windows@@UILayerVisual@234@UILayerVisual2@234@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::LayerVisual,Windows::UI::Composition::ILayerVisual,Windows::UI::Composition::ILayerVisual2>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::RedirectVisual,Windows::UI::Composition::IRedirectVisual>::QueryInterface(
           a1 - 8,
           a2,
           a3);
}
