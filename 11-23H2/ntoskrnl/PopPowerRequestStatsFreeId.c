/*
 * XREFs of PopPowerRequestStatsFreeId @ 0x1407A8504
 * Callers:
 *     PopPowerRequestStatsCreate @ 0x1407A77DC (PopPowerRequestStatsCreate.c)
 *     PopPowerRequestStatsCleanup @ 0x1407A78C8 (PopPowerRequestStatsCleanup.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x1407A7D30 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PopPowerRequestStatsFreeId(PVOID *P)
{
  if ( (*(_DWORD *)P & 2) != 0 )
    ExFreePoolWithTag(P[2], 0x54515750u);
  ExFreePoolWithTag(P, 0x54515750u);
}
