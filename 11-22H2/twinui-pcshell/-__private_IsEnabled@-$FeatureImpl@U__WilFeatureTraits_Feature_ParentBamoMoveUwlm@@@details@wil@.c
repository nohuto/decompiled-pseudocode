/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ParentBamoMoveUwlm@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800D3164
 * Callers:
 *     ?IsBamoEnabled@@YA_NXZ @ 0x1800D2E84 (-IsBamoEnabled@@YA_NXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MoveUWLMForDesktop@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18016FA00 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MoveUWLMForDesktop@@@de.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_BamoWMOnDesktop@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18016FF88 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_BamoWMOnDesktop@@@detai.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ParentBamoMoveUwlm@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800D31A4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ParentBamoMoveUwlm@@@det.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ParentBamoMoveUwlm>::__private_IsEnabled(
        _DWORD *a1)
{
  char v2; // bl
  char v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ParentBamoMoveUwlm>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  if ( (*a1 & 4) == 0 )
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ParentBamoMoveUwlm>::GetCachedFeatureEnabledState(a1, &v5);
  return v2;
}
