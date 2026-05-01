/*
 * XREFs of SdbpGetNextTagId @ 0x180090900
 * Callers:
 *     SdbGetFirstChild @ 0x180090298 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x1800902F8 (SdbGetNextChild.c)
 *     SdbpGetNextIndexedRecord @ 0x180093E48 (SdbpGetNextIndexedRecord.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180090384 (SdbGetTagFromTagID.c)
 *     SdbGetTagDataSize @ 0x180094344 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x180094928 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetNextTagId(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int TagHeadSize; // esi
  unsigned int TagDataSize; // eax

  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 && (unsigned int)SdbGetTagDataSize(a1, v2) == -1 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpGetNextTagId", 2116, (unsigned int)"Reading from unfinished list");
    return *(unsigned int *)(a1 + 20);
  }
  TagHeadSize = SdbpGetTagHeadSize(a1, v2);
  if ( !TagHeadSize )
    return *(unsigned int *)(a1 + 20);
  TagDataSize = SdbGetTagDataSize(a1, v2);
  if ( (*(_BYTE *)(a1 + 2608) & 1) == 0 )
    TagDataSize = (TagDataSize + 1) & 0xFFFFFFFE;
  return v2 + TagHeadSize + TagDataSize;
}
