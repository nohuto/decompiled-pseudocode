/*
 * XREFs of SdbpGetIndex @ 0x140757728
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x1407575F8 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140758F00 (SdbpFindFirstIndexedWildCardTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x140740E9C (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x1407580A0 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140758190 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpGetIndex(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // ebx

  v4 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2, a3) == 0x9801 )
  {
    *a3 = (unsigned int)SdbGetTagDataSize(a1, v4) / 0xC;
    return SdbpGetMappedTagData(a1, v4);
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
