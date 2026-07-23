/*
 * XREFs of sub_1405F2970 @ 0x1405F2970
 * Callers:
 *     sub_1409C5570 @ 0x1409C5570 (sub_1409C5570.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID sub_1405F2970()
{
  return ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x456C6F4Eu);
}
