/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VCompositorController@Core@Composition@UI@Windows@@UICompositorController@2345@@WRL2@Microsoft@@UEAAKXZ @ 0x18008E600
 * Callers:
 *     ?AddRef@?$NestedWinRtImplements@VInitialValueExpressionCollectionMapView@Composition@UI@Windows@@U?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@4@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@674@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800B1360 (-AddRef@-$NestedWinRtImplements@VInitialValueExpressionCollectionMapView@Composition@UI@Windows@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Core::CompositorController,Windows::UI::Composition::Core::ICompositorController>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)(a1 - 40));
}
