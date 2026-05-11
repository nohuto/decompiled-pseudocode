/*
 * XREFs of USBParseGetFirstStreamingAudioInterface @ 0x1C0037190
 * Callers:
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C0036408 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0036CB8 (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0037458 (USBParseGetMIDIStreamingDatarange.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C0037BA8 (USBParseGetTerminalLinkFromPinId.c)
 * Callees:
 *     <none>
 */

PUSB_INTERFACE_DESCRIPTOR __fastcall USBParseGetFirstStreamingAudioInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *StartPosition,
        LONG InterfaceNumber,
        LONG InterfaceSubClass)
{
  return USBD_ParseConfigurationDescriptorEx(
           StartPosition,
           StartPosition,
           InterfaceNumber,
           -1,
           1,
           InterfaceSubClass,
           -1);
}
