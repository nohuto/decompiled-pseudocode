/*
 * XREFs of USBParseGetTerminalLinkFromPinId @ 0x1C00354DC
 * Callers:
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C0035384 (USBParseGetPinIndexForStreamingTerminal.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C002A2E0 (USBParseGetNextAudioInterface.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C00347D8 (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetInterfaceIdforPin @ 0x1C0034C1C (USBParseGetInterfaceIdforPin.c)
 *     IsZeroBWInterface @ 0x1C003898C (IsZeroBWInterface.c)
 */

__int64 __fastcall USBParseGetTerminalLinkFromPinId(__int64 a1, int a2)
{
  char v3; // bp
  unsigned int v4; // edi
  LONG InterfaceIdforPin; // eax
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rbx
  char v7; // al
  __int64 v8; // r8
  struct _USB_CONFIGURATION_DESCRIPTOR *v9; // rcx
  unsigned __int8 *AudioSpecificInterface; // rax

  v3 = 0;
  v4 = -1;
  InterfaceIdforPin = USBParseGetInterfaceIdforPin(a1, a2, 0LL);
  if ( InterfaceIdforPin != -1 )
  {
    NextAudioInterface = USBD_ParseConfigurationDescriptorEx(
                           *(PUSB_CONFIGURATION_DESCRIPTOR *)(a1 + 40),
                           *(PVOID *)(a1 + 40),
                           InterfaceIdforPin,
                           -1,
                           1,
                           2,
                           -1);
    while ( NextAudioInterface )
    {
      if ( v3 )
        break;
      v7 = IsZeroBWInterface(*(_QWORD *)(a1 + 40), NextAudioInterface);
      v9 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(a1 + 40);
      if ( v7 )
      {
        NextAudioInterface = USBParseGetNextAudioInterface(v9, &NextAudioInterface->bLength);
      }
      else
      {
        v3 = 1;
        AudioSpecificInterface = USBParseGetAudioSpecificInterface(v9, &NextAudioInterface->bLength, v8, 7LL);
        if ( AudioSpecificInterface )
          v4 = AudioSpecificInterface[3];
      }
    }
  }
  return v4;
}
