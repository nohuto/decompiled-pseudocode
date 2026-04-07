/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MRAUTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18005CFEC
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MRAUTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005CEE4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MRAUTest@@@details@wil@@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CTUATest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800137D4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CTUATest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Test63@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003EBE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Test63@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18003EC64 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MRAUTest>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  int v6; // r10d
  int v7; // r9d
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *result; // rax
  int v13; // ecx

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x1C45527,
                                        3LL,
                                        a3,
                                        a4);
  v6 = 0;
  *a2 = 0LL;
  v7 = (((FeatureEnabledState & 0x40) != 0 ? 0x200 : 0) | ((FeatureEnabledState & 0x80) != 0 ? 0x100 : 0)) ^ (32 * (FeatureEnabledState & 0x3F)) & 0x60;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v13 = 0;
    if ( (FeatureEnabledState & 0xFFFFFF3F) == 2 )
      v13 = 16;
    v8 = v7 & 0xFFFFFFEF | v13;
  }
  else
  {
    v8 = v7 | 0x10u;
  }
  *(_DWORD *)a2 = v8;
  if ( (v8 & 0x10) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CTUATest>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_CTUATest>::GetImpl'::`2'::impl,
      16LL,
      -(FeatureEnabledState & 0x80),
      v8);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Test63>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_Test63>::GetImpl'::`2'::impl,
      v9,
      v10,
      v11);
    v6 = 8;
  }
  *(_DWORD *)a2 &= ~8u;
  result = a2;
  *(_DWORD *)a2 |= v6;
  return result;
}
