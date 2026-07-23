/*
 * XREFs of HvlpEtwRegister @ 0x140548C64
 * Callers:
 *     HvlPhase2Initialize @ 0x1403B4E80 (HvlPhase2Initialize.c)
 * Callees:
 *     EtwRegister @ 0x14078DA70 (EtwRegister.c)
 *     EtwSetInformation @ 0x1407D73F0 (EtwSetInformation.c)
 */

NTSTATUS HvlpEtwRegister()
{
  EtwRegister(&HvlGlobalSystemEventsGuid, 0LL, 0LL, &HvlGlobalSystemEventsHandle);
  return EtwSetInformation(
           HvlGlobalSystemEventsHandle,
           EventProviderSetTraits,
           &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
           (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
}
