/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DWriteTitlebarText@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18005B660
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DWriteTitlebarText@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005B538 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DWriteTitlebarText@@@det.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18004C84C (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWriteTitlebarText>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  unsigned int v6; // r9d
  int v7; // edx
  int v8; // eax
  int v9; // edx
  char v10; // r8
  int v11; // ecx
  int v12; // eax
  _QWORD *result; // rax

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x21545DC,
                                        0LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  v7 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x80) != 0 ? 0x400 : 0) | ((FeatureEnabledState & 0x40) != 0
                                                                                           ? 0x800
                                                                                           : 0);
  *(_DWORD *)a2 = v7;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v8 = 0;
    if ( v6 == 2 )
      v8 = 64;
  }
  else
  {
    v8 = 64;
  }
  v9 = v8 | v7;
  v10 = 0;
  v11 = 1;
  if ( (v9 & 0xC00) == 0xC00 )
  {
    v12 = v9 & 0x40;
LABEL_8:
    v10 = 1;
    goto LABEL_9;
  }
  v12 = v9 & 0x40;
  if ( (v9 & 0x40) != 0 )
    goto LABEL_8;
LABEL_9:
  if ( !v12 || !v10 )
    v11 = 0;
  result = a2;
  *(_DWORD *)a2 = v11 | v9;
  return result;
}
