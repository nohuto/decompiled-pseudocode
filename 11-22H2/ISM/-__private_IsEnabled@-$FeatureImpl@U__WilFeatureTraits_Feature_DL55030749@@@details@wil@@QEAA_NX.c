/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DL55030749@@@details@wil@@QEAA_NXZ @ 0x1800631FC
 * Callers:
 *     _lambda_48f152b7375fc54a16cdd7806e5a908e_::operator() @ 0x180062238 (_lambda_48f152b7375fc54a16cdd7806e5a908e_--operator().c)
 *     ?SetAmbientPids@LampArrayDevice@@QEAAXII_N@Z @ 0x1800643B0 (-SetAmbientPids@LampArrayDevice@@QEAAXII_N@Z.c)
 *     ?SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z @ 0x18010156C (-SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z.c)
 *     ?SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z @ 0x180101740 (-SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z.c)
 *     ?SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z @ 0x180101868 (-SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z.c)
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x180101A2C (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DL55030749@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180062910 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DL55030749@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DL55030749@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180062E4C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DL55030749@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DL55030749>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DL55030749>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DL55030749>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
