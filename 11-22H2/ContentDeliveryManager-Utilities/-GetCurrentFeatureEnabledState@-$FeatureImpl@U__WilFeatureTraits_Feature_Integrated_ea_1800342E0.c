/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolicyEnforcement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800342E0
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolicyEnforcement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800336B8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedS_ea_1800336B8.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800421B8 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AccountAndRegionalPolicyEnforcement@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180043560 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AccountAndRegionalPolicyEnforceme.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolicyControl@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800435D8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolicyControl@@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_IntegratedServicesPolicyEnforcement>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        enum FEATURE_CHANGE_TIME a3,
        int *a4)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  unsigned int v6; // r9d
  int v7; // edx
  int v8; // edx
  int v9; // eax
  bool v10; // cl
  int v11; // edi
  char v12; // si

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0x2A4C774, 3u, a3, a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  v7 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x80) != 0 ? 0x400 : 0) | ((FeatureEnabledState & 0x40) != 0
                                                                                           ? 0x800
                                                                                           : 0);
  *(_DWORD *)a2 = v7;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v9 = 0;
    if ( v6 == 2 )
      v9 = 64;
    v8 = v9 | v7;
  }
  else
  {
    v8 = v7 | 0x40;
  }
  *(_DWORD *)a2 = v8;
  v10 = 0;
  v11 = 1;
  if ( (v8 & 0xC00) == 0xC00 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( (v8 & 0x40) == 0 )
      goto LABEL_16;
  }
  v10 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_IntegratedServicesPolicyControl>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_IntegratedServicesPolicyControl>::GetImpl'::`2'::impl)
     && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AccountAndRegionalPolicyEnforcement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_AccountAndRegionalPolicyEnforcement>::GetImpl'::`2'::impl);
  if ( v12 && !v10 )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_16:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v10 )
    v11 = 0;
  *(_DWORD *)a2 = v11 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
