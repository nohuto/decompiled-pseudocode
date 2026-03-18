/*
 * XREFs of WPP_RECORDER_SF_sds @ 0x1C003609C
 * Callers:
 *     XilEndpoint_Create @ 0x1C0001DEC (XilEndpoint_Create.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C000239C (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_CompleteConfigureEndpointRequest @ 0x1C00025C0 (UsbDevice_CompleteConfigureEndpointRequest.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C00027B0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     Debug_FreAssertMsg @ 0x1C00028EC (Debug_FreAssertMsg.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C00029BC (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     DynamicLock_Release @ 0x1C0003E5C (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0004248 (DynamicLock_Acquire.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x1C0005CB4 (Controller_LowerAndTrackIrql.c)
 *     Control_Transfer_Map @ 0x1C0006150 (Control_Transfer_Map.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C00079C0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_MapStage @ 0x1C0008740 (Isoch_MapStage.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0009BB0 (TR_AddTRBRangeToSecureTransferRing.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C000A120 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C000E7D0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_MapStage @ 0x1C000F118 (Bulk_MapStage.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010230 (Controller_WdfEvtDeviceD0Entry.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C00105E0 (XilDeviceSlot_SetDeviceContext.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0010670 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C0010840 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C00117FC (Wmi_CreateControllerCapabilities.c)
 *     Controller_Start @ 0x1C0011B68 (Controller_Start.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0011FE0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00125C0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0012CD0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0013700 (RootHub_UcxEvtInterruptTransfer.c)
 *     Register_ControllerReset @ 0x1C0013D48 (Register_ControllerReset.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0014130 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Command_Initialize @ 0x1C001471C (Command_Initialize.c)
 *     XilCommand_Create @ 0x1C0015238 (XilCommand_Create.c)
 *     XilUsbDevice_Create @ 0x1C0015F1C (XilUsbDevice_Create.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C0016478 (XilDeviceSlot_PrepareHardware.c)
 *     XilDeviceSlot_Create @ 0x1C00173C8 (XilDeviceSlot_Create.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C001843C (UsbDevice_UpdateUsbDevice.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x1C0018D38 (Controller_AllocateIrqlTrackingArray.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002E930 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_AllocateSecureResources @ 0x1C002FA04 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C002FB9C (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C002FD54 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C002FEB4 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C0030014 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0030174 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C003045C (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C00305C0 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     Controller_D0EntryRestoreState @ 0x1C0030DA4 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C00310D8 (Controller_D0ExitSaveState.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C003142C (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0034C90 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0034EA0 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C0036424 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C003659C (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C0036724 (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C00368A8 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C0036A14 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0036BC0 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C0036D28 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0036EB4 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C0037038 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C00374A0 (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_GetRemoteHandle @ 0x1C00377C4 (XilEndpoint_GetRemoteHandle.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C003AAF0 (Endpoint_UcxEvtEndpointReset.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C003DEF0 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C003E1D0 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C003E828 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     TR_AcquireSecureSegments @ 0x1C003F134 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C003F59C (TR_CreateSecureObject.c)
 *     TR_FreeSecureTransferSegments @ 0x1C003FAF0 (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferSegment @ 0x1C003FC2C (TR_InitializeTransferSegment.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0045964 (XilUsbDevice_CreateSecureObject.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C00467DC (UsbDevice_GetEndpointOffloadInformation.c)
 *     UsbDevice_HandleAssignPinsForEndpointsToOffloadState @ 0x1C0046AD0 (UsbDevice_HandleAssignPinsForEndpointsToOffloadState.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x1C0046CC8 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x1C0046DC8 (UsbDevice_HandleUnassignPinsForOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnhandledEventReceivedState @ 0x1C0046F14 (UsbDevice_HandleUnhandledEventReceivedState.c)
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x1C00474F0 (UsbDevice_SetResourceAssignmentCompletion.c)
 *     UsbDevice_StopEndpointToOffloadedEndpointCompletion @ 0x1C0047650 (UsbDevice_StopEndpointToOffloadedEndpointCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const char *a6,
        char a7,
        const char *a8)
{
  const char *v8; // rdi
  __int64 v9; // rbx
  const char *v10; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r8
  const char *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  int v20; // [rsp+20h] [rbp-58h]

  v8 = a8;
  v9 = -1LL;
  v10 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a8 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a8[v12] );
    }
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = a6;
    if ( !a6 )
      v15 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5ace6a9c3ff4347ed3a705afad901349_Traceguids,
      10LL,
      v15,
      v14,
      &a7);
  }
  if ( v8 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v8[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !v8 )
    v8 = "NULL";
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v18 = v9 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  if ( !a6 )
    v10 = "NULL";
  LOWORD(v20) = 10;
  return WppAutoLogTrace(
           a1,
           2LL,
           2LL,
           &WPP_5ace6a9c3ff4347ed3a705afad901349_Traceguids,
           v20,
           v10,
           v18,
           &a7,
           4LL,
           v8,
           v17,
           0LL);
}
