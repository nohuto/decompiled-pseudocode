/*
 * XREFs of _tlgKeywordOn @ 0x18003E1A0
 * Callers:
 *     ?SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ @ 0x180004F30 (-SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ.c)
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x1800064E0 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1800107E0 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800108F8 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180015B1C (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180024CFC (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E9B0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z @ 0x180036160 (-TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z.c)
 *     ?IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x18003DD24 (-IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@.c)
 *     ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18003DED8 (-IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x18003E0B4 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 *     ?IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x18003E928 (-IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@.c)
 *     ?OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ @ 0x18005A700 (-OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ.c)
 *     ?InitializeTelemetry@CDisplayAnimatedVisual@@AEAAXXZ @ 0x18005BCB0 (-InitializeTelemetry@CDisplayAnimatedVisual@@AEAAXXZ.c)
 *     ?UDwmCreatingVirtualMonitor_@UDwmTrace@@QEAAXXZ @ 0x18009DD48 (-UDwmCreatingVirtualMonitor_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmDisplayIsPhysicalMonitorDevice_@UDwmTrace@@QEAAXXZ @ 0x18009DDE0 (-UDwmDisplayIsPhysicalMonitorDevice_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ @ 0x18009DE78 (-UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ @ 0x18009DF10 (-UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmHolographicOnChanged_@UDwmTrace@@QEAAXXZ @ 0x18009DFA8 (-UDwmHolographicOnChanged_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmRemovingVirtualMonitor_@UDwmTrace@@QEAAXXZ @ 0x18009E040 (-UDwmRemovingVirtualMonitor_@UDwmTrace@@QEAAXXZ.c)
 *     ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B6E70 (-StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B8778 (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BA940 (-StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BB2C4 (-ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ??$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x1800CB274 (--$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAP.c)
 *     ??$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z @ 0x1800CB34C (--$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z.c)
 *     ??$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z @ 0x1800CB3EC (--$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z.c)
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800CB624 (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800CBFA0 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800CC390 (-ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800CC408 (-ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800CC480 (-ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z @ 0x1800CC4F8 (-StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z.c)
 *     ?StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800CC5F4 (-StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 *     ?StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800CC6F0 (-StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800CC7CC (-StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800CC8A8 (-StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800CD154 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?StopActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800CD250 (-StopActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800CD490 (-StopActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800CD6D0 (-StopActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800CD910 (-StopActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800CDB50 (-StopActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ @ 0x1800CFA24 (-_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800D06CC (-zInternalStart@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800D31FC (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x1800DB27C (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800E5350 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800E5AA4 (-ReportStopActivity@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?PostTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F4688 (-PostTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@win.c)
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
