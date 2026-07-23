/*
 * XREFs of sub_1409BA44C @ 0x1409BA44C
 * Callers:
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 * Callees:
 *     sub_1407D80A4 @ 0x1407D80A4 (sub_1407D80A4.c)
 */

__int64 sub_1409BA44C()
{
  return sub_1407D80A4(*((_QWORD *)KeGetCurrentThread() + 23), 0xC0000001);
}
