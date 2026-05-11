/*
 * XREFs of USBHwAllocateAndBag @ 0x1C0033484
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x1C0034778 (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C0035458 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C0037348 (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0037458 (USBParseGetMIDIStreamingDatarange.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C0037794 (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetUnitString @ 0x1C0037D04 (USBParseGetUnitString.c)
 *     USBParseMixerUnit @ 0x1C0038240 (USBParseMixerUnit.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C00399D4 (USBType1AsyncEndpointInitialize.c)
 *     USBType1Create1MsecBuffers @ 0x1C0039B40 (USBType1Create1MsecBuffers.c)
 *     USBMidiInPipePrimer @ 0x1C003B104 (USBMidiInPipePrimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBHwAllocateAndBag(PVOID *a1, unsigned int a2, __int64 a3, void *a4)
{
  NTSTATUS v6; // ebx
  void *Pool2; // rax

  v6 = -1073741670;
  Pool2 = (void *)ExAllocatePool2(a3, a2, 1096972357LL);
  *a1 = Pool2;
  if ( Pool2 )
  {
    v6 = KsAddItemToObjectBag(a4, Pool2, ExFreePool);
    if ( v6 < 0 )
      ExFreePool(*a1);
  }
  return (unsigned int)v6;
}
