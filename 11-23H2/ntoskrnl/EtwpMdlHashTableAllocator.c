/*
 * XREFs of EtwpMdlHashTableAllocator @ 0x140601950
 * Callers:
 *     EtwpRegisterPartitionPages @ 0x140601990 (EtwpRegisterPartitionPages.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpMdlHashTableAllocator(__int64 a1)
{
  return ExAllocatePool2(64LL, a1, 1115124805LL);
}
