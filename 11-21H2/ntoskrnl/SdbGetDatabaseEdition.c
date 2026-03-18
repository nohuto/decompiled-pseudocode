/*
 * XREFs of SdbGetDatabaseEdition @ 0x1407ECF00
 * Callers:
 *     KsepSdbMapToMemory @ 0x1407ECCD0 (KsepSdbMapToMemory.c)
 *     KsepSdbBootInitialize @ 0x1408277FC (KsepSdbBootInitialize.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x140792CCC (SdbFindFirstTag.c)
 *     SdbReadDWORDTag @ 0x1407ECF5C (SdbReadDWORDTag.c)
 */

__int64 __fastcall SdbGetDatabaseEdition(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int FirstTag; // eax
  unsigned int v4; // eax

  v2 = 0;
  FirstTag = SdbFindFirstTag(a1, 0LL, 28673);
  if ( FirstTag )
  {
    v4 = SdbFindFirstTag(a1, FirstTag, 16469);
    if ( v4 )
      return (unsigned int)SdbReadDWORDTag(a1, v4, 0LL);
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v2;
}
