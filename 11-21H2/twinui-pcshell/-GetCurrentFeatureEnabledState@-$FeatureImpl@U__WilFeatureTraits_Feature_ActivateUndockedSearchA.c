/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ActivateUndockedSearchApp@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180167364
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ActivateUndockedSearchApp@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180167298 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ActivateUndockedSearchAp.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UndockDesktopSearchIntegrations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180025D9C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UndockDesktopSearchIntegrations@@@details.c)
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800F4300 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActivateUndockedSearchApp>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  int v6; // r9d
  unsigned int v7; // r10d
  int v8; // r8d
  _QWORD *result; // rax
  int v10; // eax

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x142672D,
                                        3LL,
                                        a3,
                                        a4);
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
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_UndockDesktopSearchIntegrations>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_UndockDesktopSearchIntegrations>::GetImpl'::`2'::impl,
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
