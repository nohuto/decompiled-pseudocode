/*
 * XREFs of ??0NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1C012E3A4
 * Callers:
 *     NdisAllocateSharedMemory @ 0x1C00CDD40 (NdisAllocateSharedMemory.c)
 * Callees:
 *     <none>
 */

NdisDmaAllocationHistogramStopwatch *__fastcall NdisDmaAllocationHistogramStopwatch::NdisDmaAllocationHistogramStopwatch(
        NdisDmaAllocationHistogramStopwatch *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_DWORD *)this = 2;
  *((LARGE_INTEGER *)this + 1) = KeQueryPerformanceCounter(0LL);
  *((_DWORD *)this + 4) = 0;
  *((_WORD *)this + 10) = 0;
  return this;
}
