/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VExponentialEasingFunction@Composition@UI@Windows@@UIExponentialEasingFunction@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18010FC10
 * Callers:
 *     ?GetIids@?$NestedWinRtImplements@VCompositionMipmapSurface@Composition@UI@Windows@@UICompositionMipmapSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AE4F0 (-GetIids@-$NestedWinRtImplements@VCompositionMipmapSurface@Composition@UI@Windows@@UIComposition.c)
 *     ?GetIids@?$NestedWinRtImplements@VCompositionSurfaceBrush@Composition@UI@Windows@@UICompositionSurfaceBrush@234@UICompositionSurfaceBrush2@234@UICompositionSurfaceBrush3@234@@WRL2@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AE590 (-GetIids@-$NestedWinRtImplements@VCompositionSurfaceBrush@Composition@UI@Windows@@UICompositionS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::ExponentialEasingFunction,Windows::UI::Composition::IExponentialEasingFunction>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 152),
           a2,
           a3);
}
