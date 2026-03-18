/*
 * XREFs of ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1C01A965C
 * Callers:
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01A8B9C (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01A9B50 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESE.c)
 *     BmlGetNextBestTargetMode @ 0x1C01B55A0 (BmlGetNextBestTargetMode.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C01B5B6C (BmlCompareTargetModesWithConstraint.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1C01B5CB4 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     _BmlBuildVirtualRefreshRateListFromTargetModeSet @ 0x1C03ABA68 (_BmlBuildVirtualRefreshRateListFromTargetModeSet.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C03AC0EC (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 */

bool __fastcall DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(DMMVIDPNTARGETMODE *this)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx

  if ( !*((_BYTE *)this + 140) )
    return 0;
  v3 = *((_QWORD *)this + 5);
  if ( !v3 )
  {
    WdLogSingleEntry0(1LL);
    v3 = *((_QWORD *)this + 5);
  }
  v4 = *(_QWORD *)(v3 + 112);
  if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)(v4 + 96) + 80LL)) )
    return 1;
  v5 = *(_QWORD *)(v4 + 40);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    v5 = *(_QWORD *)(v4 + 40);
  }
  v6 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(v5 + 64) + 48);
  v9 = *(_QWORD *)(v6 + 8);
  if ( !v9 )
  {
    WdLogSingleEntry0(1LL);
    v9 = *(_QWORD *)(v6 + 8);
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_EnableVirtualRefreshRateOnExternalMonitor__private_reporting,
    0x1E9E2E2u,
    v7,
    v8,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
    0);
  return *(_DWORD *)(v9 + 528) != 0;
}
