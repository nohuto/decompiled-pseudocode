/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180013B10
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180024CFC (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800541CC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@.c)
 *     ?GetArrangementSheet@CWindowArrangementTransition@@AEAAPEAUIArrangementSheet@@XZ @ 0x180100A20 (-GetArrangementSheet@CWindowArrangementTransition@@AEAAPEAUIArrangementSheet@@XZ.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@AEBUtagPOINT@@@Z @ 0x180100BCC (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@AEBUt.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x180104EDC (-OnWindowArrangementEnd@CWindowList@@AEAAJXZ.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180104FD8 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005D938 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@A.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800626A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Wmasfot>::ReportUsage(
        unsigned int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v4; // edi
  unsigned int v6; // r8d
  int v7; // esi
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF
  char v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v12 = a4;
  v4 = a3;
  v6 = *a1;
  v7 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v12 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Wmasfot>::GetCachedFeatureEnabledState(
                       a1,
                       &v9);
    v6 = v12;
  }
  v10 = 0;
  v11 = 3;
  return wil::details::ReportUsageToService(a1 + 2, 29140109LL, (v6 >> 8) & 1, (v6 >> 9) & 1, &v10, v7, v4);
}
