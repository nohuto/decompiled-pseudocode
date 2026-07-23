/*
 * XREFs of SdbGetDatabaseEdition @ 0x140695518
 * Callers:
 *     KsepSdbMapToMemory @ 0x140694E7C (KsepSdbMapToMemory.c)
 *     KsepSdbBootInitialize @ 0x140862088 (KsepSdbBootInitialize.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x140755648 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x140757B94 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbGetDatabaseEdition(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int FirstTag; // eax
  unsigned int v4; // eax

  v2 = 0;
  FirstTag = SdbFindFirstTag(a1, 0LL, 28673LL);
  if ( FirstTag )
  {
    v4 = SdbFindFirstTag(a1, FirstTag, 16469LL);
    if ( v4 )
      return (unsigned int)SdbReadDWORDTag(a1, v4, 0LL);
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetDatabaseEdition",
      691,
      (unsigned int)"Failed to get database tag, db is corrupt");
  }
  return v2;
}
