/*
 * XREFs of SdbGetNextChild @ 0x180095394
 * Callers:
 *     SdbFindFirstTag @ 0x180098EE4 (SdbFindFirstTag.c)
 *     SdbFindNextTag @ 0x180098F5C (SdbFindNextTag.c)
 *     SdbpMatchList @ 0x18009BE58 (SdbpMatchList.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180095420 (SdbGetTagFromTagID.c)
 *     SdbpGetNextTagId @ 0x180095908 (SdbpGetNextTagId.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetNextChild(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int NextTagId; // edi
  unsigned int v8; // eax

  if ( a2 )
  {
    if ( (SdbGetTagFromTagID() & 0xF000) != 0x7000 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbGetNextChild",
        1340,
        (unsigned int)"Trying to operate on non-list, non-root tag");
      return 0LL;
    }
    NextTagId = SdbpGetNextTagId(a1, a2);
  }
  else
  {
    NextTagId = *(_DWORD *)(a1 + 20);
  }
  v8 = SdbpGetNextTagId(a1, a3);
  return v8 < NextTagId ? v8 : 0;
}
