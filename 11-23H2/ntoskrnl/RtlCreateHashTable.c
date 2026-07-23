/*
 * XREFs of RtlCreateHashTable @ 0x14036F820
 * Callers:
 *     SepSetTokenCachedHandles @ 0x1407F4770 (SepSetTokenCachedHandles.c)
 *     SepInitializeLowBoxNumberTable @ 0x1407F5740 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x1408489C4 (SepInitializeSharedSidMap.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x14036F840 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
