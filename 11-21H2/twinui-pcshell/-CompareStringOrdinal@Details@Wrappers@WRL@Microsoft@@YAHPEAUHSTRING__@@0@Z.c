/*
 * XREFs of ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18017C488
 * Callers:
 *     ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180035070 (-get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800941A0 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 *     ?Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x18033FCA8 (-Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV-$ComPtr@UIAudioSessionControl2@@@WRL@.c)
 *     ?OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180369140 (-OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRI.c)
 *     ?OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18036B9C0 (-OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180373760 (-OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180373BC0 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnViewUncloaking@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180379130 (-OnViewUncloaking@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnEventQueued@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180394B00 (-OnEventQueued@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@PEAUHSTRIN.c)
 *     ?EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x1803E28E0 (-EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?EnsureDuplicateViewDestroyed@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x1803ED304 (-EnsureDuplicateViewDestroyed@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x18048FFDC (-UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     ?get_Wallpaper@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1804902D0 (-get_Wallpaper@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     _lambda_87e491ca89c161f11cdbafeae50fa0db_::operator() @ 0x1804A7168 (_lambda_87e491ca89c161f11cdbafeae50fa0db_--operator().c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802E6814 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
        Microsoft::WRL::Wrappers::Details *this,
        HSTRING a2,
        HSTRING a3)
{
  HRESULT v3; // eax
  int v4; // edx
  unsigned int v5; // r8d
  INT32 result; // [rsp+40h] [rbp+18h] BYREF

  result = 0;
  v3 = WindowsCompareStringOrdinal((HSTRING)this, a2, &result);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3, v4, v5);
    JUMPOUT(0x18017C4B7LL);
  }
  return (unsigned int)result;
}
