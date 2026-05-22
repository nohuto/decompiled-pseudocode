/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VAmbientLight@Composition@UI@Windows@@UIAmbientLight@234@UIAmbientLight2@234@@WRL2@Microsoft@@UEAAKXZ @ 0x18010E660
 * Callers:
 *     ?AddRef@?$NestedWinRtImplements@VDistantLight@Composition@UI@Windows@@UIDistantLight@234@UIDistantLight2@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AE330 (-AddRef@-$NestedWinRtImplements@VDistantLight@Composition@UI@Windows@@UIDistantLight@234@UIDista.c)
 *     ?AddRef@?$NestedWinRtImplements@VSpotLight@Composition@UI@Windows@@UISpotLight@234@UISpotLight2@234@UISpotLight3@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AE490 (-AddRef@-$NestedWinRtImplements@VSpotLight@Composition@UI@Windows@@UISpotLight@234@UISpotLight2@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::AmbientLight,Windows::UI::Composition::IAmbientLight,Windows::UI::Composition::IAmbientLight2>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)(a1 - 264));
}
