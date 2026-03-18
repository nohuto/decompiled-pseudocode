/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x140849EE4
 * Callers:
 *     SdbpSearchDB @ 0x140752204 (SdbpSearchDB.c)
 *     SdbGetDatabaseMatchEx @ 0x140756CC0 (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x140849F28 (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x140849FD4 (SdbpGetNextIndexedRecord.c)
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
