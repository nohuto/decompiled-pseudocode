/*
 * XREFs of CmpGetSecurityDescriptorForKcbStack @ 0x1409188CC
 * Callers:
 *     CmpCreateTombstone @ 0x14053FB50 (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140721BF0 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorForKcbStack(__int64 a1, __int64 a2)
{
  return CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL) + 32;
}
