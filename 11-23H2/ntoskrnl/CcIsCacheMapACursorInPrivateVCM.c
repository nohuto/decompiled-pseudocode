/*
 * XREFs of CcIsCacheMapACursorInPrivateVCM @ 0x14029AF94
 * Callers:
 *     CcShouldLazyWriteCacheMap @ 0x14029AE50 (CcShouldLazyWriteCacheMap.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsCacheMapACursorInPrivateVCM(__int64 a1, __int64 a2)
{
  return a2 == a1 + 72 || a2 == a1 + 96;
}
