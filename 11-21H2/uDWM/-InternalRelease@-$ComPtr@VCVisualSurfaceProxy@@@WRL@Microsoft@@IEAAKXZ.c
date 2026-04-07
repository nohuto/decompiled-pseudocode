/*
 * XREFs of ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E904
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x1800367E4 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180037568 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800375A8 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??1CWindowBorder@@UEAA@XZ @ 0x18003814C (--1CWindowBorder@@UEAA@XZ.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z @ 0x1800468A0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18004E938 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z @ 0x18005D380 (-SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z.c)
 *     ??1?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180099894 (--1-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RemoveUdwmDCompVisualFromUdwmTree@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@@Z @ 0x1800BD634 (-RemoveUdwmDCompVisualFromUdwmTree@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@@Z.c)
 *     ??1CSystemBackdropVisual@@UEAA@XZ @ 0x1800E0E50 (--1CSystemBackdropVisual@@UEAA@XZ.c)
 *     ?Initialize@CSystemBackdropVisual@@UEAAJXZ @ 0x1800E12A0 (-Initialize@CSystemBackdropVisual@@UEAAJXZ.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x180101028 (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x180101700 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(CBaseObject **a1)
{
  CBaseObject *v1; // rdx
  unsigned int result; // eax

  v1 = *a1;
  result = 0;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CBaseObject::Release(v1);
  }
  return result;
}
