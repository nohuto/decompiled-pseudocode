/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardTheming@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180152998
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardTheming@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801528CC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardTheming@@@d.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800F4300 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardPersonalization@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180152A68 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardPersonalization@@@details@wi.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchKeyboardTheming>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  int v6; // r10d
  __int64 v7; // rdx
  int v8; // r9d
  unsigned int v9; // r9d
  _QWORD *result; // rax
  int v11; // ecx

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x1999DD7,
                                        1LL,
                                        a3,
                                        a4);
  v6 = 0;
  *a2 = 0LL;
  v7 = 16LL;
  v8 = (((FeatureEnabledState & 0x40) != 0 ? 0x200 : 0) | ((FeatureEnabledState & 0x80) != 0 ? 0x100 : 0)) ^ (32 * (FeatureEnabledState & 0x3F)) & 0x60;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v11 = 0;
    if ( (FeatureEnabledState & 0xFFFFFF3F) == 2 )
      v11 = 16;
    v9 = v8 & 0xFFFFFFEF | v11;
  }
  else
  {
    v9 = v8 | 0x10;
  }
  *(_DWORD *)a2 = v9;
  if ( (v9 & 0x10) != 0 )
  {
    LOBYTE(v7) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchKeyboardPersonalization>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_TouchKeyboardPersonalization>::GetImpl'::`2'::impl,
      v7,
      0LL);
    v6 = 8;
  }
  *(_DWORD *)a2 &= ~8u;
  result = a2;
  *(_DWORD *)a2 |= v6;
  return result;
}
