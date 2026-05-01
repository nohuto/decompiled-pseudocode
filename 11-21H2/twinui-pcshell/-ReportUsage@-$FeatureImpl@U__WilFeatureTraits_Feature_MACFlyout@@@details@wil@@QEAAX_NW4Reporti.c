/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CCC44
 * Callers:
 *     ??0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800CCA24 (--0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_MACFlyout@@@wil@@SA_NXZ @ 0x1800CCC20 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_MACFlyout@@@wil@@SA_NXZ.c)
 *     ?GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEBGPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180372570 (-GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEBGPEAUIServiceProvider@@PEAPEAUII.c)
 *     ??0MeetNowExperienceManager@@QEAA@XZ @ 0x18039309C (--0MeetNowExperienceManager@@QEAA@XZ.c)
 *     ?HideFlyout@MeetNowExperienceManager@@UEAAJXZ @ 0x180394440 (-HideFlyout@MeetNowExperienceManager@@UEAAJXZ.c)
 *     ?OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395990 (-OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395D20 (-OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1803965E8 (-RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MNIB@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805CC718 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MNIB@@@details@wil@@AEA.c)
 *     ?IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ @ 0x1805CD0E8 (-IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800CCCC4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18018FE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::ReportUsage(
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
    v12 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::GetCachedFeatureEnabledState(
                       a1,
                       v9);
    v6 = v12;
  }
  v10 = 0;
  v11 = 3;
  return wil::details::ReportUsageToService(a1 + 2, 31371065LL, (v6 >> 8) & 1, (v6 >> 9) & 1, &v10, v7, v4);
}
