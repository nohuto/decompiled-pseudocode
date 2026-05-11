/*
 * XREFs of USBParseGetAudioSpecificInterface @ 0x1C0036C38
 * Callers:
 *     USBDeviceStart @ 0x1C0032B50 (USBDeviceStart.c)
 *     IsSupportedFormat @ 0x1C0035D24 (IsSupportedFormat.c)
 *     USBParseConvertControlUnits @ 0x1C0035E48 (USBParseConvertControlUnits.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C0035F24 (USBParseConvertInterfaceToDataRange.c)
 *     USBParseCreateInterfaceList @ 0x1C00365A8 (USBParseCreateInterfaceList.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C0037BA8 (USBParseGetTerminalLinkFromPinId.c)
 * Callees:
 *     USBParseFindDescriptorInConfiguration @ 0x1C0036BDC (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetNextAudioInterface @ 0x1C0037A00 (USBParseGetNextAudioInterface.c)
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseGetAudioSpecificInterface(
        unsigned __int16 *a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 NextAudioInterface; // rdi
  char *i; // rdx
  __int64 bLength; // rcx
  PUSB_COMMON_DESCRIPTOR result; // rax

  NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
  for ( i = (char *)&a2[*a2]; ; i = (char *)(&result->bLength + bLength) )
  {
    result = USBParseFindDescriptorInConfiguration(a1, i, 36, a4);
    if ( !result || NextAudioInterface && (unsigned __int64)result > NextAudioInterface )
      break;
    bLength = result->bLength;
    if ( (unsigned __int8)bLength < 3u )
      break;
    if ( result[1].bLength == 1 )
      return result;
  }
  return 0LL;
}
