/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SHTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18005D8C0
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SHTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005D7F4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SHTest@@@details@wil@@AE.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F628 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind.c)
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800F4300 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SRTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F78A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SRTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SHTest>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        enum FEATURE_CHANGE_TIME a3,
        int *a4)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  int v6; // r10d
  __int64 v7; // rdx
  int v8; // r9d
  unsigned int v9; // r9d
  __int64 v10; // rdx
  _QWORD *result; // rax
  int v12; // ecx

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0x1E4CB03, 3u, a3, a4);
  v6 = 0;
  *a2 = 0LL;
  v7 = 16LL;
  v8 = (((FeatureEnabledState & 0x40) != 0 ? 0x200 : 0) | ((FeatureEnabledState & 0x80) != 0 ? 0x100 : 0)) ^ (32 * (FeatureEnabledState & 0x3F)) & 0x60;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v12 = 0;
    if ( (FeatureEnabledState & 0xFFFFFF3F) == 2 )
      v12 = 16;
    v9 = v8 & 0xFFFFFFEF | v12;
  }
  else
  {
    v9 = v8 | 0x10;
  }
  *(_DWORD *)a2 = v9;
  if ( (v9 & 0x10) != 0 )
  {
    LOBYTE(v7) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SRTest>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SRTest>::GetImpl'::`2'::impl,
      v7,
      0LL);
    LOBYTE(v10) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TUC>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_TUC>::GetImpl'::`2'::impl,
      v10,
      0LL);
    v6 = 8;
  }
  *(_DWORD *)a2 &= ~8u;
  result = a2;
  *(_DWORD *)a2 |= v6;
  return result;
}
