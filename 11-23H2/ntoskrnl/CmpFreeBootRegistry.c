/*
 * XREFs of CmpFreeBootRegistry @ 0x140617CC8
 * Callers:
 *     HvHiveCleanup @ 0x1407098E0 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x1408275CC (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
