/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18006FB6C
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18006FA80 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@det.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180034BB0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FrameworkScalability@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005C0D0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FrameworkScalability@@@d.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentAPI>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  enum FEATURE_ENABLED_STATE (*v2)(unsigned int, enum FEATURE_CHANGE_TIME, int *); // rax
  int v3; // ebx
  int v5; // ecx
  unsigned int v6; // r9d
  int v7; // edx
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  _QWORD *result; // rax
  signed __int32 v13; // [rsp+40h] [rbp-18h] BYREF
  signed __int32 v14[4]; // [rsp+48h] [rbp-10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+68h] [rbp+10h] BYREF
  char v17; // [rsp+6Ch] [rbp+14h]
  __int64 v18; // [rsp+78h] [rbp+20h]

  v15 = a1;
  v2 = g_wil_details_internalGetFeatureEnabledState;
  v3 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState || (v2 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v5 = ((__int64 (__fastcall *)(__int64, _QWORD))v2)(8299381LL, 0LL);
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
    v10 = `wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetImpl'::`2'::impl;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetImpl'::`2'::impl & 2) == 0 )
    {
      v18 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FrameworkScalability>::GetCachedFeatureEnabledState(
                         &`wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetImpl'::`2'::impl,
                         &v13);
      v10 = v18;
    }
    LODWORD(v15) = 0;
    BYTE4(v15) = 3;
    wil::details::ReportUsageToService(
      (__int64)&unk_1801AF150,
      0x6FD3F7u,
      (v10 >> 8) & 1,
      (v10 >> 9) & 1,
      (const struct FEATURE_LOGGED_TRAITS *)&v15,
      1,
      0);
    v11 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl & 2) == 0 )
    {
      v18 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState(
                         &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
                         v14);
      v11 = v18;
    }
    v16 = 0;
    v17 = 3;
    wil::details::ReportUsageToService(
      (__int64)&unk_1801AED68,
      0x79780Du,
      (v11 >> 8) & 1,
      (v11 >> 9) & 1,
      (const struct FEATURE_LOGGED_TRAITS *)&v16,
      1,
      0);
    v3 = 8;
  }
  *(_DWORD *)a2 &= ~8u;
  result = a2;
  *(_DWORD *)a2 |= v3;
  return result;
}
