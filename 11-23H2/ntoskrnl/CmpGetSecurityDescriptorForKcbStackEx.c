/*
 * XREFs of CmpGetSecurityDescriptorForKcbStackEx @ 0x14067F19C
 * Callers:
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406D5680 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 CmpGetSecurityDescriptorForKcbStackEx()
{
  return CmpGetSecurityCacheEntryForKcbStack() + 32;
}
