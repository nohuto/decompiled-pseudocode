/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@UICompositionIslandAutomationProviderRequestedEventArgs@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180112810
 * Callers:
 *     ?GetIids@?$NestedWinRtImplements@VSceneLightingEffect@Effects@Composition@UI@Windows@@UISceneLightingEffect@2345@UIGraphicsEffect@2Graphics@5@UIGraphicsEffectSource@285@UIGraphicsEffectD2D1Interop@285@UISceneLightingEffect2@2345@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AD1B0 (-GetIids@-$NestedWinRtImplements@VSceneLightingEffect@Effects@Composition@UI@Windows@@UISceneLig.c)
 *     ?GetIids@?$NestedWinRtImplements@VWhiteNoiseEffect@Effects@Composition@UI@Windows@@UIWhiteNoiseEffect@2345@UIGraphicsEffect@2Graphics@5@UIGraphicsEffectSource@285@UIGraphicsEffectD2D1Interop@285@@WRL2@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AF1A0 (-GetIids@-$NestedWinRtImplements@VWhiteNoiseEffect@Effects@Composition@UI@Windows@@UIWhiteNoiseE.c)
 *     ?GetIids@?$NestedWinRtImplements@VSceneLightingEffect@Effects@Composition@UI@Windows@@UISceneLightingEffect@2345@UIGraphicsEffect@2Graphics@5@UIGraphicsEffectSource@285@UIGraphicsEffectD2D1Interop@285@UISceneLightingEffect2@2345@@WRL2@Microsoft@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AF1C0 (-GetIids@-$NestedWinRtImplements@VSceneLightingEffect@Effects@Composition@UI@Window_ea_1800AF1C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs,Windows::UI::Composition::ICompositionIslandAutomationProviderRequestedEventArgs>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 24),
           a2,
           a3);
}
