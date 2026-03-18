/*
 * XREFs of MmGrowKernelStack @ 0x14062D720
 * Callers:
 *     <none>
 * Callees:
 *     MmGrowKernelStackEx @ 0x140360D00 (MmGrowKernelStackEx.c)
 */

__int64 __fastcall MmGrowKernelStack(__int64 a1)
{
  return MmGrowKernelStackEx(a1, 24576LL);
}
