/*
 * XREFs of ExpAeUpdateStatsForExclusiveRelease @ 0x1403CF624
 * Callers:
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x1403CF480 (ExTryAcquireAutoExpandPushLockExclusive.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpAeUpdateStatsForExclusiveRelease(_DWORD *a1)
{
  if ( (*a1 & 0xF0000u) >= 0xF0000 )
    return 0;
  *a1 += 0x10000;
  return 1;
}
