/*
 * XREFs of SdbGetNextChild @ 0x18008FF98
 * Callers:
 *     SdbFindFirstTag @ 0x180093C44 (SdbFindFirstTag.c)
 *     SdbFindNextTag @ 0x180093CBC (SdbFindNextTag.c)
 *     SdbpMatchList @ 0x1800969D8 (SdbpMatchList.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180090024 (SdbGetTagFromTagID.c)
 *     SdbpGetNextTagId @ 0x1800905A0 (SdbpGetNextTagId.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetNextChild(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  unsigned int NextTagId; // edi
  unsigned int v9; // eax

  v4 = a3;
  v5 = a2;
  if ( (_DWORD)a2 )
  {
    if ( (SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000) != 0x7000 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbGetNextChild",
        2211,
        (unsigned int)"Trying to operate on non-list, non-root tag");
      return 0LL;
    }
    NextTagId = SdbpGetNextTagId(a1, v5);
  }
  else
  {
    NextTagId = *(_DWORD *)(a1 + 20);
  }
  v9 = SdbpGetNextTagId(a1, v4);
  return v9 < NextTagId ? v9 : 0;
}
