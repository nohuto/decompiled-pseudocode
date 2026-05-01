/*
 * XREFs of SdbGetFirstChild @ 0x180095334
 * Callers:
 *     InitOnceScanIndexes @ 0x180098730 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x180098EE4 (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x18009BE58 (SdbpMatchList.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180095420 (SdbGetTagFromTagID.c)
 *     SdbpGetNextTagId @ 0x180095908 (SdbpGetNextTagId.c)
 */

__int64 __fastcall SdbGetFirstChild(__int64 a1, unsigned int a2)
{
  unsigned int NextTagId; // eax
  unsigned int v6; // ecx

  if ( a2 )
  {
    if ( (SdbGetTagFromTagID() & 0xF000) != 0x7000 )
      return 0LL;
    NextTagId = SdbpGetNextTagId(a1, a2);
    v6 = a2 + 6;
  }
  else
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    v6 = 12;
  }
  return v6 < NextTagId ? v6 : 0;
}
