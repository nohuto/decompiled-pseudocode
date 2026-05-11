/*
 * XREFs of IsZeroBWInterface @ 0x1C003898C
 * Callers:
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C0034038 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0034858 (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C00354DC (USBParseGetTerminalLinkFromPinId.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C003850C (USBHwSelectStreamingAudioInterface.c)
 * Callees:
 *     USBParseGetEndpointDescriptor @ 0x1C0038C0C (USBParseGetEndpointDescriptor.c)
 */

char __fastcall IsZeroBWInterface(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // bl
  __int64 EndpointDescriptor; // rax

  v2 = *(_BYTE *)(a2 + 4);
  v3 = 0;
  if ( !v2 )
    return 1;
  if ( v2 == 1 )
  {
    EndpointDescriptor = USBParseGetEndpointDescriptor(a1, a2, 0LL);
    if ( !EndpointDescriptor || !*(_WORD *)(EndpointDescriptor + 4) )
      return 1;
  }
  return v3;
}
