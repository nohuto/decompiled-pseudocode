/*
 * XREFs of SdbGetTagFromTagID @ 0x180090024
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x180052610 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbGetFirstChild @ 0x18008FF38 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x18008FF98 (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x1800905A0 (SdbpGetNextTagId.c)
 *     InitOnceScanIndexes @ 0x1800934B0 (InitOnceScanIndexes.c)
 *     SdbpGetFirstIndexedRecord @ 0x1800939D4 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x180093AE8 (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstTag @ 0x180093C44 (SdbFindFirstTag.c)
 *     SdbFindNextTag @ 0x180093CBC (SdbFindNextTag.c)
 *     SdbGetBinaryTagData @ 0x180093EC0 (SdbGetBinaryTagData.c)
 *     SdbGetStringTagPtr @ 0x180093F34 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x180093FE4 (SdbGetTagDataSize.c)
 *     SdbReadBinaryTag @ 0x1800940CC (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x180094188 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x180094224 (SdbReadQWORDTag.c)
 *     SdbReadWORDTag @ 0x1800942C4 (SdbReadWORDTag.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x180094450 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x180094628 (SdbpReadStringRef.c)
 *     SdbpCheckPackageAttributes @ 0x180095F00 (SdbpCheckPackageAttributes.c)
 *     SdbpFindMatcher @ 0x180096130 (SdbpFindMatcher.c)
 * Callees:
 *     SdbpReadMappedData @ 0x180090738 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
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
