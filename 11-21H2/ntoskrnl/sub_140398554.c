/*
 * XREFs of sub_140398554 @ 0x140398554
 * Callers:
 *     IoReportInterruptInactive @ 0x140398520 (IoReportInterruptInactive.c)
 * Callees:
 *     sub_1403AED64 @ 0x1403AED64 (sub_1403AED64.c)
 */

__int64 __fastcall sub_140398554(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 - 104) - ((*(_QWORD *)(a1 - 104) >> 1) & 0x5555555555555555LL);
  return sub_1403AED64(
           a1 + 384,
           (0x101010101010101LL
          * (((v1 & 0x3333333333333333LL)
            + ((v1 >> 2) & 0x3333333333333333LL)
            + (((v1 & 0x3333333333333333LL) + ((v1 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56,
           a1 - 96,
           a1 + 320);
}
