/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18017AA2C
 * Callers:
 *     ?UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800A3D30 (-UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E6940 (-SubscribeToServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ @ 0x18017A99C (-RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ.c)
 *     ?Close@GamingOverlayExperienceManager@@UEAAJXZ @ 0x1803FB130 (-Close@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?Hide@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180400520 (-Hide@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?OnViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1804041A0 (-OnViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180406210 (-ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?SetAllowPointerActivation@GamingOverlayExperienceManager@@UEAAJE@Z @ 0x180406A10 (-SetAllowPointerActivation@GamingOverlayExperienceManager@@UEAAJE@Z.c)
 *     ?SetForeground@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180407180 (-SetForeground@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?SetWindowRect@GamingOverlayExperienceManager@@UEAAJHHHH@Z @ 0x1804073E0 (-SetWindowRect@GamingOverlayExperienceManager@@UEAAJHHHH@Z.c)
 *     ?Show@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180407570 (-Show@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180408E54 (-UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?get_IsMultiWindowSupported@GamingOverlayExperienceManager@@UEAAJPEAE@Z @ 0x18040B110 (-get_IsMultiWindowSupported@GamingOverlayExperienceManager@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800D1C80 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18017AAB4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindow.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // edi
  int v7; // [rsp+30h] [rbp-28h]
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v7 = 3;
  v9 = 0;
  v10 = 3;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x1CF9176u,
    ((unsigned int)v4 >> 10) & 1,
    ((unsigned int)v4 >> 11) & 1,
    (__int64)&v9,
    v6,
    v7);
}
