/*
 * XREFs of ??$MakeGuard@VCDeviceLock@DirectComposition@@@@YA?AV?$CGuard@VCDeviceLock@DirectComposition@@@@AEAVCDeviceLock@DirectComposition@@@Z @ 0x1800246CC
 * Callers:
 *     ?EnforceStrictSurfaceUsage@CDevice@DirectComposition@@QEAAJ_N@Z @ 0x18009AD3C (-EnforceStrictSurfaceUsage@CDevice@DirectComposition@@QEAAJ_N@Z.c)
 *     ?GetAvailableFence@CCompositionTexture@DirectComposition@@UEAAJPEA_KAEBU_GUID@@PEAPEAX@Z @ 0x18009FFD0 (-GetAvailableFence@CCompositionTexture@DirectComposition@@UEAAJPEA_KAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetAlphaMode@CCompositionTexture@DirectComposition@@UEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x1800A0280 (-SetAlphaMode@CCompositionTexture@DirectComposition@@UEAAJW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetColorSpace@CCompositionTexture@DirectComposition@@UEAAJW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800A0310 (-SetColorSpace@CCompositionTexture@DirectComposition@@UEAAJW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetSourceRect@CCompositionTexture@DirectComposition@@UEAAJAEBUD2D_RECT_U@@@Z @ 0x1800A03A0 (-SetSourceRect@CCompositionTexture@DirectComposition@@UEAAJAEBUD2D_RECT_U@@@Z.c)
 *     ?CheckCompositionTextureSupport@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAH@Z @ 0x1800A0810 (-CheckCompositionTextureSupport@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAH@Z.c)
 *     ?CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionTexture@@@Z @ 0x1800A08F0 (-CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionText.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 */

DirectComposition::CDeviceLock **__fastcall MakeGuard<DirectComposition::CDeviceLock>(
        DirectComposition::CDeviceLock **a1,
        DirectComposition::CDeviceLock *a2)
{
  *a1 = a2;
  DirectComposition::CDeviceLock::Enter(a2);
  return a1;
}
