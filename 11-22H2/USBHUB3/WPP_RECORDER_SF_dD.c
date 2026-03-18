/*
 * XREFs of WPP_RECORDER_SF_dD @ 0x1C0002668
 * Callers:
 *     HUBHTX_HubControlTransferComplete @ 0x1C0003330 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x1C0003694 (HUBHTX_ValidateAndCacheHubConfigDescriptor.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x1C0003CC0 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBHTX_PortControlTransferComplete @ 0x1C0003E90 (HUBHTX_PortControlTransferComplete.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x1C000569C (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHTX_ClearTtBufferControlTransferComplete @ 0x1C0006A80 (HUBHTX_ClearTtBufferControlTransferComplete.c)
 *     HUBPARENT_SetHubConfigurationComplete @ 0x1C0007230 (HUBPARENT_SetHubConfigurationComplete.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x1C0007900 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBPSM30_SettingU1TImeOut @ 0x1C0013550 (HUBPSM30_SettingU1TImeOut.c)
 *     HUBPSM30_SettingU2TImeOut @ 0x1C00136B0 (HUBPSM30_SettingU2TImeOut.c)
 *     HUBPDO_GetHubName @ 0x1C0015FA8 (HUBPDO_GetHubName.c)
 *     HUBPDO_RecordFailure @ 0x1C001611C (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C00162F0 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x1C001663C (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C0016840 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_InitializeInterfaceInformation @ 0x1C0016BE4 (HUBPDO_InitializeInterfaceInformation.c)
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x1C0016E38 (HUBPDO_ValidateSelectInterfaceUrb.c)
 *     HUBPDO_HandlePLDRRecovery @ 0x1C0019F3C (HUBPDO_HandlePLDRRecovery.c)
 *     HUBDSM_SettingSpeedFlagFor20Devices @ 0x1C0020C00 (HUBDSM_SettingSpeedFlagFor20Devices.c)
 *     HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1C0021C30 (HUBDSM_ValidatingMSOSContainerIdDescriptor.c)
 *     HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x1C00236E0 (HUBDSM_ComparingSerialNumberOnReEnumeration.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C0025990 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C0026FE4 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBDTX_ControlTransferComplete @ 0x1C00297F0 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C002B210 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C002B87C (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C002BE34 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader @ 0x1C002C4E0 (HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader.c)
 *     HUBDTX_LogBillboardEvent @ 0x1C002CF10 (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_LogAlternateMode @ 0x1C002D024 (HUBDTX_LogAlternateMode.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C0035ABC (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateConfigDescriptor @ 0x1C0035D4C (HUBDESC_InternalValidateConfigDescriptor.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1C0036374 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C00374D4 (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x1C0037F1C (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x1C00382D0 (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0038CA8 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x1C0039F54 (HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C003A2AC (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C003AB48 (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C003B100 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C003B9F4 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C003BD98 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x1C003C250 (HUBDESC_InternalValidateStringDescriptor.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x1C003C9B4 (HUBDESC_ValidateMSOSExtendedConfigDescriptor.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader @ 0x1C003CB64 (HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x1C003D164 (HUBDESC_Validate20HubDescriptor.c)
 *     HUBDESC_ValidateMsOs20DescriptorSet @ 0x1C003E68C (HUBDESC_ValidateMsOs20DescriptorSet.c)
 *     FWUPDATE_EvtIoInternalDeviceControl @ 0x1C003FED0 (FWUPDATE_EvtIoInternalDeviceControl.c)
 *     FWUPDATE_HubVendorControlTransferComplete @ 0x1C00408C0 (FWUPDATE_HubVendorControlTransferComplete.c)
 *     HUBFDO_MapDvsecUsb4Hosts @ 0x1C00773A4 (HUBFDO_MapDvsecUsb4Hosts.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C007A55C (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlTestPortPLDRRecovery @ 0x1C007AFE4 (HUBFDO_IoctlTestPortPLDRRecovery.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C007BF50 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_RegisterPortPLDRCapability @ 0x1C007FB98 (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBPDO_UnregisterPortPLDRCapability @ 0x1C0080384 (HUBPDO_UnregisterPortPLDRCapability.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x1C00807C8 (HUBPDO_InvokePortPLDRRecovery.c)
 *     HUBCONNECTOR_MapRootHubPorts @ 0x1C0081558 (HUBCONNECTOR_MapRootHubPorts.c)
 *     HUBREG_IsPortPLDRCapable @ 0x1C0088614 (HUBREG_IsPortPLDRCapable.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C0088CAC (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvaluateDSD @ 0x1C00895F8 (HUBACPI_EvaluateDSD.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C0089DE8 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044B40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dD(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, (__int64 *)va);
}
