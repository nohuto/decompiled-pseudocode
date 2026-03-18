/*
 * XREFs of DpiGetDxgAdapter @ 0x1C00151D0
 * Callers:
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1C0014B70 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgSetPowerComponentIdleCB @ 0x1C0025C10 (DxgSetPowerComponentIdleCB.c)
 *     ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x1C0046790 (-DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x1C004BB00 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentActiveNoWaitCB @ 0x1C004BB90 (DxgSetPowerComponentActiveNoWaitCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1C004BBC0 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x1C004BC40 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x1C004BCC0 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x1C004BD50 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkInvalidateHwContextCB @ 0x1C004BDD0 (DxgkInvalidateHwContextCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x1C004BFC0 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1C004C130 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x1C004C1B0 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C004C230 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgLogEtwEventCb @ 0x1C0050BE0 (DxgLogEtwEventCb.c)
 *     DxgkCbReportDiagnostic @ 0x1C0051FA0 (DxgkCbReportDiagnostic.c)
 *     DxgkMapFrameBufferPointerCB @ 0x1C0054A60 (DxgkMapFrameBufferPointerCB.c)
 *     DxgkPinFrameBufferForSave2CB @ 0x1C0054BB0 (DxgkPinFrameBufferForSave2CB.c)
 *     DxgkPinFrameBufferForSaveCB @ 0x1C0054C00 (DxgkPinFrameBufferForSaveCB.c)
 *     DxgkUnmapFrameBufferPointerCB @ 0x1C0054C40 (DxgkUnmapFrameBufferPointerCB.c)
 *     DxgkUnpinFrameBufferForSaveCB @ 0x1C0054CD0 (DxgkUnpinFrameBufferForSaveCB.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1C01C9150 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C01C9260 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgkMapContextAllocationCB @ 0x1C01C92D0 (DxgkMapContextAllocationCB.c)
 *     DxgDestroyContextAllocationCB @ 0x1C01C9360 (DxgDestroyContextAllocationCB.c)
 *     DxgCreateContextAllocationCB @ 0x1C01C9420 (DxgCreateContextAllocationCB.c)
 *     DxgMiniportQueryMonitorInterfaceCB @ 0x1C01D8220 (DxgMiniportQueryMonitorInterfaceCB.c)
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01DC200 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 *     DxgSetPowerComponentActiveCB @ 0x1C01F4740 (DxgSetPowerComponentActiveCB.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C021A870 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     DxgkUpdateContextAllocationCB @ 0x1C02E2DA0 (DxgkUpdateContextAllocationCB.c)
 *     DxgkNotifyCursorSupportChangeCB @ 0x1C032DC70 (DxgkNotifyCursorSupportChangeCB.c)
 *     ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C03B1FC0 (-AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOUR.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C03B2840 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C03B2BF0 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C03B3110 (-ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDxgAdapter(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 64);
    if ( v1 && *(_DWORD *)(v1 + 16) == 1953656900 && *(_DWORD *)(v1 + 20) == 2 )
      return *(_QWORD *)(v1 + 3896);
    WdLogSingleEntry1(2LL, a1);
  }
  else
  {
    WdLogSingleEntry0(2LL);
  }
  return 0LL;
}
