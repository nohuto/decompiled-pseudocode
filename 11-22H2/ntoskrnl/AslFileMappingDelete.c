/*
 * XREFs of AslFileMappingDelete @ 0x1407574C8
 * Callers:
 *     SdbGetDatabaseMatch @ 0x140693044 (SdbGetDatabaseMatch.c)
 *     SdbCloseDatabaseRead @ 0x140695724 (SdbCloseDatabaseRead.c)
 *     SdbpCheckMatchingFiles @ 0x140756E10 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x140757368 (SdbpCheckKObject.c)
 *     AslFileMappingCreate @ 0x14075844C (AslFileMappingCreate.c)
 *     AslFileMappingCreateFromImageView @ 0x140849CE8 (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x140A4E5C0 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140A4FFC4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140A503B0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlFileMapFree @ 0x1402F7C50 (RtlFileMapFree.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
