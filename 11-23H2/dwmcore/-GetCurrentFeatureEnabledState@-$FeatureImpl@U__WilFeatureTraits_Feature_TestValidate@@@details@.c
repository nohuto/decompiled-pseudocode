/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestValidate@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180116178
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestValidate@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180113E88 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestValidate@@@details@w.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800C46B4 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_24_11_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117A7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_24_11_NonSec@@@details@wil@@QE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestConfVar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117AF8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestConfVar@@@details@wil@@QEAAX_NW4Repor.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestValidate>::GetCurrentFeatureEnabledState(
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
  char v10; // cl
  int v11; // edi

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x3039059,
                                        3LL,
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
  *(_DWORD *)a2 = v9;
  v10 = 0;
  v11 = 1;
  if ( (v9 & 0xC00) == 0xC00 || (v9 & 0x40) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestConfVar>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_TestConfVar>::GetImpl'::`2'::impl);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_24_11_NonSec>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_Standalone_24_11_NonSec>::GetImpl'::`2'::impl);
    v10 = 1;
  }
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v10 )
    v11 = 0;
  *(_DWORD *)a2 = v11 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
