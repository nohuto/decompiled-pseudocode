/*
 * XREFs of USBParseGetNextAudioInterface @ 0x1C0037A00
 * Callers:
 *     USBParseConvertInterfaceToDataRange @ 0x1C0035F24 (USBParseConvertInterfaceToDataRange.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C0036408 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C0036C38 (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0036CB8 (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetEndpointDescriptor @ 0x1C003711C (USBParseGetEndpointDescriptor.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C0037BA8 (USBParseGetTerminalLinkFromPinId.c)
 * Callees:
 *     <none>
 */

PUSB_INTERFACE_DESCRIPTOR __fastcall USBParseGetNextAudioInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2)
{
  if ( a2 )
    return USBD_ParseConfigurationDescriptorEx(a1, &a2[*a2], a2[2], -1, 1, a2[6], -1);
  return (PUSB_INTERFACE_DESCRIPTOR)a2;
}
