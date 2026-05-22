/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositionEffectSourceParameter@Composition@UI@Windows@@UICompositionEffectSourceParameter@234@UIGraphicsEffectSource@Effects@Graphics@4@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FBA0
 * Callers:
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositionIslandEnvironment@Composition@UI@Windows@@UICompositionIslandEnvironment@234@UICompositionIslandEnvironmentPartner@234@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800AD1F0 (-GetTrustLevel@-$NestedWinRtImplements@VCompositionIslandEnvironment@Composition@UI@Windows@@UIC.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VSceneLightingEffect@Effects@Composition@UI@Windows@@UISceneLightingEffect@2345@UIGraphicsEffect@2Graphics@5@UIGraphicsEffectSource@285@UIGraphicsEffectD2D1Interop@285@UISceneLightingEffect2@2345@@WRL2@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AF220 (-GetTrustLevel@-$NestedWinRtImplements@VSceneLightingEffect@Effects@Composition@UI@Windows@@UISc.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VSceneLightingEffect@Effects@Composition@UI@Windows@@UISceneLightingEffect@2345@UIGraphicsEffect@2Graphics@5@UIGraphicsEffectSource@285@UIGraphicsEffectD2D1Interop@285@UISceneLightingEffect2@2345@@WRL2@Microsoft@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AF240 (-GetTrustLevel@-$NestedWinRtImplements@VSceneLightingEffect@Effects@Composition@UI@_ea_1800AF240.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionEffectSourceParameter,Windows::UI::Composition::ICompositionEffectSourceParameter,Windows::Graphics::Effects::IGraphicsEffectSource>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 16) + 32LL);
  return result;
}
