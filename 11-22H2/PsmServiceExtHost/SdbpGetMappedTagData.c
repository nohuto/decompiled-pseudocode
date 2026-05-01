/*
 * XREFs of SdbpGetMappedTagData @ 0x18009472C
 * Callers:
 *     SdbpGetFirstIndexedRecord @ 0x180093D34 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x180093E48 (SdbpGetNextIndexedRecord.c)
 *     SdbGetBinaryTagData @ 0x180094220 (SdbGetBinaryTagData.c)
 *     SdbGetStringTagPtr @ 0x180094294 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x1800946C4 (SdbpGetMappedStringFromTable.c)
 * Callees:
 *     SdbpGetTagHeadSize @ 0x180094928 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMappedTagData(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rbx
  int v6; // [rsp+20h] [rbp-18h]
  int v7; // [rsp+28h] [rbp-10h]

  v3 = a2 + SdbpGetTagHeadSize(a1, a2);
  if ( v3 >= *(_DWORD *)(a1 + 20) )
  {
    v7 = *(_DWORD *)(a1 + 20);
    v6 = v3;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMappedData",
      830,
      (unsigned int)"Trying to read mapped data past the end of the database offset 0x%x size 0x%x",
      v6,
      v7);
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
