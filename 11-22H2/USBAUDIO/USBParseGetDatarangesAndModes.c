/*
 * XREFs of USBParseGetDatarangesAndModes @ 0x1C0034AE0
 * Callers:
 *     <none>
 * Callees:
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C0034038 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0034858 (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetInterfaceIdforPin @ 0x1C0034C1C (USBParseGetInterfaceIdforPin.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0034EB0 (USBParseGetMIDIStreamingDatarange.c)
 */

__int64 __fastcall USBParseGetDatarangesAndModes(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        GUID *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  _DWORD *v10; // r12
  _DWORD *v12; // rsi
  _DWORD *v13; // r15
  __int64 v15; // rcx
  _DWORD *v16; // rax
  struct _USB_CONFIGURATION_DESCRIPTOR *v17; // rbp
  unsigned int InterfaceIdforPin; // ebx
  __int64 result; // rax
  GUID *v20; // rcx
  _DWORD v21[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  v10 = a7;
  v12 = a8;
  v13 = a9;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v16 = a6;
  LODWORD(v22) = 0;
  v21[0] = 0;
  v17 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(v15 + 40);
  *a7 = 0;
  *v12 = 0;
  *v13 = 0;
  if ( v16 )
    *v16 = 232;
  InterfaceIdforPin = USBParseGetInterfaceIdforPin(v15, a2, v21);
  if ( InterfaceIdforPin == -1 )
    return 3221225858LL;
  result = USBParseCountFormatsForAudioStreamingInterface(v17, InterfaceIdforPin, v10, v12, &v22);
  if ( (int)result >= 0 && a4 )
  {
    if ( (_DWORD)v22 == 2 )
    {
      result = USBParseGetAudioStreamingDataranges(a1, v17, InterfaceIdforPin, a3, a4);
    }
    else if ( (_DWORD)v22 == 3 )
    {
      result = USBParseGetMIDIStreamingDatarange(a1, v17, v21[0], InterfaceIdforPin, a3, a4);
    }
  }
  if ( *v12 )
  {
    v20 = a5;
    *v13 = 1;
    if ( v20 )
      *v20 = AUDIO_SIGNALPROCESSINGMODE_RAW;
  }
  return result;
}
