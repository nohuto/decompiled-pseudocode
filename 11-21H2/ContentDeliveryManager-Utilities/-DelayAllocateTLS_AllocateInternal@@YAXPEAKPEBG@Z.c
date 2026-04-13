/*
 * XREFs of ?DelayAllocateTLS_AllocateInternal@@YAXPEAKPEBG@Z @ 0x1800318E4
 * Callers:
 *     ??R_lambda_a1ff6082cb2eb641f5b40d58c2b5fcec_@@QEBAJAEAVCNoResult@Internal@Windows@@@Z @ 0x18002B1F8 (--R_lambda_a1ff6082cb2eb641f5b40d58c2b5fcec_@@QEBAJAEAVCNoResult@Internal@Windows@@@Z.c)
 * Callees:
 *     ??$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z @ 0x18002403C (--$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DelayInitializeShellTLS@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180034A30 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DelayInitializeShellTLS@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

void __fastcall DelayAllocateTLS_AllocateInternal(unsigned int *a1, const unsigned __int16 *a2)
{
  unsigned int v2; // r8d
  DWORD v3; // ecx
  const wchar_t *v4; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+70h] [rbp+18h] BYREF
  char v6; // [rsp+74h] [rbp+1Ch]
  char v7; // [rsp+78h] [rbp+20h] BYREF

  v2 = `wil::Feature<__WilFeatureTraits_Feature_DelayInitializeShellTLS>::GetImpl'::`2'::impl;
  v4 = L"ThumbnailCache";
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DelayInitializeShellTLS>::GetImpl'::`2'::impl & 2) == 0 )
    v2 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DelayInitializeShellTLS>::GetCachedFeatureEnabledState(
                      &`wil::Feature<__WilFeatureTraits_Feature_DelayInitializeShellTLS>::GetImpl'::`2'::impl,
                      &v7);
  v5 = 0;
  v6 = 3;
  wil::details::ReportUsageToService(&unk_1801AF428, 24087705LL, (v2 >> 8) & 1, (v2 >> 9) & 1, &v5, 1, 3);
  v3 = TlsAlloc();
  if ( v3 != -1 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)&g_tlsThumbnailCache, v3, -1) == -1 )
      DelayAllocateTLSTelemetry::Allocated<unsigned short const * &>((__int64 *)&v4);
    else
      TlsFree(v3);
  }
}
