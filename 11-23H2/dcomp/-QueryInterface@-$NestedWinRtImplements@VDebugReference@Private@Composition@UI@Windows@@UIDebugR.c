/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VDebugReference@Private@Composition@UI@Windows@@UIDebugReference@2345@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074ED0
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VInitialValueExpressionCollectionMapView@Composition@UI@Windows@@U?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@4@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@674@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B1380 (-QueryInterface@-$NestedWinRtImplements@VInitialValueExpressionCollectionMapView@Composition@UI@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Private::DebugReference,Windows::UI::Composition::Private::IDebugReference>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 40),
           a2,
           a3);
}
