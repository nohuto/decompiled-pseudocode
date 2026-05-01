/*
 * XREFs of SdbpGetMappedTagData @ 0x18009966C
 * Callers:
 *     SdbpGetFirstIndexedRecord @ 0x180098C70 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x180098D84 (SdbpGetNextIndexedRecord.c)
 *     SdbGetBinaryTagData @ 0x180099160 (SdbGetBinaryTagData.c)
 *     SdbGetStringTagPtr @ 0x1800991D4 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x180099604 (SdbpGetMappedStringFromTable.c)
 * Callees:
 *     SdbpGetTagHeadSize @ 0x180099868 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMappedTagData(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rbx

  v3 = a2 + SdbpGetTagHeadSize(a1, a2);
  if ( v3 >= *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMappedData",
      746,
      (unsigned int)"Trying to read mapped data past the end of the database offset 0x%x size 0x%x");
    v4 = 0LL;
LABEL_4:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetMappedTagData", 463, (unsigned int)"Error getting ptr to tag data");
    return v4;
  }
  v4 = *(_QWORD *)(a1 + 8) + v3;
  if ( !v4 )
    goto LABEL_4;
  return v4;
}
