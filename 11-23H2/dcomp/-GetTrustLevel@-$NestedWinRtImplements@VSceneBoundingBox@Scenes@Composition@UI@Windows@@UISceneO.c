/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VSceneBoundingBox@Scenes@Composition@UI@Windows@@UISceneObject@2345@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008F7F0
 * Callers:
 *     ?GetTrustLevel@?$NestedWinRtImplements@VInitialValueExpressionCollection@Composition@UI@Windows@@U?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@4@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@674@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800AC4F0 (-GetTrustLevel@-$NestedWinRtImplements@VInitialValueExpressionCollection@Composition@UI@Windows@.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VImplicitAnimationCollection@Composition@UI@Windows@@UIImplicitAnimationCollection@234@U?$IMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@Windows@@@784@@WRL2@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AE050 (-GetTrustLevel@-$NestedWinRtImplements@VImplicitAnimationCollection@Composition@UI@Windows@@UIIm.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800AE070 (-GetTrustLevel@-$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositi.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AE090 (-GetTrustLevel@-$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows_ea_1800AE090.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneBoundingBox,Windows::UI::Composition::Scenes::ISceneObject>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 120) + 32LL);
  return result;
}
