/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositionIsland@Composition@UI@Windows@@UICompositionIslandPartner@Internal@234@UICompositionDeferralHandlerPrivate@Private@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008F9C0
 * Callers:
 *     ?GetTrustLevel@?$NestedWinRtImplements@VSceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UISceneMeshMaterialAttributeMap@2345@U?$IMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@Collections@Foundation@Windows@@@895@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800AE890 (-GetTrustLevel@-$NestedWinRtImplements@VSceneMeshMaterialAttributeMap@Scenes@Composition@UI@Wind.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VSceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UISceneMeshMaterialAttributeMap@2345@U?$IMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@Collections@Foundation@Windows@@@895@@WRL2@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AE8B0 (-GetTrustLevel@-$NestedWinRtImplements@VSceneMeshMaterialAttributeMap@Scenes@Compos_ea_1800AE8B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionIsland,Windows::UI::Composition::Internal::ICompositionIslandPartner,Windows::UI::Composition::Private::ICompositionDeferralHandlerPrivate>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 136) + 32LL);
  return result;
}
