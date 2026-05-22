/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@UICompositionIslandAutomationProviderRequestedEventArgs@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180012290
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VWhiteNoiseEffect@Effects@Composition@UI@Windows@@UIWhiteNoiseEffect@2345@UIGraphicsEffect@2Graphics@5@UIGraphicsEffectSource@285@UIGraphicsEffectD2D1Interop@285@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AD210 (-QueryInterface@-$NestedWinRtImplements@VWhiteNoiseEffect@Effects@Composition@UI@Windows@@UIWhit.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VWhiteNoiseEffect@Effects@Composition@UI@Windows@@UIWhiteNoiseEffect@2345@UIGraphicsEffect@2Graphics@5@UIGraphicsEffectSource@285@UIGraphicsEffectD2D1Interop@285@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AF260 (-QueryInterface@-$NestedWinRtImplements@VWhiteNoiseEffect@Effects@Composition@UI@Wi_ea_1800AF260.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VWhiteNoiseEffect@Effects@Composition@UI@Windows@@UIWhiteNoiseEffect@2345@UIGraphicsEffect@2Graphics@5@UIGraphicsEffectSource@285@UIGraphicsEffectD2D1Interop@285@@WRL2@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AF280 (-QueryInterface@-$NestedWinRtImplements@VWhiteNoiseEffect@Effects@Composition@UI@Wi_ea_1800AF280.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VSceneLightingEffect@Effects@Composition@UI@Windows@@UISceneLightingEffect@2345@UIGraphicsEffect@2Graphics@5@UIGraphicsEffectSource@285@UIGraphicsEffectD2D1Interop@285@UISceneLightingEffect2@2345@@WRL2@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AF2A0 (-QueryInterface@-$NestedWinRtImplements@VSceneLightingEffect@Effects@Composition@UI@Windows@@UIS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs,Windows::UI::Composition::ICompositionIslandAutomationProviderRequestedEventArgs>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 24),
           a2,
           a3);
}
