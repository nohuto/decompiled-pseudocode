/*
 * XREFs of CmpFreeBootRegistry @ 0x140617778
 * Callers:
 *     HvHiveCleanup @ 0x1407096D0 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x1408272CC (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
