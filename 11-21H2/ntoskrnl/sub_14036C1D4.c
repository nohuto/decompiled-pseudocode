/*
 * XREFs of sub_14036C1D4 @ 0x14036C1D4
 * Callers:
 *     sub_1407F1400 @ 0x1407F1400 (sub_1407F1400.c)
 *     sub_140853600 @ 0x140853600 (sub_140853600.c)
 *     sub_1409A0FD0 @ 0x1409A0FD0 (sub_1409A0FD0.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14036C1D4(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(64LL, a1, a2);
}
