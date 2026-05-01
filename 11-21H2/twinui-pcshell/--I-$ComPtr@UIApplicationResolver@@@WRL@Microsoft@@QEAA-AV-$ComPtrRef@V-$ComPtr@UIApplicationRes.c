/*
 * XREFs of ??I?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@@Details@12@XZ @ 0x18008F050
 * Callers:
 *     ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180143AB0 (-GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x18023A1D0 (-ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@UtagSIZE@@_NPEAPEAU2@@Z.c)
 *     ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x18023A2B2 (-ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z.c)
 *     ?_GetSelectedItem@CWRLExecuteCommandBase@@IEAAJKAEBU_GUID@@PEAPEAX@Z @ 0x1804498F4 (-_GetSelectedItem@CWRLExecuteCommandBase@@IEAAJKAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Initialize@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1DeviceContext@@PEAUIDCompositionDevice@@@Z @ 0x1805E9AC4 (-Initialize@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1DeviceContext@@PEAUIDComposition.c)
 *     ?LoadBitmapHelper@CDCompVisualImageLoader@ImageLoaders@@AEAAJPEAUIWICBitmapDecoder@@PEAUtagSIZE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1805E9C68 (-LoadBitmapHelper@CDCompVisualImageLoader@ImageLoaders@@AEAAJPEAUIWICBitmapDecoder@@PEAUtagSIZE@.c)
 *     ?GetNormalDisplayNameFromAppId@ImmersiveAppHelpers@@YAJPEBGPEAPEAG@Z @ 0x1805E9F80 (-GetNormalDisplayNameFromAppId@ImmersiveAppHelpers@@YAJPEBGPEAPEAG@Z.c)
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1805EB238 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1805EC294 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<IApplicationResolver>::operator&(__int64 a1, _QWORD *a2)
{
  *a2 = a1;
  return a2;
}
