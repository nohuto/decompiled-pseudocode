/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180115AF4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18001692C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@.c)
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1800525BC (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1800D8FCC (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x18011546C (-s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z.c)
 *     ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18049AD54 (-_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationV.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180115B8C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18018FE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsage(
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
    v12 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::GetCachedFeatureEnabledState(
                       a1,
                       v9);
    v6 = v12;
  }
  v10 = 4;
  v11 = 3;
  return wil::details::ReportUsageToService(a1 + 2, 7923987LL, (v6 >> 8) & 1, (v6 >> 9) & 1, &v10, v7, v4);
}
