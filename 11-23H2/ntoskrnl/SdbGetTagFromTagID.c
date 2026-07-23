/*
 * XREFs of SdbGetTagFromTagID @ 0x140757E70
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066E334 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbReadBinaryTag @ 0x140695430 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x140755648 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x140755DD8 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x140755E5C (SdbReadWORDTag.c)
 *     InitOnceScanIndexes @ 0x140756CF0 (InitOnceScanIndexes.c)
 *     SdbpGetIndex @ 0x140757408 (SdbpGetIndex.c)
 *     SdbGetStringTagPtr @ 0x140757558 (SdbGetStringTagPtr.c)
 *     SdbpReadStringRef @ 0x140757628 (SdbpReadStringRef.c)
 *     SdbpFindMatcher @ 0x140757850 (SdbpFindMatcher.c)
 *     SdbGetFirstChild @ 0x140757B34 (SdbGetFirstChild.c)
 *     SdbFindFirstTag @ 0x140757B94 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x140757C08 (SdbGetNextChild.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140757EA4 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpGetFirstIndexedRecord @ 0x1407CB828 (SdbpGetFirstIndexedRecord.c)
 *     SdbReadQWORDTag @ 0x140808F84 (SdbReadQWORDTag.c)
 *     SdbpGetNextIndexedRecord @ 0x14084A2D4 (SdbpGetNextIndexedRecord.c)
 *     SdbpCheckPackageAttributes @ 0x140A50B50 (SdbpCheckPackageAttributes.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A51DF0 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A51ED0 (SdbpFindNextNamedTagHelper.c)
 *     SdbGetBinaryTagData @ 0x140A52064 (SdbGetBinaryTagData.c)
 *     SdbpIsEntryIdAvailableInOtherDb @ 0x140A524BC (SdbpIsEntryIdAvailableInOtherDb.c)
 *     SdbMergeIsEntryUpdated @ 0x140A5398C (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140A53D74 (SdbpMergeAreTagValuesEqual.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagFromTagID(__int64 a1, unsigned int a2)
{
  if ( a2 < 0xFFFFFFFE && *(_DWORD *)(a1 + 20) >= a2 + 2 )
    return *(unsigned __int16 *)(a2 + *(_QWORD *)(a1 + 8));
  AslLogCallPrintf(1LL);
  AslLogCallPrintf(1LL);
  return 0LL;
}
