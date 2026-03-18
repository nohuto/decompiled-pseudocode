/*
 * XREFs of EtwpMdlHashTableAllocator @ 0x1406334C4
 * Callers:
 *     EtwpRegisterPartitionPages @ 0x140633504 (EtwpRegisterPartitionPages.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpMdlHashTableAllocator(__int64 a1)
{
  return ExAllocatePool2(64LL, a1, 1115124805LL);
}
