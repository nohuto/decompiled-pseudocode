/*
 * XREFs of KiDpcRuntimeHistoryHashTableAllocate @ 0x1403D4990
 * Callers:
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x140851878 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KiDpcRuntimeHistoryHashTableAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x74687244u);
}
