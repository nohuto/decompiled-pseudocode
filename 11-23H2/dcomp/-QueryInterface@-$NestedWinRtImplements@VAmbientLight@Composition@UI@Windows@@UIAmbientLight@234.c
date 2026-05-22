/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VAmbientLight@Composition@UI@Windows@@UIAmbientLight@234@UIAmbientLight2@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180012300
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VAmbientLight@Composition@UI@Windows@@UIAmbientLight@234@UIAmbientLight2@234@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE990 (-QueryInterface@-$NestedWinRtImplements@VAmbientLight@Composition@UI@Windows@@UIAmb_ea_1800AE990.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VSpotLight@Composition@UI@Windows@@UISpotLight@234@UISpotLight2@234@UISpotLight3@234@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEB90 (-QueryInterface@-$NestedWinRtImplements@VSpotLight@Composition@UI@Windows@@UISpotLight@234@UISpo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::AmbientLight,Windows::UI::Composition::IAmbientLight,Windows::UI::Composition::IAmbientLight2>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 264),
           a2,
           a3);
}
