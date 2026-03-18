/*
 * XREFs of HvlpEtwRegister @ 0x1405485A4
 * Callers:
 *     HvlPhase2Initialize @ 0x1403B4CA0 (HvlPhase2Initialize.c)
 * Callees:
 *     EtwRegister @ 0x14078D880 (EtwRegister.c)
 *     EtwSetInformation @ 0x1407D7120 (EtwSetInformation.c)
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
