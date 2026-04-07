/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D6B4
 * Callers:
 *     ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x18000D464 (-GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z.c)
 *     ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x18000D5F8 (-IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18002190C (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DF10 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002E740 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005C830 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800626A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MSARTest>::ReportUsage(
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
    v12 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MSARTest>::GetCachedFeatureEnabledState(
                       a1,
                       v9);
    v6 = v12;
  }
  v10 = 1;
  v11 = 3;
  return wil::details::ReportUsageToService(a1 + 2, 29698828LL, (v6 >> 8) & 1, (v6 >> 9) & 1, &v10, v7, v4);
}
