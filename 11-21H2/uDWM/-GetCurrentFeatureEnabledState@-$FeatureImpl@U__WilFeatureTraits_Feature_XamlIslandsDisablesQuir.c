/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlIslandsDisablesQuirksForShell@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800570B0
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlIslandsDisablesQuirksForShell@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180056D98 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlIslandsDisablesQuirk.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18003EC64 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180057314 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlIslandsDisablesQuirksForShell>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  int v6; // r10d
  int v7; // r9d
  unsigned int v8; // r9d
  _QWORD *result; // rax
  int v10; // ecx

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x1AC2F64,
                                        3LL,
                                        a3,
                                        a4);
  v6 = 0;
  *a2 = 0LL;
  v7 = (((FeatureEnabledState & 0x40) != 0 ? 0x200 : 0) | ((FeatureEnabledState & 0x80) != 0 ? 0x100 : 0)) ^ (32 * (FeatureEnabledState & 0x3F)) & 0x60;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v10 = 0;
    if ( (FeatureEnabledState & 0xFFFFFF3F) == 2 )
      v10 = 16;
    v8 = v7 & 0xFFFFFFEF | v10;
  }
  else
  {
    v8 = v7 | 0x10;
  }
  *(_DWORD *)a2 = v8;
  if ( (v8 & 0x10) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DTests>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_DTests>::GetImpl'::`2'::impl,
      16LL);
    v6 = 8;
  }
  *(_DWORD *)a2 &= ~8u;
  result = a2;
  *(_DWORD *)a2 |= v6;
  return result;
}
