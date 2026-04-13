/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FrameworkScalability@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800579C8
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FrameworkScalability@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180056DE8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FrameworkScalability@@@d.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800421B8 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FrameworkScalability>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  int v5; // ebx
  unsigned int FeatureEnabledState; // eax
  unsigned int v7; // r9d
  int v8; // edx
  int v9; // eax
  int v10; // edx
  char v11; // cl
  int v12; // eax
  _QWORD *result; // rax

  v5 = 1;
  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState((wil::details *)0x6FD3F7, 1LL, a3, a4);
  *a2 = 0LL;
  v7 = FeatureEnabledState & 0xFFFFFF3F;
  v8 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x80) != 0 ? 0x400 : 0) | ((FeatureEnabledState & 0x40) != 0
                                                                                           ? 0x800
                                                                                           : 0);
  *(_DWORD *)a2 = v8;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v9 = 0;
    if ( v7 == 2 )
      v9 = 64;
  }
  else
  {
    v9 = 64;
  }
  v10 = v9 | v8;
  v11 = 0;
  if ( (v10 & 0xC00) == 0xC00 )
  {
    v12 = v10 & 0x40;
LABEL_8:
    v11 = 1;
    goto LABEL_9;
  }
  v12 = v10 & 0x40;
  if ( (v10 & 0x40) != 0 )
    goto LABEL_8;
LABEL_9:
  if ( !v12 || !v11 )
    v5 = 0;
  result = a2;
  *(_DWORD *)a2 = v5 | v10;
  return result;
}
