/*
 * XREFs of IopUnmaskInterrupt @ 0x1403D7BDC
 * Callers:
 *     IoReportInterruptActive @ 0x1403D7B90 (IoReportInterruptActive.c)
 * Callees:
 *     KeUnmaskInterrupt @ 0x1403D7C5C (KeUnmaskInterrupt.c)
 */

__int64 __fastcall IopUnmaskInterrupt(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 - 104) - ((*(_QWORD *)(a1 - 104) >> 1) & 0x5555555555555555LL);
  return KeUnmaskInterrupt(
           a1 + 392,
           (0x101010101010101LL
          * (((v1 & 0x3333333333333333LL)
            + ((v1 >> 2) & 0x3333333333333333LL)
            + (((v1 & 0x3333333333333333LL) + ((v1 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56,
           a1 - 96);
}
