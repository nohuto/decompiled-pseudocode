/*
 * XREFs of MmGrowKernelStack @ 0x14062D6B0
 * Callers:
 *     <none>
 * Callees:
 *     MmGrowKernelStackEx @ 0x140361350 (MmGrowKernelStackEx.c)
 */

__int64 __fastcall MmGrowKernelStack(__int64 a1)
{
  return MmGrowKernelStackEx(a1, 24576LL);
}
