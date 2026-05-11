/*
 * XREFs of USBHwAllocateAndBag @ 0x1C00397EC
 * Callers:
 *     USBHwCreateInterfaceList @ 0x1C0031D58 (USBHwCreateInterfaceList.c)
 *     USBHwSelectAudioConfiguration @ 0x1C0032868 (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C003318C (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C0034DA0 (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0034EB0 (USBParseGetMIDIStreamingDatarange.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C0035248 (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetUnitString @ 0x1C003559C (USBParseGetUnitString.c)
 *     USBParseMixerUnit @ 0x1C0035BD0 (USBParseMixerUnit.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C00369C0 (USBType1AsyncEndpointInitialize.c)
 *     USBMidiInPipePrimer @ 0x1C00370E8 (USBMidiInPipePrimer.c)
 *     USBType1Create1MsecBuffers @ 0x1C00395BC (USBType1Create1MsecBuffers.c)
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
