/*
 * XREFs of memset @ 0x1C0043B00
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001130 (McGenControlCallbackV2.c)
 *     HUBHTX_SendInterruptTransfer @ 0x1C0003544 (HUBHTX_SendInterruptTransfer.c)
 *     HUBPARENT_SetHubConfiguration @ 0x1C0006F04 (HUBPARENT_SetHubConfiguration.c)
 *     HUBPARENT_ResetInterruptPipe @ 0x1C00075E0 (HUBPARENT_ResetInterruptPipe.c)
 *     HUBPARENT_ResetHub @ 0x1C00078C0 (HUBPARENT_ResetHub.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x1C0007B60 (HUBPARENT_GetInfoFromParentUsingParentIoctlComplete.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1C0007D1C (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 *     HUBSM_FindAndSetTargetState @ 0x1C000A49C (HUBSM_FindAndSetTargetState.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x1C000C2C8 (HUBFDO_GetDeviceCapabilities.c)
 *     HUBFDO_BuildUsb20HubDescriptor @ 0x1C000D474 (HUBFDO_BuildUsb20HubDescriptor.c)
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000D5AC (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x1C000E168 (HUBFDO_SetupHubPostErrataQuery.c)
 *     HUBFDO_CreateDeviceInterfaceForBillboard @ 0x1C000E6E0 (HUBFDO_CreateDeviceInterfaceForBillboard.c)
 *     HUBFDO_CleanupDeviceInterfaceForBillboard @ 0x1C000E8E4 (HUBFDO_CleanupDeviceInterfaceForBillboard.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x1C000ED84 (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMUX_CreatePSM @ 0x1C000EDD4 (HUBMUX_CreatePSM.c)
 *     RtlStringCchPrintfExW @ 0x1C0012EF4 (RtlStringCchPrintfExW.c)
 *     HUBPDO_GetHubName @ 0x1C0014F9C (HUBPDO_GetHubName.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C00152E4 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_QueryForD3ColdSupportInAcpi @ 0x1C0016534 (HUBPDO_QueryForD3ColdSupportInAcpi.c)
 *     HUBPDO_SubmitDeviceWakeNotificationIoctl @ 0x1C001A140 (HUBPDO_SubmitDeviceWakeNotificationIoctl.c)
 *     HUBDSM_UpdatingDeviceInformationInEnum @ 0x1C001E460 (HUBDSM_UpdatingDeviceInformationInEnum.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x1C0023340 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C0024278 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C00248B0 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C0025114 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0028588 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C0028A40 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_LogBillboardEvent @ 0x1C002A548 (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_LogAlternateMode @ 0x1C002A65C (HUBDTX_LogAlternateMode.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C002BF20 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C002C0D0 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C002CD4C (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 *     HUBMISC_CreateNewDSM @ 0x1C002E6B0 (HUBMISC_CreateNewDSM.c)
 *     HUBMISC_ControlTransfer @ 0x1C002FA0C (HUBMISC_ControlTransfer.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C003649C (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0039550 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x1C003AEC0 (HUBDESC_ValidateMsOs20ConfigurationSubset.c)
 *     HUBDESC_ValidateMsOs20FunctionSubset @ 0x1C003B190 (HUBDESC_ValidateMsOs20FunctionSubset.c)
 *     WMI_QueryInstanceDeviceNodeInfo @ 0x1C003D980 (WMI_QueryInstanceDeviceNodeInfo.c)
 *     TelemetryData_CreateReport @ 0x1C003F810 (TelemetryData_CreateReport.c)
 *     InitializeTelemetryAssertsKM @ 0x1C003FA50 (InitializeTelemetryAssertsKM.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C00405A4 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBDInternal_BuildServicePath @ 0x1C0040828 (USBDInternal_BuildServicePath.c)
 *     USBD_CreateHandle @ 0x1C0040A4C (USBD_CreateHandle.c)
 *     DereferenceDeviceResetInterface @ 0x1C00423F0 (DereferenceDeviceResetInterface.c)
 *     WerpAllocateAndInitializeSid @ 0x1C0042680 (WerpAllocateAndInitializeSid.c)
 *     WerKernelSubmitReport @ 0x1C0042EF8 (WerKernelSubmitReport.c)
 *     memcpy_s @ 0x1C00435F0 (memcpy_s.c)
 *     WppTraceCallback @ 0x1C0073150 (WppTraceCallback.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C0074380 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C0075E68 (HUBFDO_IoctlGetPortStatus.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C0076044 (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C0076230 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C00765AC (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x1C00767EC (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x1C00769C8 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C0076BFC (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C0077014 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x1C00775E8 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C00778A0 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C0077C80 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C0079110 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C007ABD4 (HUBPDO_CreatePdoInternal.c)
 *     HUBREG_QueryUxdPortKey @ 0x1C00818CC (HUBREG_QueryUxdPortKey.c)
 *     HUBREG_UpdateUxdSettings @ 0x1C0081E38 (HUBREG_UpdateUxdSettings.c)
 *     HUBREG_DeleteUxdSubKeys @ 0x1C0082464 (HUBREG_DeleteUxdSubKeys.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C00843C8 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C00848B4 (HUBACPI_EvalAcpiMethodEx.c)
 *     WMI_AcquireHubName @ 0x1C0085ED8 (WMI_AcquireHubName.c)
 *     WMI_QueryInstanceHubNodeInfo @ 0x1C00861A0 (WMI_QueryInstanceHubNodeInfo.c)
 *     WMI_RegisterHub @ 0x1C00866C4 (WMI_RegisterHub.c)
 *     WMI_RegisterDevice @ 0x1C00868AC (WMI_RegisterDevice.c)
 *     WMI_RegisterSurpriseRemovalNotificationInstance @ 0x1C00869E4 (WMI_RegisterSurpriseRemovalNotificationInstance.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x1C00871F8 (FWUPDATE_CreateFirmwareUpdateDevice.c)
 *     TUNNEL_EvtWorkitemPnpInterfaceNotification @ 0x1C0087FF0 (TUNNEL_EvtWorkitemPnpInterfaceNotification.c)
 *     TelemetryData_pInitWerContext @ 0x1C0089B74 (TelemetryData_pInitWerContext.c)
 *     SleepstudyHelperInitializeOnce @ 0x1C008A360 (SleepstudyHelperInitializeOnce.c)
 *     QueryDeviceResetInterface @ 0x1C008A4CC (QueryDeviceResetInterface.c)
 *     DriverEntry @ 0x1C008C008 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
