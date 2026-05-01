/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ImproveTaskFlowLogonPerf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800A763C
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ImproveTaskFlowLogonPerf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A7560 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ImproveTaskFlowLogonPerf.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800F4300 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LogonPerfImprovements@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803B0E30 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LogonPerfImprovements@@@details@wil@@QEAA.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ImproveTaskFlowLogonPerf>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        enum FEATURE_CHANGE_TIME a3,
        int *a4)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  int v6; // r9d
  int v7; // r8d
  _QWORD *result; // rax

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0x19D1FDB, 0, a3, a4);
  v6 = 0;
  *a2 = 0LL;
  v7 = (32 * (FeatureEnabledState & 3)) | ((FeatureEnabledState & 0x40) != 0 ? 0x200 : 0) | ((FeatureEnabledState & 0x80) != 0
                                                                                           ? 0x100
                                                                                           : 0);
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    if ( (FeatureEnabledState & 0xFFFFFF3F) == 2 )
      v6 = 16;
    v7 |= v6;
  }
  *(_DWORD *)a2 = v7;
  if ( (v7 & 0x10) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_LogonPerfImprovements>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_LogonPerfImprovements>::GetImpl'::`2'::impl,
      -(FeatureEnabledState & 0x40));
    v7 = *(_DWORD *)a2;
  }
  result = a2;
  *(_DWORD *)a2 = v7 & 0xFFFFFFF7;
  return result;
}
