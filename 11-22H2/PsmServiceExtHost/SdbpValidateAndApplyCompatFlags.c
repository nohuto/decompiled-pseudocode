/*
 * XREFs of SdbpValidateAndApplyCompatFlags @ 0x180090B24
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1800903E4 (SdbOpenDatabaseEx.c)
 *     SdbpOpenDatabaseInMemory @ 0x1800909A0 (SdbpOpenDatabaseInMemory.c)
 * Callees:
 *     SdbGetDatabaseID @ 0x180090188 (SdbGetDatabaseID.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpValidateAndApplyCompatFlags(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *a2 == 1 )
  {
    *(_DWORD *)(a1 + 2608) |= 1u;
    goto LABEL_6;
  }
  if ( *a2 == 2 )
  {
LABEL_6:
    *(_DWORD *)(a1 + 2608) |= 2u;
    goto LABEL_7;
  }
  if ( *a2 != 3 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpValidateAndApplyCompatFlags",
      894,
      (unsigned int)"MajorVersion mismatch, MajorVersion 0x%lx Expected 0x%lx",
      *a2,
      3);
    return v2;
  }
LABEL_7:
  if ( !(unsigned int)SdbGetDatabaseID(a1, (void *)(a1 + 28)) )
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpValidateAndApplyCompatFlags",
      904,
      (unsigned int)"Failed to get the database ID");
  return 1;
}
