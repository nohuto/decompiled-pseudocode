/*
 * XREFs of ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositionEffectBrush@Composition@UI@Windows@@UICompositionEffectBrush@234@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18010FE30
 * Callers:
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositionTarget@Composition@UI@Windows@@UICompositionTarget@234@UICompositionSupportsSystemBackdrop@234@@WRL2@Microsoft@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AE690 (-GetRuntimeClassName@-$NestedWinRtImplements@VCompositionTarget@Composition@UI@Windows@@UICompos.c)
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositionSurfaceBrush@Composition@UI@Windows@@UICompositionSurfaceBrush@234@UICompositionSurfaceBrush2@234@UICompositionSurfaceBrush3@234@@WRL2@Microsoft@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AE730 (-GetRuntimeClassName@-$NestedWinRtImplements@VCompositionSurfaceBrush@Composition@UI@Windows@@UI.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionEffectBrush,Windows::UI::Composition::ICompositionEffectBrush>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetRuntimeClassName(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 152),
           a2);
}
