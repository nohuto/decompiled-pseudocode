/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MobilityExperience@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800635E0
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_MobilityExperience@@@wil@@SA_NXZ @ 0x18005F940 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_MobilityExperience@@@wil@@SA_NXZ.c)
 *     ?Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x180077280 (-Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_I.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MobilityExperience@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005C3C4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MobilityExperience@@@det.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MobilityExperience>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v4; // edi
  volatile unsigned __int32 v6; // r8d
  int v7; // esi
  signed __int32 v8[6]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  v4 = a3;
  v6 = *a1;
  v7 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v11 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MobilityExperience>::GetCachedFeatureEnabledState(
                       a1,
                       v8);
    v6 = v11;
  }
  v9 = 0;
  v10 = 3;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0xB46EBCu,
    (v6 >> 8) & 1,
    (v6 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v9,
    v7,
    v4);
}
