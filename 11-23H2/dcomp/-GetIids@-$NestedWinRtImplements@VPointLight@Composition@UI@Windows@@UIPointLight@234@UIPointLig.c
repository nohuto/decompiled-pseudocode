/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VPointLight@Composition@UI@Windows@@UIPointLight@234@UIPointLight2@234@UIPointLight3@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18010FDB0
 * Callers:
 *     ?GetIids@?$NestedWinRtImplements@VSpotLight@Composition@UI@Windows@@UISpotLight@234@UISpotLight2@234@UISpotLight3@234@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AE4B0 (-GetIids@-$NestedWinRtImplements@VSpotLight@Composition@UI@Windows@@UISpotLight@234@UISpotLight2.c)
 *     ?GetIids@?$NestedWinRtImplements@VSpotLight@Composition@UI@Windows@@UISpotLight@234@UISpotLight2@234@UISpotLight3@234@@WRL2@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AE630 (-GetIids@-$NestedWinRtImplements@VSpotLight@Composition@UI@Windows@@UISpotLight@234_ea_1800AE630.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::PointLight,Windows::UI::Composition::IPointLight,Windows::UI::Composition::IPointLight2,Windows::UI::Composition::IPointLight3>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 264),
           a2,
           a3);
}
