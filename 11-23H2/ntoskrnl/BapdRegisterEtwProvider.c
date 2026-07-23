/*
 * XREFs of BapdRegisterEtwProvider @ 0x1403842CC
 * Callers:
 *     BapdWriteEtwEvents @ 0x140383EC0 (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x140A8EBDC (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x140B4F34C (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwRegister @ 0x14078DA70 (EtwRegister.c)
 *     EtwSetInformation @ 0x1407D73F0 (EtwSetInformation.c)
 */

NTSTATUS __fastcall BapdRegisterEtwProvider(const GUID *a1, char a2, ULONGLONG *a3)
{
  NTSTATUS result; // eax

  result = EtwRegister(a1, 0LL, 0LL, a3);
  if ( result < 0 )
  {
    *a3 = 0LL;
  }
  else
  {
    if ( a2 )
      EtwSetInformation(
        *a3,
        EventProviderSetTraits,
        &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
        (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
    return 0;
  }
  return result;
}
