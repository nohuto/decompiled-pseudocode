/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SRITest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180053F60
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SRITest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180053E58 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SRITest@@@details@wil@@A.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Test63@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003EBE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Test63@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18003EC64 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004225C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SRITest>::GetCurrentFeatureEnabledState(
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
                                        (wil::details *)0x18CDD0E,
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
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TATest>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_TATest>::GetImpl'::`2'::impl,
      1u,
      0,
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
