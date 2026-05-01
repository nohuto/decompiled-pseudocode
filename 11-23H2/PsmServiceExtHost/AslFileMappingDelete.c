/*
 * XREFs of AslFileMappingDelete @ 0x180099900
 * Callers:
 *     SdbCloseDatabaseRead @ 0x18008FD34 (SdbCloseDatabaseRead.c)
 *     SdbOpenDatabaseEx @ 0x180090084 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x180094A70 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x180095598 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x180095980 (SdbpCheckMatchingWildcardFiles.c)
 *     AslFileMappingCreate @ 0x180099698 (AslFileMappingCreate.c)
 * Callees:
 *     RtlFileMapFree @ 0x18009A0A8 (RtlFileMapFree.c)
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
