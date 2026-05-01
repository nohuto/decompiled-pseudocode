/*
 * XREFs of SdbpGetNextIndexedRecord @ 0x180093E48
 * Callers:
 *     SdbpFindMatchingDWORD @ 0x1800940C0 (SdbpFindMatchingDWORD.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180090384 (SdbGetTagFromTagID.c)
 *     SdbpGetNextTagId @ 0x180090900 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x180094344 (SdbGetTagDataSize.c)
 *     SdbpGetMappedTagData @ 0x18009472C (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetNextIndexedRecord(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  const char *v6; // r9
  int v7; // r8d
  __int64 MappedTagData; // rdi
  unsigned int v10; // esi
  unsigned int NextTagId; // edi
  __int16 TagFromTagID; // si
  __int16 v13; // ax
  unsigned int TagDataSize; // eax
  __int64 v15; // r8
  __int64 v16; // rcx

  v4 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) != 0x9801 )
  {
    v6 = "The tag 0x%lx is not an index tag";
    v7 = 499;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetNextIndexedRecord", v7, (_DWORD)v6, v4);
    return 0LL;
  }
  MappedTagData = SdbpGetMappedTagData(a1, v4);
  if ( !MappedTagData )
  {
    v6 = "Failed to get pointer to the index data tagid x%lx";
    v7 = 506;
    goto LABEL_3;
  }
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
  {
    v10 = *(_DWORD *)(a3 + 4);
    if ( !v10 )
      v10 = *(_DWORD *)(MappedTagData + 12LL * *(unsigned int *)(a3 + 16) + 8);
    NextTagId = SdbpGetNextTagId(a1, v10);
    TagFromTagID = SdbGetTagFromTagID(a1, v10);
    v13 = SdbGetTagFromTagID(a1, NextTagId);
    if ( !v13 || (v13 & 0xF000) != 0x7000 || v13 != TagFromTagID || NextTagId == *(_DWORD *)(a3 + 8) )
      return 0LL;
    *(_DWORD *)(a3 + 4) = NextTagId;
  }
  else
  {
    TagDataSize = SdbGetTagDataSize(a1, v4);
    v15 = *(unsigned int *)(a3 + 16);
    if ( (_DWORD)v15 == TagDataSize / 0xC - 1 )
      return 0LL;
    v16 = (unsigned int)(v15 + 1);
    if ( *(_QWORD *)(MappedTagData + 12 * v15) != *(_QWORD *)(MappedTagData + 12 * v16) )
      return 0LL;
    *(_DWORD *)(a3 + 16) = v16;
    return *(unsigned int *)(MappedTagData + 12 * v16 + 8);
  }
  return NextTagId;
}
