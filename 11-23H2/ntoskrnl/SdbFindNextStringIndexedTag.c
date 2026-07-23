/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x14084A1E4
 * Callers:
 *     SdbpSearchDB @ 0x1407523F4 (SdbpSearchDB.c)
 *     SdbGetDatabaseMatchEx @ 0x140756EB0 (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x14084A228 (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x14084A2D4 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbFindNextStringIndexedTag(__int64 a1, unsigned int *a2)
{
  unsigned int NextIndexedRecord; // eax

  NextIndexedRecord = SdbpGetNextIndexedRecord(a1, *a2, a2);
  if ( NextIndexedRecord )
    return SdbpFindMatchingName(a1, NextIndexedRecord, a2);
  else
    return 0LL;
}
