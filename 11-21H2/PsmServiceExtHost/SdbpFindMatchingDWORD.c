/*
 * XREFs of SdbpFindMatchingDWORD @ 0x180099000
 * Callers:
 *     SdbFindFirstDWORDIndexedTag @ 0x1800989A8 (SdbFindFirstDWORDIndexedTag.c)
 * Callees:
 *     SdbpGetNextIndexedRecord @ 0x180098D84 (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstTag @ 0x180098EE4 (SdbFindFirstTag.c)
 *     SdbReadDWORDTag @ 0x180099428 (SdbReadDWORDTag.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpFindMatchingDWORD(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int NextIndexedRecord; // ebx
  unsigned int FirstTag; // eax
  int DWORDTag; // eax

  NextIndexedRecord = a2;
  if ( !a2 )
    return NextIndexedRecord;
  while ( 1 )
  {
    FirstTag = SdbFindFirstTag(a1, NextIndexedRecord, *((_WORD *)a3 + 6));
    if ( !FirstTag )
      break;
    DWORDTag = SdbReadDWORDTag(a1, FirstTag, 0xFFFFFFFFLL);
    if ( DWORDTag == -1 )
      return 0LL;
    if ( DWORDTag != a3[8] )
    {
      NextIndexedRecord = SdbpGetNextIndexedRecord(a1, *a3, (__int64)a3);
      if ( NextIndexedRecord )
        continue;
    }
    return NextIndexedRecord;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpFindMatchingDWORD",
    348,
    (unsigned int)"The tag 0x%lx was not found under tag 0x%lx");
  return 0LL;
}
