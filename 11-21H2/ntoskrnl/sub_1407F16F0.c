/*
 * XREFs of sub_1407F16F0 @ 0x1407F16F0
 * Callers:
 *     sub_14036C210 @ 0x14036C210 (sub_14036C210.c)
 *     sub_14036C2F0 @ 0x14036C2F0 (sub_14036C2F0.c)
 *     sub_140399BC4 @ 0x140399BC4 (sub_140399BC4.c)
 *     sub_1405DFAC4 @ 0x1405DFAC4 (sub_1405DFAC4.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407F16F0(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(256LL, a1, a2);
}
