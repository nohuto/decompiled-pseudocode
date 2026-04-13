/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_23H2_Enablement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180033CE4
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_23H2_Enablement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180033118 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_23H2_Enablement@@@detail.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800421B8 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_23H2_Rollback@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180043498 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_23H2_Rollback@@@details@wil@@QEAA.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_23H2_Enablement>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        enum FEATURE_CHANGE_TIME a3,
        int *a4)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  unsigned int v6; // r9d
  int v7; // edx
  int v8; // eax
  int v9; // ebx
  char v10; // si
  char IsEnabled; // al
  _QWORD *result; // rax

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0x2BACC2C, 3u, a3, a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  v7 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x80) != 0 ? 0x400 : 0) | ((FeatureEnabledState & 0x40) != 0
                                                                                           ? 0x800
                                                                                           : 0);
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v8 = 0;
    if ( v6 == 2 )
      v8 = 64;
    v7 |= v8;
  }
  *(_DWORD *)a2 = v7;
  v9 = 1;
  if ( (v7 & 0xC00) == 0xC00 )
  {
    v10 = 1;
  }
  else
  {
    v10 = 0;
    if ( (v7 & 0x40) == 0 )
    {
LABEL_13:
      v9 = 0;
      goto LABEL_14;
    }
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_23H2_Rollback>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_23H2_Rollback>::GetImpl'::`2'::impl);
  v7 = *(_DWORD *)a2;
  if ( v10 && !IsEnabled )
    v7 &= ~0x400u;
  if ( (v7 & 0x40) == 0 || !IsEnabled )
    goto LABEL_13;
LABEL_14:
  result = a2;
  *(_DWORD *)a2 = v9 | v7 & 0xFFFFFFFE;
  return result;
}
