/*
 * XREFs of CmpGetSecurityDescriptorForKcbStack @ 0x140A1BA08
 * Callers:
 *     CmpCreateTombstone @ 0x140616E4C (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406D5680 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorForKcbStack(__int64 a1, __int64 a2)
{
  return CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL) + 32;
}
