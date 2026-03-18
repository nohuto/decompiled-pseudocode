/*
 * XREFs of SdbGetTagFromTagID @ 0x14079499C
 * Callers:
 *     SdbpGetIndex @ 0x14075B638 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14075B8A0 (SdbpGetFirstIndexedRecord.c)
 *     SdbFindNextTag @ 0x14078EE18 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x14078F124 (SdbReadWORDTag.c)
 *     InitOnceScanIndexes @ 0x140791640 (InitOnceScanIndexes.c)
 *     SdbGetFirstChild @ 0x140791910 (SdbGetFirstChild.c)
 *     SdbFindFirstTag @ 0x140792CCC (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x140792D40 (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x1407941A4 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x14079422C (SdbGetTagDataSize.c)
 *     SdbReadDWORDTag @ 0x1407ECF5C (SdbReadDWORDTag.c)
 *     SdbReadBinaryTag @ 0x1407ED29C (SdbReadBinaryTag.c)
 *     SdbFindFirstNamedTag @ 0x140841428 (SdbFindFirstNamedTag.c)
 *     SdbReadQWORDTag @ 0x140842904 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140842A24 (SdbGetStringTagPtr.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140842AF4 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x140842BCC (SdbpReadStringRef.c)
 *     SdbpGetNextIndexedRecord @ 0x140842C30 (SdbpGetNextIndexedRecord.c)
 *     SdbpFindMatcher @ 0x140843624 (SdbpFindMatcher.c)
 *     SdbpFindNextNamedTag @ 0x140A1311C (SdbpFindNextNamedTag.c)
 *     SdbGetBinaryTagData @ 0x140A13228 (SdbGetBinaryTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x140797F3C (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbGetTagFromTagID(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2LL) )
    return v3;
  AslLogCallPrintf(1LL);
  return 0LL;
}
