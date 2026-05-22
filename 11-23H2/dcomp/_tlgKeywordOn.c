/*
 * XREFs of _tlgKeywordOn @ 0x18006445C
 * Callers:
 *     DCompositionCreateManipulationStats @ 0x180003AC0 (DCompositionCreateManipulationStats.c)
 *     ?SendTelemetry@CAnimationFrameStats@@MEAAXXZ @ 0x180014050 (-SendTelemetry@CAnimationFrameStats@@MEAAXXZ.c)
 *     ?Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV12@@Z @ 0x18001D994 (-Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800643D8 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     DCompositionCreateAnimationStats @ 0x180064410 (DCompositionCreateAnimationStats.c)
 *     _lambda_056f8fc17ddf877fd0b445b7a631ca98_::_lambda_invoker_cdecl_ @ 0x180084660 (_lambda_056f8fc17ddf877fd0b445b7a631ca98_--_lambda_invoker_cdecl_.c)
 *     ?Duplicate@InputSink@InputTraceLogging@@SAXPEAX0@Z @ 0x1800846C8 (-Duplicate@InputSink@InputTraceLogging@@SAXPEAX0@Z.c)
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180099590 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ??R_lambda_705dd68f1b823bc41096a82e28a04b4b_@@QEBA@PEBG0PEBDPEAIG@Z @ 0x18009AA68 (--R_lambda_705dd68f1b823bc41096a82e28a04b4b_@@QEBA@PEBG0PEBDPEAIG@Z.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800EBA80 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReroutePointer@DComp@InputTraceLogging@@SAXKJ@Z @ 0x1800F8F68 (-ReroutePointer@DComp@InputTraceLogging@@SAXKJ@Z.c)
 *     ?LogTelemetryLocked@CTelemetryHelper@@AEAAXXZ @ 0x1800FCD20 (-LogTelemetryLocked@CTelemetryHelper@@AEAAXXZ.c)
 *     ?TryRedirectForManipulation@DComp@InputTraceLogging@@SAXK_KJ@Z @ 0x180153FDC (-TryRedirectForManipulation@DComp@InputTraceLogging@@SAXK_KJ@Z.c)
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     DCompositionCreateInteractionStats @ 0x1801A6270 (DCompositionCreateInteractionStats.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
