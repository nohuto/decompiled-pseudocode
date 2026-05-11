/*
 * XREFs of USBParseFindDescriptorInConfiguration @ 0x1C0038C80
 * Callers:
 *     USBParseGetUnit @ 0x1C002A12C (USBParseGetUnit.c)
 *     IsSupportedFormat @ 0x1C00338F8 (IsSupportedFormat.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C0033AE8 (USBParseConvertInterfaceToDataRange.c)
 *     USBParseConvertMIDIJacksAndElements @ 0x1C0033EE0 (USBParseConvertMIDIJacksAndElements.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C00347D8 (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetInterfaceIdforPin @ 0x1C0034C1C (USBParseGetInterfaceIdforPin.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0034EB0 (USBParseGetMIDIStreamingDatarange.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C0035174 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C0035384 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetEndpointDescriptor @ 0x1C0038C0C (USBParseGetEndpointDescriptor.c)
 * Callees:
 *     <none>
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseFindDescriptorInConfiguration(
        unsigned __int16 *a1,
        char *a2,
        LONG a3,
        unsigned __int64 a4)
{
  PUSB_COMMON_DESCRIPTOR v6; // r11
  __int64 v8; // rdx
  PUSB_COMMON_DESCRIPTOR v9; // rax

  v6 = 0LL;
  v8 = a1[1];
  if ( a2 + 2 < (char *)a1 + v8 )
  {
    v9 = USBD_ParseDescriptors(a1, v8, a2, a3);
    v6 = v9;
    if ( v9 )
    {
      if ( v9->bLength < a4 )
        return 0LL;
    }
  }
  return v6;
}
