/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800568B4
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800567AC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@AEAA-.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18003EC64 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800569C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlIslandsDisablesQuirksForShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180056C24 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlIslandsDisablesQuirksForShell@@@detai.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WUIOD@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180056CA0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WUIOD@@@details@wil@@QEAAX_NW4ReportingKi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AUXEMP@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180056D1C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AUXEMP@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MoveTaskbarContextMenuControlsToSettingsApp@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180057550 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MoveTaskbarContextMenuControlsToSettingsA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800579DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005808C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKi.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TUC>::GetCurrentFeatureEnabledState(
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
                                        (wil::details *)0x1C2A739,
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
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TD>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_TD>::GetImpl'::`2'::impl,
      16LL);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WUIOD>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_WUIOD>::GetImpl'::`2'::impl);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AUXEMP>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_AUXEMP>::GetImpl'::`2'::impl);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTest>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_VTest>::GetImpl'::`2'::impl);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MoveTaskbarContextMenuControlsToSettingsApp>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_MoveTaskbarContextMenuControlsToSettingsApp>::GetImpl'::`2'::impl);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlIslandsDisablesQuirksForShell>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_XamlIslandsDisablesQuirksForShell>::GetImpl'::`2'::impl);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::GetImpl'::`2'::impl);
    v6 = 8;
  }
  *(_DWORD *)a2 &= ~8u;
  result = a2;
  *(_DWORD *)a2 |= v6;
  return result;
}
