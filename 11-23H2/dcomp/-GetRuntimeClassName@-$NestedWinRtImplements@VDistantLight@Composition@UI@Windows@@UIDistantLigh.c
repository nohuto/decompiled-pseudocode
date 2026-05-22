/*
 * XREFs of ?GetRuntimeClassName@?$NestedWinRtImplements@VDistantLight@Composition@UI@Windows@@UIDistantLight@234@UIDistantLight2@234@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18010FFD0
 * Callers:
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VSpotLight@Composition@UI@Windows@@UISpotLight@234@UISpotLight2@234@UISpotLight3@234@@WRL2@Microsoft@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AE650 (-GetRuntimeClassName@-$NestedWinRtImplements@VSpotLight@Composition@UI@Windows@@UISpotLight@234@.c)
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VSpotLight@Composition@UI@Windows@@UISpotLight@234@UISpotLight2@234@UISpotLight3@234@@WRL2@Microsoft@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AE7D0 (-GetRuntimeClassName@-$NestedWinRtImplements@VSpotLight@Composition@UI@Windows@@UIS_ea_1800AE7D0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::DistantLight,Windows::UI::Composition::IDistantLight,Windows::UI::Composition::IDistantLight2>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetRuntimeClassName(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 264),
           a2);
}
