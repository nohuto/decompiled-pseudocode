/*
 * XREFs of SdbpGetNextTagId @ 0x1407941A4
 * Callers:
 *     SdbGetFirstChild @ 0x140791910 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x140792D40 (SdbGetNextChild.c)
 *     SdbpGetNextIndexedRecord @ 0x140842C30 (SdbpGetNextIndexedRecord.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x140793480 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x14079422C (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x14079499C (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpGetNextTagId(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int TagHeadSize; // esi
  unsigned int TagDataSize; // eax

  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 && (unsigned int)SdbGetTagDataSize(a1, v2) == -1 )
  {
    AslLogCallPrintf(1LL);
    return *(unsigned int *)(a1 + 20);
  }
  TagHeadSize = SdbpGetTagHeadSize(a1, v2);
  if ( !TagHeadSize )
    return *(unsigned int *)(a1 + 20);
  TagDataSize = SdbGetTagDataSize(a1, v2);
  if ( (*(_DWORD *)(a1 + 1328) & 1) == 0 )
    TagDataSize = (TagDataSize + 1) & 0xFFFFFFFE;
  return v2 + TagHeadSize + TagDataSize;
}
