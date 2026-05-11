/*
 * XREFs of USBParseGetAudioSpecificInterface @ 0x1C00347D8
 * Callers:
 *     IsSupportedFormat @ 0x1C00338F8 (IsSupportedFormat.c)
 *     USBParseConvertControlUnits @ 0x1C0033A0C (USBParseConvertControlUnits.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C0033AE8 (USBParseConvertInterfaceToDataRange.c)
 *     USBParseCreateInterfaceList @ 0x1C0034148 (USBParseCreateInterfaceList.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C00354DC (USBParseGetTerminalLinkFromPinId.c)
 *     USBDeviceStart @ 0x1C003CF90 (USBDeviceStart.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C002A2E0 (USBParseGetNextAudioInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C0038C80 (USBParseFindDescriptorInConfiguration.c)
 */

unsigned __int8 *__fastcall USBParseGetAudioSpecificInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int8 *v5; // rbx
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rdi
  unsigned __int8 v8; // al
  _BYTE *DescriptorInConfiguration; // rax

  v5 = a2;
  NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
  v8 = *v5;
  while ( 1 )
  {
    DescriptorInConfiguration = (_BYTE *)USBParseFindDescriptorInConfiguration(a1, &v5[v8], 36LL, a4);
    v5 = DescriptorInConfiguration;
    if ( !DescriptorInConfiguration || NextAudioInterface && DescriptorInConfiguration > (_BYTE *)NextAudioInterface )
      break;
    v8 = *DescriptorInConfiguration;
    if ( v8 < 3u )
      break;
    if ( v5[2] == 1 )
      return v5;
  }
  return 0LL;
}
