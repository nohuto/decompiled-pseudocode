/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_IncreaseSpatialAudioDynamicObjectCountV1@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18001BD38
 * Callers:
 *     ?GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z @ 0x18001B004 (-GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_IncreaseSpatialAudioDynamicObjectCountV1@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18001BD78 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_IncreaseSpatialAudioDyna.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_IncreaseSpatialAudioDynamicObjectCountV1>::__private_IsEnabled(
        _DWORD *a1)
{
  char v2; // bl
  char v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_IncreaseSpatialAudioDynamicObjectCountV1>::GetCachedFeatureEnabledState(
    a1,
    &v4);
  v2 = v4 & 1;
  if ( (*a1 & 4) == 0 )
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_IncreaseSpatialAudioDynamicObjectCountV1>::GetCachedFeatureEnabledState(
      a1,
      &v5);
  return v2;
}
