/*
 * XREFs of memset @ 0x1C0044EC0
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001560 (McGenControlCallbackV2.c)
 *     HUBHTX_SendInterruptTransfer @ 0x1C00039B0 (HUBHTX_SendInterruptTransfer.c)
 *     HUBPARENT_SetHubConfiguration @ 0x1C00073A8 (HUBPARENT_SetHubConfiguration.c)
 *     HUBPARENT_ResetInterruptPipe @ 0x1C0007A80 (HUBPARENT_ResetInterruptPipe.c)
 *     HUBPARENT_ResetHub @ 0x1C0007D60 (HUBPARENT_ResetHub.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x1C0008000 (HUBPARENT_GetInfoFromParentUsingParentIoctlComplete.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1C00081BC (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 *     HUBSM_FindAndSetTargetState @ 0x1C000A96C (HUBSM_FindAndSetTargetState.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x1C000CFB4 (HUBFDO_GetDeviceCapabilities.c)
 *     HUBFDO_BuildUsb20HubDescriptor @ 0x1C000E284 (HUBFDO_BuildUsb20HubDescriptor.c)
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000E3BC (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x1C000EF38 (HUBFDO_SetupHubPostErrataQuery.c)
 *     HUBFDO_CreateDeviceInterfaceForBillboard @ 0x1C000F4B0 (HUBFDO_CreateDeviceInterfaceForBillboard.c)
 *     HUBFDO_CleanupDeviceInterfaceForBillboard @ 0x1C000F6B4 (HUBFDO_CleanupDeviceInterfaceForBillboard.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x1C000FD58 (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMUX_CreatePSM @ 0x1C000FDA8 (HUBMUX_CreatePSM.c)
 *     RtlStringCchPrintfExW @ 0x1C0013F1C (RtlStringCchPrintfExW.c)
 *     HUBPDO_GetHubName @ 0x1C0015FA8 (HUBPDO_GetHubName.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C00162F0 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_QueryForD3ColdSupportInAcpi @ 0x1C0017584 (HUBPDO_QueryForD3ColdSupportInAcpi.c)
 *     HUBPDO_SubmitDeviceWakeNotificationIoctl @ 0x1C001C460 (HUBPDO_SubmitDeviceWakeNotificationIoctl.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x1C00256D0 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C00267C8 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x1C0026E0C (HUBUCX_UpdateDeviceInfoUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C0026FE4 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C0027854 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C002AD60 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C002B210 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C002BE34 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_LogBillboardEvent @ 0x1C002CF10 (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_LogAlternateMode @ 0x1C002D024 (HUBDTX_LogAlternateMode.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C002E900 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C002EAB0 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C002F738 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 *     HUBMISC_CreateNewDSM @ 0x1C00311F8 (HUBMISC_CreateNewDSM.c)
 *     HUBMISC_ControlTransfer @ 0x1C0032554 (HUBMISC_ControlTransfer.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0038CA8 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C003BD98 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x1C003D720 (HUBDESC_ValidateMsOs20ConfigurationSubset.c)
 *     HUBDESC_ValidateMsOs20FunctionSubset @ 0x1C003D9E0 (HUBDESC_ValidateMsOs20FunctionSubset.c)
 *     WMI_QueryInstanceDeviceNodeInfo @ 0x1C003F5E0 (WMI_QueryInstanceDeviceNodeInfo.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C0041EC4 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBDInternal_BuildServicePath @ 0x1C0042148 (USBDInternal_BuildServicePath.c)
 *     USBD_CreateHandle @ 0x1C004236C (USBD_CreateHandle.c)
 *     DereferenceDeviceResetInterface @ 0x1C0043D14 (DereferenceDeviceResetInterface.c)
 *     CreateNewEventEntry @ 0x1C0043E74 (CreateNewEventEntry.c)
 *     memcpy_s @ 0x1C0044850 (memcpy_s.c)
 *     WppTraceCallback @ 0x1C0075440 (WppTraceCallback.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C0076680 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C0078790 (HUBFDO_IoctlGetPortStatus.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C007896C (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C0078B58 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C0078ED4 (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x1C0079114 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x1C00792F0 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C007952C (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C0079918 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x1C0079EC4 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C007A17C (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C007A55C (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C007BF50 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C007DE24 (HUBPDO_CreatePdoInternal.c)
 *     HUBPDO_RegisterPortPLDRCapability @ 0x1C007FB98 (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x1C00807C8 (HUBPDO_InvokePortPLDRRecovery.c)
 *     HUBREG_QueryUxdPortKey @ 0x1C0085E2C (HUBREG_QueryUxdPortKey.c)
 *     HUBREG_UpdateUxdSettings @ 0x1C0086398 (HUBREG_UpdateUxdSettings.c)
 *     HUBREG_DeleteUxdSubKeys @ 0x1C00869D0 (HUBREG_DeleteUxdSubKeys.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C0088CAC (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C00891B4 (HUBACPI_EvalAcpiMethodEx.c)
 *     WMI_AcquireHubName @ 0x1C008A7EC (WMI_AcquireHubName.c)
 *     WMI_QueryInstanceHubNodeInfo @ 0x1C008AAC0 (WMI_QueryInstanceHubNodeInfo.c)
 *     WMI_RegisterHub @ 0x1C008AFE4 (WMI_RegisterHub.c)
 *     WMI_RegisterDevice @ 0x1C008B1CC (WMI_RegisterDevice.c)
 *     WMI_RegisterSurpriseRemovalNotificationInstance @ 0x1C008B304 (WMI_RegisterSurpriseRemovalNotificationInstance.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x1C008BB18 (FWUPDATE_CreateFirmwareUpdateDevice.c)
 *     TUNNEL_EvtWorkitemPnpInterfaceNotification @ 0x1C008C930 (TUNNEL_EvtWorkitemPnpInterfaceNotification.c)
 *     SleepstudyHelperInitializeOnce @ 0x1C008E6B0 (SleepstudyHelperInitializeOnce.c)
 *     QueryDeviceResetInterface @ 0x1C008E828 (QueryDeviceResetInterface.c)
 *     CreateTlgAggregateSession @ 0x1C008EDF8 (CreateTlgAggregateSession.c)
 *     memset$thunk$772440563353939046 @ 0x1C0090010 (memset$thunk$772440563353939046.c)
 *     DriverEntry @ 0x1C0092234 (DriverEntry.c)
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
