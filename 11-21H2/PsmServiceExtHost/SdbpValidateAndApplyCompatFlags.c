/*
 * XREFs of SdbpValidateAndApplyCompatFlags @ 0x180095B2C
 * Callers:
 *     SdbOpenDatabaseEx @ 0x180095474 (SdbOpenDatabaseEx.c)
 *     SdbpOpenDatabaseInMemory @ 0x1800959A8 (SdbpOpenDatabaseInMemory.c)
 * Callees:
 *     SdbGetDatabaseID @ 0x180095224 (SdbGetDatabaseID.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpValidateAndApplyCompatFlags(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *a2 == 1 )
  {
    *(_DWORD *)(a1 + 1328) |= 1u;
    goto LABEL_6;
  }
  if ( *a2 == 2 )
  {
LABEL_6:
    *(_DWORD *)(a1 + 1328) |= 2u;
    goto LABEL_7;
  }
  if ( *a2 != 3 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpValidateAndApplyCompatFlags",
      810,
      (unsigned int)"MajorVersion mismatch, MajorVersion 0x%lx Expected 0x%lx");
    return v2;
  }
LABEL_7:
  if ( !(unsigned int)SdbGetDatabaseID(a1, (void *)(a1 + 28)) )
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpValidateAndApplyCompatFlags",
      820,
      (unsigned int)"Failed to get the database ID");
  return 1;
}
