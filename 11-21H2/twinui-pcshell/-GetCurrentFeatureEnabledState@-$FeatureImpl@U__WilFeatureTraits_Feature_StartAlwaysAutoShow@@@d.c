/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_StartAlwaysAutoShow@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180065730
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_StartAlwaysAutoShow@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180065654 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_StartAlwaysAutoShow@@@de.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800653A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QE.c)
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800F4300 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartAlwaysAutoShow>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        enum FEATURE_CHANGE_TIME a3,
        int *a4)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  int v6; // r9d
  unsigned int v7; // r10d
  int v8; // r8d
  _QWORD *result; // rax
  int v10; // eax

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0x1E978EC, 0, a3, a4);
  v6 = 0;
  *a2 = 0LL;
  v7 = FeatureEnabledState & 0xFFFFFF3F;
  v8 = (32 * (FeatureEnabledState & 3)) | ((FeatureEnabledState & 0x40) != 0 ? 0x200 : 0) | ((FeatureEnabledState & 0x80) != 0
                                                                                           ? 0x100
                                                                                           : 0);
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v10 = 0;
    if ( v7 == 2 )
      v10 = 16;
    v8 |= v10;
  }
  *(_DWORD *)a2 = v8;
  if ( (v8 & 0x10) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::GetImpl'::`2'::impl,
      1u,
      0,
      0LL);
    v8 = *(_DWORD *)a2;
    v6 = 8;
  }
  result = a2;
  *(_DWORD *)a2 = v6 | v8 & 0xFFFFFFF7;
  return result;
}
