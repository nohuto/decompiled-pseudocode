/*
 * XREFs of ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x18066189C
 * Callers:
 *     ??$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemetry@@SAX$$QEAW4SnapRegion@@AEAUCRect@Geometry@@1$$QEAPEBGAEAPEAUHWND__@@@Z @ 0x18065CDCC (--$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemet.c)
 *     ??$AppUnsnapped@PEBGAEAPEAUHWND__@@@CSnapComponentTelemetry@@SAX$$QEAPEBGAEAPEAUHWND__@@@Z @ 0x18065CEB4 (--$AppUnsnapped@PEBGAEAPEAUHWND__@@@CSnapComponentTelemetry@@SAX$$QEAPEBGAEAPEAUHWND__@@@Z.c)
 *     ??$SnapRegionDetected@AEAUtagPOINT@@AEBW4SnapRegion@@AEAKPEAUIImmersiveMonitor@@@CSnapComponentTelemetry@@SAXAEAUtagPOINT@@AEBW4SnapRegion@@AEAK$$QEAPEAUIImmersiveMonitor@@@Z @ 0x18065D33C (--$SnapRegionDetected@AEAUtagPOINT@@AEBW4SnapRegion@@AEAKPEAUIImmersiveMonitor@@@CSnapComponentT.c)
 *     ??$SnapWindow@AEAPEAUHWND__@@AEAPEBUtagRECT@@AEAK@CSnapComponentTelemetry@@SAXAEAPEAUHWND__@@AEAPEBUtagRECT@@AEAK@Z @ 0x18065D414 (--$SnapWindow@AEAPEAUHWND__@@AEAPEBUtagRECT@@AEAK@CSnapComponentTelemetry@@SAXAEAPEAUHWND__@@AEA.c)
 *     ??$SnapWindowWithGuidedSnapAssist@AEA_KAEAURect@Foundation@Windows@@AEAI@CSnapComponentTelemetry@@SAXAEA_KAEAURect@Foundation@Windows@@AEAI@Z @ 0x18065D4D4 (--$SnapWindowWithGuidedSnapAssist@AEA_KAEAURect@Foundation@Windows@@AEAI@CSnapComponentTelemetry.c)
 *     ??$InvalidAppInEnumeration@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@PEAUIApplicationViewPosition@@@CSnapComponentTelemetry@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$$QEAPEAUIApplicationViewPosition@@@Z @ 0x1806663FC (--$InvalidAppInEnumeration@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@W.c)
 *     ??$SnapAssistTriggered@AEBUCRect@Geometry@@HAEAW4SNAP_ASSIST_VIEW_FLAGS@@@CSnapComponentTelemetry@@SAXAEBUCRect@Geometry@@$$QEAHAEAW4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180669140 (--$SnapAssistTriggered@AEBUCRect@Geometry@@HAEAW4SNAP_ASSIST_VIEW_FLAGS@@@CSnapComponentTelemetr.c)
 *     ??$SnapWindowFromSnapAssist@AEAPEAUHWND__@@AEAURect@Foundation@Windows@@I@CSnapComponentTelemetry@@SAXAEAPEAUHWND__@@AEAURect@Foundation@Windows@@$$QEAI@Z @ 0x180669210 (--$SnapWindowFromSnapAssist@AEAPEAUHWND__@@AEAURect@Foundation@Windows@@I@CSnapComponentTelemetr.c)
 *     ??$SnappedAppUsage@PEAGAEBQEAUHWND__@@_J@CSnapComponentTelemetry@@SAX$$QEAPEAGAEBQEAUHWND__@@$$QEA_J@Z @ 0x18066F6BC (--$SnappedAppUsage@PEAGAEBQEAUHWND__@@_J@CSnapComponentTelemetry@@SAX$$QEAPEAGAEBQEAUHWND__@@$$Q.c)
 *     ??$SnapFillType@AEAW4SnapRegion@@PEBGPEAUHWND__@@W40SnapComponentTelemetry@@AEBW4FillRule@SnapLayoutHelpers@@AEBW445@AEBW4Edge@5@AEBW465@@CSnapComponentTelemetry@@SAXAEAW4SnapRegion@@$$QEAPEBG$$QEAPEAUHWND__@@$$QEAW4SnapFillType@SnapComponentTelemetry@@AEBW4FillRule@SnapLayoutHelpers@@4AEBW4Edge@6@5@Z @ 0x1806755E4 (--$SnapFillType@AEAW4SnapRegion@@PEBGPEAUHWND__@@W40SnapComponentTelemetry@@AEBW4FillRule@SnapLa.c)
 *     ??$ShowGuidedSnapAssist@URect@Foundation@Windows@winrt@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@CSnapComponentTelemetry@@SAX$$QEAURect@Foundation@Windows@winrt@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806876E4 (--$ShowGuidedSnapAssist@URect@Foundation@Windows@winrt@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@CSnapCompo.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800173DC (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C3614 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

char __fastcall CSnapComponentTelemetry::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( __std_init_once_begin_initialize(&`CSnapComponentTelemetry::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v2 = &`CSnapComponentTelemetry::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_18098EBC8;
    qword_18098EBC8 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}
