/*
 * XREFs of MiAllocateZeroCalibrationBuffer @ 0x1403AA228
 * Callers:
 *     MiZeroPageCalibrate @ 0x1403A9F00 (MiZeroPageCalibrate.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1402E26E0 (ExAllocatePoolMm.c)
 *     MmAllocateContiguousNodeMemory @ 0x1403B95C0 (MmAllocateContiguousNodeMemory.c)
 */

PVOID __fastcall MiAllocateZeroCalibrationBuffer(int a1, SIZE_T a2, int a3)
{
  if ( a3 == 1 )
    return ExAllocatePoolMm(66, a2, 0x655A694Du, a1);
  else
    return (PVOID)MmAllocateContiguousNodeMemory(a2, 0, -1, 0, a3 != 0 ? 1028 : 516, a1);
}
