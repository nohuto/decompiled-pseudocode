/*
 * XREFs of KsGateTurnInputOn @ 0x1C0003F70
 * Callers:
 *     USBType1AsyncEndpointPollCallback @ 0x1C0005230 (USBType1AsyncEndpointPollCallback.c)
 *     USBMidiOutCompleteCallback @ 0x1C0005860 (USBMidiOutCompleteCallback.c)
 * Callees:
 *     <none>
 */

void __stdcall KsGateTurnInputOn(PKSGATE Gate)
{
  for ( ; Gate; Gate = Gate->NextGate )
  {
    if ( _InterlockedIncrement(&Gate->Count) != 1 )
      break;
  }
}
