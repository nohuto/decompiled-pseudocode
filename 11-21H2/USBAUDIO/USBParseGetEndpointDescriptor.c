/*
 * XREFs of USBParseGetEndpointDescriptor @ 0x1C003711C
 * Callers:
 *     USBHwSelectStreamingAudioInterface @ 0x1C0034900 (USBHwSelectStreamingAudioInterface.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C0035F24 (USBParseConvertInterfaceToDataRange.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C0036408 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0036CB8 (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C0037BA8 (USBParseGetTerminalLinkFromPinId.c)
 * Callees:
 *     USBParseFindDescriptorInConfiguration @ 0x1C0036BDC (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetNextAudioInterface @ 0x1C0037A00 (USBParseGetNextAudioInterface.c)
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseGetEndpointDescriptor(unsigned __int16 *a1, char *a2, char a3)
{
  unsigned __int64 NextAudioInterface; // rbp
  PUSB_COMMON_DESCRIPTOR result; // rax

  NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
  result = USBParseFindDescriptorInConfiguration(a1, a2, a3 != 0 ? 37 : 5, 7uLL);
  if ( result && NextAudioInterface && (unsigned __int64)result > NextAudioInterface )
    return 0LL;
  return result;
}
