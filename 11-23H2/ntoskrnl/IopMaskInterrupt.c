/*
 * XREFs of IopMaskInterrupt @ 0x1403B3DCC
 * Callers:
 *     IoReportInterruptInactive @ 0x1403B3D80 (IoReportInterruptInactive.c)
 * Callees:
 *     KeMaskInterrupt @ 0x14031F844 (KeMaskInterrupt.c)
 */

__int64 __fastcall IopMaskInterrupt(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 - 104) - ((*(_QWORD *)(a1 - 104) >> 1) & 0x5555555555555555LL);
  return KeMaskInterrupt(
           (__int64 *)(a1 + 392),
           (0x101010101010101LL
          * (((v1 & 0x3333333333333333LL)
            + ((v1 >> 2) & 0x3333333333333333LL)
            + (((v1 & 0x3333333333333333LL) + ((v1 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56,
           a1 - 96,
           (struct _KDPC *)(a1 + 320));
}
