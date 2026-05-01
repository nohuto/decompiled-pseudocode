/*
 * XREFs of ?DelayAllocateTLS_AllocateInternal@@YAXPEAKPEBG@Z @ 0x1805EB5AC
 * Callers:
 *     ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1805ED704 (-GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z @ 0x1805EA0EC (--$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DelayInitializeShellTLS@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805EE870 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DelayInitializeShellTLS@@@details@wil@@QE.c)
 */

void __fastcall DelayAllocateTLS_AllocateInternal(unsigned int *a1, const unsigned __int16 *a2)
{
  DWORD v2; // ecx
  const wchar_t *v3; // [rsp+20h] [rbp-18h] BYREF

  LOBYTE(a2) = 1;
  v3 = L"ThumbnailCache";
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DelayInitializeShellTLS>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DelayInitializeShellTLS>::GetImpl'::`2'::impl,
    a2);
  v2 = TlsAlloc();
  if ( v2 != -1 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)&g_tlsThumbnailCache, v2, -1) == -1 )
      DelayAllocateTLSTelemetry::Allocated<unsigned short const * &>((__int64 *)&v3);
    else
      TlsFree(v2);
  }
}
