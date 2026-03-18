/*
 * XREFs of SdbGetTagFromTagID @ 0x140757C80
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066DDE4 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbReadBinaryTag @ 0x140695430 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x140755458 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x140755BE8 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x140755C6C (SdbReadWORDTag.c)
 *     InitOnceScanIndexes @ 0x140756B00 (InitOnceScanIndexes.c)
 *     SdbpGetIndex @ 0x140757218 (SdbpGetIndex.c)
 *     SdbGetStringTagPtr @ 0x140757368 (SdbGetStringTagPtr.c)
 *     SdbpReadStringRef @ 0x140757438 (SdbpReadStringRef.c)
 *     SdbpFindMatcher @ 0x140757660 (SdbpFindMatcher.c)
 *     SdbGetFirstChild @ 0x140757944 (SdbGetFirstChild.c)
 *     SdbFindFirstTag @ 0x1407579A4 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x140757A18 (SdbGetNextChild.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140757CB4 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpGetFirstIndexedRecord @ 0x1407CB558 (SdbpGetFirstIndexedRecord.c)
 *     SdbReadQWORDTag @ 0x140808CB4 (SdbReadQWORDTag.c)
 *     SdbpGetNextIndexedRecord @ 0x140849FD4 (SdbpGetNextIndexedRecord.c)
 *     SdbpCheckPackageAttributes @ 0x140A508A0 (SdbpCheckPackageAttributes.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A51B40 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A51C20 (SdbpFindNextNamedTagHelper.c)
 *     SdbGetBinaryTagData @ 0x140A51DB4 (SdbGetBinaryTagData.c)
 *     SdbpIsEntryIdAvailableInOtherDb @ 0x140A5220C (SdbpIsEntryIdAvailableInOtherDb.c)
 *     SdbMergeIsEntryUpdated @ 0x140A536DC (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140A53AC4 (SdbpMergeAreTagValuesEqual.c)
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
