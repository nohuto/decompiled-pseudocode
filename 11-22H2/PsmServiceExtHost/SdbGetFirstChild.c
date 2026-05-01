/*
 * XREFs of SdbGetFirstChild @ 0x180090298
 * Callers:
 *     InitOnceScanIndexes @ 0x180093810 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x180093FA4 (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x180096D38 (SdbpMatchList.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180090384 (SdbGetTagFromTagID.c)
 *     SdbpGetNextTagId @ 0x180090900 (SdbpGetNextTagId.c)
 */

__int64 __fastcall SdbGetFirstChild(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int NextTagId; // eax
  unsigned int v8; // ecx

  v4 = a2;
  if ( (_DWORD)a2 )
  {
    if ( (SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000) != 0x7000 )
      return 0LL;
    NextTagId = SdbpGetNextTagId(a1, v4);
    v8 = v4 + 6;
  }
  else
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    v8 = 12;
  }
  return v8 < NextTagId ? v8 : 0;
}
