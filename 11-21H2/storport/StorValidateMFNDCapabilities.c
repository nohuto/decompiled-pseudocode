/*
 * XREFs of StorValidateMFNDCapabilities @ 0x1C003C460
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C0038568 (RaidAdapterStartMiniport.c)
 *     StorQueryMFNDCapability @ 0x1C0090CF4 (StorQueryMFNDCapability.c)
 * Callees:
 *     <none>
 */

bool __fastcall StorValidateMFNDCapabilities(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( *(_BYTE *)a1 == 77 && *(_BYTE *)(a1 + 1) == 70 && *(_BYTE *)(a1 + 2) == 78 && *(_BYTE *)(a1 + 3) == 68 )
    return *(_WORD *)(a1 + 8) != 0;
  return result;
}
