/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteActionV2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800D375C
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteActionV2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800D3670 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteActionV2@@@det.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800D34F0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteActionV2>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  enum FEATURE_ENABLED_STATE (*v2)(unsigned int, enum FEATURE_CHANGE_TIME, int *); // rax
  int v3; // edi
  int v5; // ecx
  unsigned int v6; // r9d
  int v7; // edx
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // r8d
  _QWORD *result; // rax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h]
  signed __int32 v14; // [rsp+68h] [rbp+20h] BYREF

  v12 = a1;
  v2 = g_wil_details_internalGetFeatureEnabledState;
  v3 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState || (v2 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v5 = ((__int64 (__fastcall *)(__int64, _QWORD))v2)(16419964LL, 0LL);
  else
    v5 = 0;
  *a2 = 0LL;
  v6 = v5 & 0xFFFFFF3F;
  v7 = 2 * (v5 & 0x80 | (4 * (v5 & 0x40 | (4 * (v5 & 3)))));
  if ( (v5 & 0xFFFFFF3F) != 0 )
  {
    v9 = 0;
    if ( v6 == 2 )
      v9 = 16;
    v8 = v7 & 0xFFFFFFEF | v9;
  }
  else
  {
    v8 = v7 | 0x10;
  }
  *(_DWORD *)a2 = v8;
  if ( (v8 & 0x10) != 0 )
  {
    v10 = `wil::Feature<__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles>::GetImpl'::`2'::impl;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles>::GetImpl'::`2'::impl & 2) == 0 )
    {
      v13 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles>::GetCachedFeatureEnabledState(
                         &`wil::Feature<__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles>::GetImpl'::`2'::impl,
                         &v14);
      v10 = v13;
    }
    LODWORD(v12) = 0;
    BYTE4(v12) = 3;
    wil::details::ReportUsageToService(
      (__int64)&unk_1801AF580,
      0xF2EE8Bu,
      (v10 >> 8) & 1,
      (v10 >> 9) & 1,
      (const struct FEATURE_LOGGED_TRAITS *)&v12,
      1,
      0);
    v3 = 8;
  }
  *(_DWORD *)a2 &= ~8u;
  result = a2;
  *(_DWORD *)a2 |= v3;
  return result;
}
