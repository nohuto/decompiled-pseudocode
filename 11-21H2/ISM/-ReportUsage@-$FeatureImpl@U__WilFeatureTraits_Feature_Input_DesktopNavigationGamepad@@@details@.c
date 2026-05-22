/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004E16C
 * Callers:
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z @ 0x180177844 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18004C4A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180171928 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationG.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  _BYTE v7[24]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  char v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetCachedFeatureEnabledState(
                      a1,
                      v7);
    v10 = v4;
  }
  v8 = 0;
  v9 = 0;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0xADAF72u,
    ((unsigned int)v4 >> 8) & 1,
    ((unsigned int)v4 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v8,
    v6,
    3);
}
