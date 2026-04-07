/*
 * XREFs of ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180025C70
 * Callers:
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180015B1C (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180024CFC (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x18004F4D0 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18004F63C (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x18004F984 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x180050E74 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x1800511C0 (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x1800A521C (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x1800A64DC (-GetAnimationDuration@@YAJHHPEAK@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800AE050 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800BC224 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C0C50 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800C8C60 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800C8FF8 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800C93B0 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x1800E2540 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x1800E3738 (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x1800E6EF0 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 *     ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x1800ED0C4 (-GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::GetTheme(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 67);
  v1 = a1 - 1;
  if ( !v1 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 69);
  v2 = v1 - 1;
  if ( !v2 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 70);
  v3 = v2 - 1;
  if ( !v3 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 71);
  if ( v3 == 1 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 72);
  return 0LL;
}
