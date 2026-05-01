/*
 * XREFs of AslFileMappingDelete @ 0x18009F2A4
 * Callers:
 *     SdbCloseDatabaseRead @ 0x18009512C (SdbCloseDatabaseRead.c)
 *     SdbOpenDatabaseEx @ 0x180095474 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x180099D10 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x18009A828 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x18009AC20 (SdbpCheckMatchingWildcardFiles.c)
 *     AslFileMappingCreate @ 0x18009F03C (AslFileMappingCreate.c)
 * Callees:
 *     RtlFileMapFree @ 0x18009FA64 (RtlFileMapFree.c)
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
