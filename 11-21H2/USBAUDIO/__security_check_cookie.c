/*
 * XREFs of __security_check_cookie @ 0x1C0001010
 * Callers:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0001724 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0001768 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x1C00017CC (McTemplateK0zq_EtwWriteTransfer.c)
 *     WmiLogEvent @ 0x1C00027F0 (WmiLogEvent.c)
 *     WmiLogStreamPosition @ 0x1C000290C (WmiLogStreamPosition.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0011BA0 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     USBD_CreateHandle @ 0x1C0017070 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C00174F8 (USBD_QueryUsbCapability.c)
 *     __GSHandlerCheckCommon @ 0x1C0017D4C (__GSHandlerCheckCommon.c)
 *     _handle_error @ 0x1C00182E8 (_handle_error.c)
 *     RaiseException @ 0x1C0018540 (RaiseException.c)
 *     IsClassDriverOnly @ 0x1C0029204 (IsClassDriverOnly.c)
 *     PinCreate @ 0x1C002AE40 (PinCreate.c)
 *     PinMatchChannelConfigToFormat @ 0x1C002B7BC (PinMatchChannelConfigToFormat.c)
 *     PropertyDrmAudioStream_SetContentId @ 0x1C002E350 (PropertyDrmAudioStream_SetContentId.c)
 *     PropertyGetAudioPosition @ 0x1C002E450 (PropertyGetAudioPosition.c)
 *     RegistryReadNameValue @ 0x1C0031A24 (RegistryReadNameValue.c)
 *     USBDeviceIsBehindHub @ 0x1C0032818 (USBDeviceIsBehindHub.c)
 *     USBDeviceStart @ 0x1C0032B50 (USBDeviceStart.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C0037794 (USBParseGetMicArrayDescriptor.c)
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
