/*
 * XREFs of USBParseGetNextAudioInterface @ 0x1C002A2E0
 * Callers:
 *     USBParseConvertInterfaceToDataRange @ 0x1C0033AE8 (USBParseConvertInterfaceToDataRange.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C0034038 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C00347D8 (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0034858 (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C00354DC (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseGetEndpointDescriptor @ 0x1C0038C0C (USBParseGetEndpointDescriptor.c)
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
