/*
 * XREFs of SdbpGetMappedTagData @ 0x14074098C
 * Callers:
 *     SdbpGetIndex @ 0x140757218 (SdbpGetIndex.c)
 *     SdbGetStringTagPtr @ 0x140757368 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x1407573E8 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetFirstIndexedRecord @ 0x1407CB558 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x140849FD4 (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x140976ED8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140A4EF88 (SdbQueryDataExTagID.c)
 *     SdbGetBinaryTagData @ 0x140A51DB4 (SdbGetBinaryTagData.c)
 *     SdbMergeIsEntryUpdated @ 0x140A536DC (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140A53AC4 (SdbpMergeAreTagValuesEqual.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x140741F78 (SdbpGetTagHeadSize.c)
 */

__int64 __fastcall SdbpGetMappedTagData(__int64 a1, int a2)
{
  unsigned int v3; // eax
  __int64 v4; // rbx

  v3 = a2 + SdbpGetTagHeadSize();
  if ( v3 >= *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(1LL);
    v4 = 0LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(a1 + 8) + v3;
  if ( !v4 )
LABEL_5:
    AslLogCallPrintf(1LL);
  return v4;
}
