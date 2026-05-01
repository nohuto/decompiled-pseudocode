/*
 * XREFs of ?IsHighContrast@@YAHXZ @ 0x18019CA9C
 * Callers:
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180018540 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x18019C9EC (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     s_OnDrawItemHelper @ 0x18028640C (s_OnDrawItemHelper.c)
 *     ?OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180421450 (-OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x180440544 (-UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 *     ??B?$HighContrastAwareOpacity@N@@QEBANXZ @ 0x18057B0AC (--B-$HighContrastAwareOpacity@N@@QEBANXZ.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x18057C364 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     ?GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x180586A4C (-GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x180586AA0 (-GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ @ 0x180587158 (-UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ.c)
 *     ?AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x180596270 (-AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@Item.c)
 *     s_SetDwmAttributes @ 0x18074D064 (s_SetDwmAttributes.c)
 * Callees:
 *     <none>
 */

__int64 IsHighContrast(void)
{
  unsigned int v0; // ebx
  int pvParam; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+24h] [rbp-14h]
  int v4; // [rsp+2Ch] [rbp-Ch]

  v0 = 0;
  v3 = 0LL;
  v4 = 0;
  pvParam = 16;
  if ( SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0) )
    return v3 & 1;
  return v0;
}
