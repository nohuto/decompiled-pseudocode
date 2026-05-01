/*
 * XREFs of AslFileMappingDelete @ 0x180099C60
 * Callers:
 *     SdbCloseDatabaseRead @ 0x180090094 (SdbCloseDatabaseRead.c)
 *     SdbOpenDatabaseEx @ 0x1800903E4 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x180094DD0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1800958F8 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x180095CE0 (SdbpCheckMatchingWildcardFiles.c)
 *     AslFileMappingCreate @ 0x1800999F8 (AslFileMappingCreate.c)
 * Callees:
 *     RtlFileMapFree @ 0x18009A408 (RtlFileMapFree.c)
 */

BOOLEAN __fastcall AslFileMappingDelete(PVOID *P)
{
  PVOID v2; // r8
  BOOLEAN result; // al

  if ( P )
  {
    RtlFileMapFree(P + 1);
    v2 = P[8];
    if ( v2 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
      P[8] = 0LL;
    }
    if ( *P )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *P);
      *P = 0LL;
    }
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  return result;
}
