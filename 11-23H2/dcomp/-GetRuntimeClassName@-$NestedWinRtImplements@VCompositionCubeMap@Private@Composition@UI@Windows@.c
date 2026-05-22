/*
 * XREFs of ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositionCubeMap@Private@Composition@UI@Windows@@UICompositionCubeMap@2345@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18010FE70
 * Callers:
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositionLight@Composition@UI@Windows@@UICompositionLight@234@UICompositionLight2@234@UICompositionLight3@234@@WRL2@Microsoft@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AE6F0 (-GetRuntimeClassName@-$NestedWinRtImplements@VCompositionLight@Composition@UI@Windows@@UIComposi.c)
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositionLight@Composition@UI@Windows@@UICompositionLight@234@UICompositionLight2@234@UICompositionLight3@234@@WRL2@Microsoft@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AE710 (-GetRuntimeClassName@-$NestedWinRtImplements@VCompositionLight@Composition@UI@Windo_ea_1800AE710.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Private::CompositionCubeMap,Windows::UI::Composition::Private::ICompositionCubeMap>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetRuntimeClassName(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 144),
           a2);
}
