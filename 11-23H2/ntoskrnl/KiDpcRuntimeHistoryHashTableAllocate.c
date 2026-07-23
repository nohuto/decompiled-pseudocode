/*
 * XREFs of KiDpcRuntimeHistoryHashTableAllocate @ 0x140383CB4
 * Callers:
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x140821CC0 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall KiDpcRuntimeHistoryHashTableAllocate(__int64 a1)
{
  return ExAllocatePool2(64LL, a1, 1953002052LL);
}
