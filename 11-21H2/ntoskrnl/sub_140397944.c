/*
 * XREFs of sub_140397944 @ 0x140397944
 * Callers:
 *     IoReportInterruptActive @ 0x140397910 (IoReportInterruptActive.c)
 * Callees:
 *     sub_1403979C4 @ 0x1403979C4 (sub_1403979C4.c)
 */

__int64 __fastcall sub_140397944(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 - 104) - ((*(_QWORD *)(a1 - 104) >> 1) & 0x5555555555555555LL);
  return sub_1403979C4(
           a1 + 384,
           (0x101010101010101LL
          * (((v1 & 0x3333333333333333LL)
            + ((v1 >> 2) & 0x3333333333333333LL)
            + (((v1 & 0x3333333333333333LL) + ((v1 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56,
           a1 - 96);
}
