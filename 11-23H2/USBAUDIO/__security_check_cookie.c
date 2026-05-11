/*
 * XREFs of __security_check_cookie @ 0x1C0009730
 * Callers:
 *     WmiLogStreamPosition @ 0x1C0003D30 (WmiLogStreamPosition.c)
 *     WmiLogEvent @ 0x1C0005B0C (WmiLogEvent.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x1C0007318 (McTemplateK0zq_EtwWriteTransfer.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00098DC (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0009920 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00136C0 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     USBD_CreateHandle @ 0x1C0018624 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C0018AB8 (USBD_QueryUsbCapability.c)
 *     __GSHandlerCheckCommon @ 0x1C00192FC (__GSHandlerCheckCommon.c)
 *     _handle_error @ 0x1C0019898 (_handle_error.c)
 *     RaiseException @ 0x1C0019B00 (RaiseException.c)
 *     IsClassDriverOnly @ 0x1C002ADA4 (IsClassDriverOnly.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C002BBEC (wil_details_UpdateFeatureConfiguredStates.c)
 *     PropertyDrmAudioStream_SetContentId @ 0x1C002E440 (PropertyDrmAudioStream_SetContentId.c)
 *     USBDeviceIsBehindHub @ 0x1C00319F8 (USBDeviceIsBehindHub.c)
 *     USBHwGetMicArrayDescriptor @ 0x1C0032388 (USBHwGetMicArrayDescriptor.c)
 *     PinMatchChannelConfigToFormat @ 0x1C0038FC8 (PinMatchChannelConfigToFormat.c)
 *     PropertyGetAudioPosition @ 0x1C00399C0 (PropertyGetAudioPosition.c)
 *     RegistryReadNameValue @ 0x1C003A264 (RegistryReadNameValue.c)
 *     USBDeviceStart @ 0x1C003CF90 (USBDeviceStart.c)
 *     PinCreate @ 0x1C003DF00 (PinCreate.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C0041114 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
