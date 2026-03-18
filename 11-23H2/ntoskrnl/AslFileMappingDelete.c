/*
 * XREFs of AslFileMappingDelete @ 0x140756FB8
 * Callers:
 *     SdbGetDatabaseMatch @ 0x140693044 (SdbGetDatabaseMatch.c)
 *     SdbCloseDatabaseRead @ 0x140695724 (SdbCloseDatabaseRead.c)
 *     SdbpCheckMatchingFiles @ 0x140756900 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x140756E58 (SdbpCheckKObject.c)
 *     AslFileMappingCreate @ 0x140757F3C (AslFileMappingCreate.c)
 *     AslFileMappingCreateFromImageView @ 0x140848A80 (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x140A4E550 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140A4FF54 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140A50340 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlFileMapFree @ 0x1402F7C50 (RtlFileMapFree.c)
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
