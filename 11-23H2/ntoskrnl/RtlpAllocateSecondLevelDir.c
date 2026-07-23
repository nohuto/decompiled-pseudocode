/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x14036F9AC
 * Callers:
 *     RtlpCreateHashTable @ 0x14036F840 (RtlpCreateHashTable.c)
 *     RtlExpandHashTable @ 0x14036FFE0 (RtlExpandHashTable.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return ExAllocatePool2(64LL, (unsigned int)(16 << (a1 + 7)), 1650545736LL);
}
