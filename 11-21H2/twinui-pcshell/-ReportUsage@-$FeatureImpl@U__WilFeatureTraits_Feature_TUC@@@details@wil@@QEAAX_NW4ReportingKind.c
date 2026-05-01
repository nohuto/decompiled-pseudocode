/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F628
 * Callers:
 *     ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x18005D470 (-Destroy@CMultitaskingViewManager@@UEAAJXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SHTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18005D8C0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SHTest@@@details@wil@@A.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18005DA70 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@.c)
 *     ??0MiniSearchAppPositionerConfig@@QEAA@PEAUIServiceProvider@@@Z @ 0x18005F0CC (--0MiniSearchAppPositionerConfig@@QEAA@PEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CLauncherTipContextMenu@@QEAAJXZ @ 0x18005F1EC (-RuntimeClassInitialize@CLauncherTipContextMenu@@QEAAJXZ.c)
 *     ??0TaskbarSearchAppPositionerConfig@@QEAA@PEAUIServiceProvider@@@Z @ 0x18005F428 (--0TaskbarSearchAppPositionerConfig@@QEAA@PEAUIServiceProvider@@@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18014FE40 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@AEA.c)
 *     ?v_WndProc@CLauncherTipContextMenu@@MEAA_JPEAUHWND__@@I_K_J@Z @ 0x180239F40 (-v_WndProc@CLauncherTipContextMenu@@MEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?GetMenuItemsAsync@CLauncherTipContextMenu@@UEAAJUtagRECT@@PEAPEAUIUnknown@@@Z @ 0x1805D9100 (-GetMenuItemsAsync@CLauncherTipContextMenu@@UEAAJUtagRECT@@PEAPEAUIUnknown@@@Z.c)
 *     ?ShowLauncherTipContextMenu@CLauncherTipContextMenu@@UEAAJPEAUtagPOINT@@@Z @ 0x1805DA270 (-ShowLauncherTipContextMenu@CLauncherTipContextMenu@@UEAAJPEAUtagPOINT@@@Z.c)
 *     ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x1805DAE2C (-_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z.c)
 *     ?_HandleBackgroundEnumeration@CLauncherTipContextMenu@@AEAAX_N_J@Z @ 0x1805DC2A8 (-_HandleBackgroundEnumeration@CLauncherTipContextMenu@@AEAAX_N_J@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005F87C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@AEAA-.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18018FE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TUC>::ReportUsage(
        unsigned int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v4; // edi
  unsigned int v6; // r8d
  int v7; // esi
  _BYTE v9[24]; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF
  char v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v12 = a4;
  v4 = a3;
  v6 = *a1;
  v7 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v12 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TUC>::GetCachedFeatureEnabledState(a1, v9);
    v6 = v12;
  }
  v10 = 0;
  v11 = 3;
  return wil::details::ReportUsageToService(a1 + 2, 29534009LL, (v6 >> 8) & 1, (v6 >> 9) & 1, &v10, v7, v4);
}
