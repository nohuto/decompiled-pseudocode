/*
 * XREFs of SdbpFindMatchingDWORD @ 0x180093D60
 * Callers:
 *     SdbFindFirstDWORDIndexedTag @ 0x180093724 (SdbFindFirstDWORDIndexedTag.c)
 * Callees:
 *     SdbpGetNextIndexedRecord @ 0x180093AE8 (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstTag @ 0x180093C44 (SdbFindFirstTag.c)
 *     SdbReadDWORDTag @ 0x180094188 (SdbReadDWORDTag.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpFindMatchingDWORD(__int64 a1, unsigned int a2, unsigned int *a3, __int64 a4)
{
  unsigned int NextIndexedRecord; // ebx
  unsigned int FirstTag; // eax
  int DWORDTag; // eax
  int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+28h] [rbp-10h]

  NextIndexedRecord = a2;
  if ( !a2 )
    return NextIndexedRecord;
  while ( 1 )
  {
    FirstTag = SdbFindFirstTag(a1, NextIndexedRecord, *((unsigned __int16 *)a3 + 6), a4);
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
  v11 = *((unsigned __int16 *)a3 + 6);
  v10 = NextIndexedRecord;
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpFindMatchingDWORD",
    720,
    (unsigned int)"The tag 0x%lx was not found under tag 0x%lx",
    v10,
    v11);
  return 0LL;
}
