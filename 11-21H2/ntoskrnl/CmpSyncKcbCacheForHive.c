/*
 * XREFs of CmpSyncKcbCacheForHive @ 0x1409176B0
 * Callers:
 *     <none>
 * Callees:
 *     CmpIsKeyDeleted @ 0x14071A6D4 (CmpIsKeyDeleted.c)
 *     CmpRebuildKcbCache @ 0x14071B3F0 (CmpRebuildKcbCache.c)
 */

__int64 __fastcall CmpSyncKcbCacheForHive(ULONG_PTR a1, __int64 a2)
{
  if ( (!a2 || *(_QWORD *)(a1 + 32) == a2)
    && !CmpIsKeyDeleted(a1, 0LL)
    && *(_QWORD *)(a1 + 32)
    && (*(_DWORD *)(a1 + 184) & 0x100000) == 0 )
  {
    CmpRebuildKcbCache(a1);
  }
  return 0LL;
}
