/*
 * XREFs of USBParseGetEndpointDescriptor @ 0x1C0038C0C
 * Callers:
 *     USBParseConvertInterfaceToDataRange @ 0x1C0033AE8 (USBParseConvertInterfaceToDataRange.c)
 *     IsZeroBWInterface @ 0x1C003898C (IsZeroBWInterface.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C002A2E0 (USBParseGetNextAudioInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C0038C80 (USBParseFindDescriptorInConfiguration.c)
 */

unsigned __int64 __fastcall USBParseGetEndpointDescriptor(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2,
        char a3)
{
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rbp
  unsigned __int64 result; // rax

  NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
  result = USBParseFindDescriptorInConfiguration(a1, a2, a3 != 0 ? 37 : 5, 7LL);
  if ( result && NextAudioInterface && result > (unsigned __int64)NextAudioInterface )
    return 0LL;
  return result;
}
