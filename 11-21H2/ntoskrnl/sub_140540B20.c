/*
 * XREFs of sub_140540B20 @ 0x140540B20
 * Callers:
 *     sub_14092BEF8 @ 0x14092BEF8 (sub_14092BEF8.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID sub_140540B20()
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57676244u);
}
