/*
 * XREFs of USBParseCountFormatsForAudioStreamingInterface @ 0x1C0034038
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x1C0034AE0 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C002A2E0 (USBParseGetNextAudioInterface.c)
 *     IsSupportedFormat @ 0x1C00338F8 (IsSupportedFormat.c)
 *     IsZeroBWInterface @ 0x1C003898C (IsZeroBWInterface.c)
 */

__int64 __fastcall USBParseCountFormatsForAudioStreamingInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *StartPosition,
        LONG InterfaceNumber,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  unsigned int v9; // ebp
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rsi
  __int64 v11; // r8

  *a3 = 0;
  *a4 = 0;
  v9 = -1073741438;
  NextAudioInterface = USBD_ParseConfigurationDescriptorEx(StartPosition, StartPosition, InterfaceNumber, -1, 1, 2, -1);
  if ( NextAudioInterface )
  {
    do
    {
      if ( !(unsigned __int8)IsZeroBWInterface(StartPosition, NextAudioInterface)
        && IsSupportedFormat((__int64)StartPosition, (__int64)NextAudioInterface, v11) )
      {
        ++*a3;
        ++*a4;
        v9 = 0;
        *a5 = 2;
      }
      NextAudioInterface = USBParseGetNextAudioInterface(StartPosition, &NextAudioInterface->bLength);
    }
    while ( NextAudioInterface );
  }
  else if ( USBD_ParseConfigurationDescriptorEx(StartPosition, StartPosition, InterfaceNumber, -1, 1, 3, -1) )
  {
    ++*a3;
    v9 = 0;
    *a5 = 3;
  }
  return v9;
}
