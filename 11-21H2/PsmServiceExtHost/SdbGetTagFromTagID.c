/*
 * XREFs of SdbGetTagFromTagID @ 0x180095420
 * Callers:
 *     SdbGetFirstChild @ 0x180095334 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x180095394 (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x180095908 (SdbpGetNextTagId.c)
 *     InitOnceScanIndexes @ 0x180098730 (InitOnceScanIndexes.c)
 *     SdbpGetFirstIndexedRecord @ 0x180098C70 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x180098D84 (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstTag @ 0x180098EE4 (SdbFindFirstTag.c)
 *     SdbFindNextTag @ 0x180098F5C (SdbFindNextTag.c)
 *     SdbGetBinaryTagData @ 0x180099160 (SdbGetBinaryTagData.c)
 *     SdbGetStringTagPtr @ 0x1800991D4 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x180099284 (SdbGetTagDataSize.c)
 *     SdbReadBinaryTag @ 0x18009936C (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x180099428 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x1800994C4 (SdbReadQWORDTag.c)
 *     SdbReadWORDTag @ 0x180099564 (SdbReadWORDTag.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1800996F0 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x1800998C8 (SdbpReadStringRef.c)
 *     SdbpFindMatcher @ 0x18009B5B0 (SdbpFindMatcher.c)
 * Callees:
 *     SdbpReadMappedData @ 0x180095AA0 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagFromTagID(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2LL) )
    return v3;
  AslLogCallPrintf(1, (unsigned int)"SdbGetTagFromTagID", 1211, (unsigned int)"Error reading data");
  return 0LL;
}
