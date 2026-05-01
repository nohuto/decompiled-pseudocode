/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18013DB40
 * Callers:
 *     ?SubscribeToServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800B2760 (-SubscribeToServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E2590 (-UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ @ 0x18013DAB0 (-RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ.c)
 *     ?Close@GamingOverlayExperienceManager@@UEAAJXZ @ 0x18032DE40 (-Close@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?Hide@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180332E70 (-Hide@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?OnViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180336470 (-OnViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180338590 (-ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?SetAllowPointerActivation@GamingOverlayExperienceManager@@UEAAJE@Z @ 0x180338E40 (-SetAllowPointerActivation@GamingOverlayExperienceManager@@UEAAJE@Z.c)
 *     ?SetForeground@GamingOverlayExperienceManager@@UEAAJXZ @ 0x1803395A0 (-SetForeground@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?SetWindowRect@GamingOverlayExperienceManager@@UEAAJHHHH@Z @ 0x1803397F0 (-SetWindowRect@GamingOverlayExperienceManager@@UEAAJHHHH@Z.c)
 *     ?Show@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180339970 (-Show@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18033AF30 (-UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?get_IsMultiWindowSupported@GamingOverlayExperienceManager@@UEAAJPEAE@Z @ 0x18033D370 (-get_IsMultiWindowSupported@GamingOverlayExperienceManager@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18013DBC8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindow.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18018FE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v9 = 0;
  v10 = 3;
  return wil::details::ReportUsageToService(
           a1 + 2,
           30380406LL,
           ((unsigned int)v4 >> 8) & 1,
           ((unsigned int)v4 >> 9) & 1,
           &v9,
           v6,
           3);
}
