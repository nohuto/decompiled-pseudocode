/*
 * XREFs of USBParseFindDescriptorInConfiguration @ 0x1C0036BDC
 * Callers:
 *     IsSupportedFormat @ 0x1C0035D24 (IsSupportedFormat.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C0035F24 (USBParseConvertInterfaceToDataRange.c)
 *     USBParseConvertMIDIJacksAndElements @ 0x1C00362B8 (USBParseConvertMIDIJacksAndElements.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C0036C38 (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C003711C (USBParseGetEndpointDescriptor.c)
 *     USBParseGetInterfaceIdforPin @ 0x1C00371C8 (USBParseGetInterfaceIdforPin.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0037458 (USBParseGetMIDIStreamingDatarange.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C00376E8 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C0037A50 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnit @ 0x1C0037C74 (USBParseGetUnit.c)
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
