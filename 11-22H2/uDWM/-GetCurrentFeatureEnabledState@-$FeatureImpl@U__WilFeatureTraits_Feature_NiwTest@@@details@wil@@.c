/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_NiwTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180061C94
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_NiwTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005F4F0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_NiwTest@@@details@wil@@A.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18004C84C (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WOSFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180057FC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WOSFixes@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_24_03_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800647F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_24_03_NonSec@@@details@wil@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_NiwTest>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  __int64 v6; // r9
  int v7; // edx
  int v8; // eax
  __int64 v9; // rdx
  char v10; // cl
  int v11; // edi

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x2E3923D,
                                        3LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  v7 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x80) != 0 ? 0x400 : 0) | ((FeatureEnabledState & 0x40) != 0
                                                                                           ? 0x800
                                                                                           : 0);
  *(_DWORD *)a2 = v7;
  if ( (_DWORD)v6 )
  {
    v8 = 0;
    if ( (_DWORD)v6 == 2 )
      v8 = 64;
  }
  else
  {
    v8 = 64;
  }
  v9 = v8 | (unsigned int)v7;
  *(_DWORD *)a2 = v9;
  v10 = 0;
  v11 = 1;
  if ( (v9 & 0xC00) == 0xC00 || (v9 & 0x40) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WOSFixes>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_WOSFixes>::GetImpl'::`2'::impl,
      v9,
      3072LL,
      v6);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Dcr_24_03_NonSec>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_Dcr_24_03_NonSec>::GetImpl'::`2'::impl);
    v10 = 1;
  }
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v10 )
    v11 = 0;
  *(_DWORD *)a2 = v11 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
