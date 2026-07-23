/*
 * XREFs of RtlRandomEx @ 0x14036C940
 * Callers:
 *     sub_1407F1308 @ 0x1407F1308 (sub_1407F1308.c)
 *     sub_1407F1710 @ 0x1407F1710 (sub_1407F1710.c)
 *     sub_1407F17B4 @ 0x1407F17B4 (sub_1407F17B4.c)
 *     sub_14081D450 @ 0x14081D450 (sub_14081D450.c)
 *     sub_1409EBB58 @ 0x1409EBB58 (sub_1409EBB58.c)
 *     sub_140A819C8 @ 0x140A819C8 (sub_140A819C8.c)
 * Callees:
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = sub_140363220(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
