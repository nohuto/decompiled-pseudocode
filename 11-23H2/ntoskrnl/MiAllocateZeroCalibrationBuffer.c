/*
 * XREFs of MiAllocateZeroCalibrationBuffer @ 0x1403AAAF8
 * Callers:
 *     MiZeroPageCalibrate @ 0x1403AA7D0 (MiZeroPageCalibrate.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1402E2970 (ExAllocatePoolMm.c)
 *     MmAllocateContiguousNodeMemory @ 0x1403B9E00 (MmAllocateContiguousNodeMemory.c)
 */

PVOID __fastcall MiAllocateZeroCalibrationBuffer(int a1, SIZE_T a2, int a3)
{
  if ( a3 == 1 )
    return ExAllocatePoolMm(66, a2, 0x655A694Du, a1);
  else
    return (PVOID)MmAllocateContiguousNodeMemory(a2, 0, -1, 0, a3 != 0 ? 1028 : 516, a1);
}
