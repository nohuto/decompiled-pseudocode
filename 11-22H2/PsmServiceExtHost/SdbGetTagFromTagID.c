/*
 * XREFs of SdbGetTagFromTagID @ 0x180090384
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x180052810 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbGetFirstChild @ 0x180090298 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x1800902F8 (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x180090900 (SdbpGetNextTagId.c)
 *     InitOnceScanIndexes @ 0x180093810 (InitOnceScanIndexes.c)
 *     SdbpGetFirstIndexedRecord @ 0x180093D34 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x180093E48 (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstTag @ 0x180093FA4 (SdbFindFirstTag.c)
 *     SdbFindNextTag @ 0x18009401C (SdbFindNextTag.c)
 *     SdbGetBinaryTagData @ 0x180094220 (SdbGetBinaryTagData.c)
 *     SdbGetStringTagPtr @ 0x180094294 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x180094344 (SdbGetTagDataSize.c)
 *     SdbReadBinaryTag @ 0x18009442C (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1800944E8 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x180094584 (SdbReadQWORDTag.c)
 *     SdbReadWORDTag @ 0x180094624 (SdbReadWORDTag.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1800947B0 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x180094988 (SdbpReadStringRef.c)
 *     SdbpCheckPackageAttributes @ 0x180096260 (SdbpCheckPackageAttributes.c)
 *     SdbpFindMatcher @ 0x180096490 (SdbpFindMatcher.c)
 * Callees:
 *     SdbpReadMappedData @ 0x180090A98 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagFromTagID(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2LL) )
    return v3;
  AslLogCallPrintf(1, (unsigned int)"SdbGetTagFromTagID", 2082, (unsigned int)"Error reading data");
  return 0LL;
}
