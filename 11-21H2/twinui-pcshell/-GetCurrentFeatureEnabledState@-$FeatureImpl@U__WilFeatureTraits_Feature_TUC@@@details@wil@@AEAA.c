/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18005F948
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005F87C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@AEAA-.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180060018 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlIslandsDisablesQuirksForShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800604D4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlIslandsDisablesQuirksForShell@@@detai.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WUIOD@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180060550 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WUIOD@@@details@wil@@QEAAX_NW4ReportingKi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AUXEMP@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800605CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AUXEMP@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MoveTaskbarContextMenuControlsToSettingsApp@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180061B38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MoveTaskbarContextMenuControlsToSettingsA.c)
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800F4300 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117C2C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011AA14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKi.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TUC>::GetCurrentFeatureEnabledState(
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
  __int64 v11; // rdx
  _QWORD *result; // rax
  int v13; // ecx

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0x1C2A739, 3u, a3, a4);
  v6 = 0;
  *a2 = 0LL;
  v7 = 16LL;
  v8 = (((FeatureEnabledState & 0x40) != 0 ? 0x200 : 0) | ((FeatureEnabledState & 0x80) != 0 ? 0x100 : 0)) ^ (32 * (FeatureEnabledState & 0x3F)) & 0x60;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v13 = 0;
    if ( (FeatureEnabledState & 0xFFFFFF3F) == 2 )
      v13 = 16;
    v9 = v8 & 0xFFFFFFEF | v13;
  }
  else
  {
    v9 = v8 | 0x10;
  }
  *(_DWORD *)a2 = v9;
  if ( (v9 & 0x10) != 0 )
  {
    LOBYTE(v7) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TD>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_TD>::GetImpl'::`2'::impl,
      v7,
      0LL);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WUIOD>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_WUIOD>::GetImpl'::`2'::impl);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AUXEMP>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_AUXEMP>::GetImpl'::`2'::impl);
    LOBYTE(v10) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTest>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_VTest>::GetImpl'::`2'::impl,
      v10,
      0LL);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MoveTaskbarContextMenuControlsToSettingsApp>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_MoveTaskbarContextMenuControlsToSettingsApp>::GetImpl'::`2'::impl);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlIslandsDisablesQuirksForShell>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_XamlIslandsDisablesQuirksForShell>::GetImpl'::`2'::impl);
    LOBYTE(v11) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::GetImpl'::`2'::impl,
      v11,
      0LL);
    v6 = 8;
  }
  *(_DWORD *)a2 &= ~8u;
  result = a2;
  *(_DWORD *)a2 |= v6;
  return result;
}
