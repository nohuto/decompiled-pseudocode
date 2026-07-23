/*
 * XREFs of SdbFindFirstStringIndexedTag @ 0x1407CB5EC
 * Callers:
 *     SdbpSearchDB @ 0x1407523F4 (SdbpSearchDB.c)
 *     SdbGetDatabaseMatchEx @ 0x140756EB0 (SdbGetDatabaseMatchEx.c)
 *     SdbGetKShimTagRef @ 0x140855B00 (SdbGetKShimTagRef.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbGetIndex @ 0x1407556B8 (SdbGetIndex.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1407CB698 (SdbMakeIndexKeyFromStringEx.c)
 *     SdbpGetFirstIndexedRecord @ 0x1407CB828 (SdbpGetFirstIndexedRecord.c)
 *     SdbpFindMatchingName @ 0x14084A228 (SdbpFindMatchingName.c)
 */

__int64 __fastcall SdbFindFirstStringIndexedTag(
        _RTL_RUN_ONCE *a1,
        __int16 a2,
        __int16 a3,
        const WCHAR *a4,
        unsigned int *a5)
{
  unsigned int Index; // eax
  __int64 IndexKeyFromString; // rax
  __int64 v10; // rdx
  unsigned int FirstIndexedRecord; // eax
  unsigned int v13[6]; // [rsp+30h] [rbp-18h] BYREF

  v13[0] = 0;
  Index = SdbGetIndex(a1, a2, a3, v13);
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  a5[5] = v13[0];
  *((_WORD *)a5 + 6) = a3;
  *((_QWORD *)a5 + 4) = a4;
  IndexKeyFromString = SdbMakeIndexKeyFromStringEx(a4);
  v10 = *a5;
  *((_QWORD *)a5 + 3) = IndexKeyFromString;
  FirstIndexedRecord = SdbpGetFirstIndexedRecord(a1, v10, IndexKeyFromString, a5);
  if ( !FirstIndexedRecord )
    return 0LL;
  return SdbpFindMatchingName(a1, FirstIndexedRecord, a5);
}
