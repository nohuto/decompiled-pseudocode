/*
 * XREFs of AslFileMappingDelete @ 0x1407571A8
 * Callers:
 *     SdbGetDatabaseMatch @ 0x140693044 (SdbGetDatabaseMatch.c)
 *     SdbCloseDatabaseRead @ 0x140695724 (SdbCloseDatabaseRead.c)
 *     SdbpCheckMatchingFiles @ 0x140756AF0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x140757048 (SdbpCheckKObject.c)
 *     AslFileMappingCreate @ 0x14075812C (AslFileMappingCreate.c)
 *     AslFileMappingCreateFromImageView @ 0x140848D80 (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x140A4E800 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140A50204 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140A505F0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlFileMapFree @ 0x1402F7EE0 (RtlFileMapFree.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall AslFileMappingDelete(PVOID *P)
{
  PVOID v2; // rcx

  if ( P )
  {
    RtlFileMapFree((__int64)(P + 1));
    v2 = P[9];
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x74705041u);
      P[9] = 0LL;
    }
    if ( *P )
    {
      ExFreePoolWithTag(*P, 0x74705041u);
      *P = 0LL;
    }
    ExFreePoolWithTag(P, 0x74705041u);
  }
}
