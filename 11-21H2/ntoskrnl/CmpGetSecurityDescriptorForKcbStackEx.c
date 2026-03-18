/*
 * XREFs of CmpGetSecurityDescriptorForKcbStackEx @ 0x140657654
 * Callers:
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140721BF0 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 CmpGetSecurityDescriptorForKcbStackEx()
{
  return CmpGetSecurityCacheEntryForKcbStack() + 32;
}
