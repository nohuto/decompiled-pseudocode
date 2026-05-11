/*
 * XREFs of USBParseCountFormatsForAudioStreamingInterface @ 0x1C0036408
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x1C0036FE0 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     IsSupportedFormat @ 0x1C0035D24 (IsSupportedFormat.c)
 *     USBParseGetEndpointDescriptor @ 0x1C003711C (USBParseGetEndpointDescriptor.c)
 *     USBParseGetFirstStreamingAudioInterface @ 0x1C0037190 (USBParseGetFirstStreamingAudioInterface.c)
 *     USBParseGetNextAudioInterface @ 0x1C0037A00 (USBParseGetNextAudioInterface.c)
 */

__int64 __fastcall USBParseCountFormatsForAudioStreamingInterface(
        PVOID StartPosition,
        LONG InterfaceNumber,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  unsigned int v9; // esi
  __int64 FirstStreamingAudioInterface; // rdi
  __int64 v11; // r8
  char v12; // al
  __int64 EndpointDescriptor; // rax

  *a3 = 0;
  *a4 = 0;
  v9 = -1073741438;
  FirstStreamingAudioInterface = USBParseGetFirstStreamingAudioInterface(StartPosition, InterfaceNumber, 2);
  if ( FirstStreamingAudioInterface )
  {
    do
    {
      v12 = *(_BYTE *)(FirstStreamingAudioInterface + 4);
      if ( v12 )
      {
        if ( (v12 != 1
           || (EndpointDescriptor = USBParseGetEndpointDescriptor(StartPosition, FirstStreamingAudioInterface, 0LL)) != 0
           && *(_WORD *)(EndpointDescriptor + 4))
          && IsSupportedFormat((__int64)StartPosition, FirstStreamingAudioInterface, v11) )
        {
          ++*a3;
          v9 = 0;
          ++*a4;
          *a5 = 2;
        }
      }
      FirstStreamingAudioInterface = USBParseGetNextAudioInterface(StartPosition, FirstStreamingAudioInterface);
    }
    while ( FirstStreamingAudioInterface );
  }
  else if ( USBParseGetFirstStreamingAudioInterface(StartPosition, InterfaceNumber, 3) )
  {
    v9 = 0;
    ++*a3;
    *a5 = 3;
  }
  return v9;
}
