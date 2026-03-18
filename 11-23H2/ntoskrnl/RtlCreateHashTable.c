/*
 * XREFs of RtlCreateHashTable @ 0x14036F680
 * Callers:
 *     SepSetTokenCachedHandles @ 0x1407F44A0 (SepSetTokenCachedHandles.c)
 *     SepInitializeLowBoxNumberTable @ 0x1407F5470 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x1408486C4 (SepInitializeSharedSidMap.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x14036F6A0 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
