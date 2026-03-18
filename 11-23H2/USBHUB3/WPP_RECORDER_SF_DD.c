/*
 * XREFs of WPP_RECORDER_SF_DD @ 0x1C0002670
 * Callers:
 *     HUBHTX_HubControlTransferComplete @ 0x1C0003340 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x1C00036A4 (HUBHTX_ValidateAndCacheHubConfigDescriptor.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x1C0003CD0 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBHTX_PortControlTransferComplete @ 0x1C0003EA0 (HUBHTX_PortControlTransferComplete.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x1C00056AC (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHTX_ClearTtBufferControlTransferComplete @ 0x1C0006A90 (HUBHTX_ClearTtBufferControlTransferComplete.c)
 *     HUBPARENT_SetHubConfigurationComplete @ 0x1C0007240 (HUBPARENT_SetHubConfigurationComplete.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x1C0007910 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBPSM30_SettingU1TImeOut @ 0x1C00136A0 (HUBPSM30_SettingU1TImeOut.c)
 *     HUBPSM30_SettingU2TImeOut @ 0x1C0013800 (HUBPSM30_SettingU2TImeOut.c)
 *     HUBPDO_GetHubName @ 0x1C00160F8 (HUBPDO_GetHubName.c)
 *     HUBPDO_RecordFailure @ 0x1C001626C (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0016440 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x1C001678C (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C0016990 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_InitializeInterfaceInformation @ 0x1C0016D34 (HUBPDO_InitializeInterfaceInformation.c)
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x1C0016F88 (HUBPDO_ValidateSelectInterfaceUrb.c)
 *     HUBPDO_HandlePLDRRecovery @ 0x1C001A08C (HUBPDO_HandlePLDRRecovery.c)
 *     HUBDSM_SettingSpeedFlagFor20Devices @ 0x1C0020D30 (HUBDSM_SettingSpeedFlagFor20Devices.c)
 *     HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1C0021D60 (HUBDSM_ValidatingMSOSContainerIdDescriptor.c)
 *     HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x1C0023810 (HUBDSM_ComparingSerialNumberOnReEnumeration.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C0025AC0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C0027114 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBDTX_ControlTransferComplete @ 0x1C0029920 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C002B340 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C002B9AC (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C002BF64 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader @ 0x1C002C610 (HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader.c)
 *     HUBDTX_LogBillboardEvent @ 0x1C002D040 (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_LogAlternateMode @ 0x1C002D154 (HUBDTX_LogAlternateMode.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C0035BEC (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateConfigDescriptor @ 0x1C0035E7C (HUBDESC_InternalValidateConfigDescriptor.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1C00364A4 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C0037604 (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x1C003804C (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x1C0038400 (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0038DD8 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x1C003A084 (HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C003A3DC (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C003AC78 (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C003B230 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C003BB24 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C003BEC8 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x1C003C380 (HUBDESC_InternalValidateStringDescriptor.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x1C003CAE4 (HUBDESC_ValidateMSOSExtendedConfigDescriptor.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader @ 0x1C003CC94 (HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x1C003D294 (HUBDESC_Validate20HubDescriptor.c)
 *     HUBDESC_ValidateMsOs20DescriptorSet @ 0x1C003E7BC (HUBDESC_ValidateMsOs20DescriptorSet.c)
 *     FWUPDATE_EvtIoInternalDeviceControl @ 0x1C0040000 (FWUPDATE_EvtIoInternalDeviceControl.c)
 *     FWUPDATE_HubVendorControlTransferComplete @ 0x1C00409F0 (FWUPDATE_HubVendorControlTransferComplete.c)
 *     HUBFDO_MapDvsecUsb4Hosts @ 0x1C00783A4 (HUBFDO_MapDvsecUsb4Hosts.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C007B55C (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlTestPortPLDRRecovery @ 0x1C007BFE4 (HUBFDO_IoctlTestPortPLDRRecovery.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C007CF20 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_RegisterPortPLDRCapability @ 0x1C0080B64 (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBPDO_UnregisterPortPLDRCapability @ 0x1C0081350 (HUBPDO_UnregisterPortPLDRCapability.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x1C0081794 (HUBPDO_InvokePortPLDRRecovery.c)
 *     HUBCONNECTOR_MapRootHubPorts @ 0x1C0082524 (HUBCONNECTOR_MapRootHubPorts.c)
 *     HUBREG_IsPortPLDRCapable @ 0x1C00895D4 (HUBREG_IsPortPLDRCapable.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C0089C6C (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvaluateDSD @ 0x1C008A5B8 (HUBACPI_EvaluateDSD.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C008ADA8 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C70 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DD(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
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
