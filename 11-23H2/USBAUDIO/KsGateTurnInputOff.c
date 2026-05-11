/*
 * XREFs of KsGateTurnInputOff @ 0x1C0003F40
 * Callers:
 *     USBType1BuildIsochUrbRequest @ 0x1C0002900 (USBType1BuildIsochUrbRequest.c)
 *     USBCaptureStateChangePin @ 0x1C0004610 (USBCaptureStateChangePin.c)
 *     USBMidiOutCreateBulkUrbs @ 0x1C00056FC (USBMidiOutCreateBulkUrbs.c)
 *     USBCaptureCreatePin @ 0x1C003B270 (USBCaptureCreatePin.c)
 * Callees:
 *     <none>
 */

void __stdcall KsGateTurnInputOff(PKSGATE Gate)
{
  for ( ; Gate; Gate = Gate->NextGate )
  {
    if ( _InterlockedExchangeAdd(&Gate->Count, 0xFFFFFFFF) != 1 )
      break;
  }
}
