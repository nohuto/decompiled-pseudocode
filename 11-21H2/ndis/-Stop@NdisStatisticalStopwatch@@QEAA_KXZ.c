/*
 * XREFs of ?Stop@NdisStatisticalStopwatch@@QEAA_KXZ @ 0x1C0058694
 * Callers:
 *     ndisFreeSharedMemoryInternal @ 0x1C0058888 (ndisFreeSharedMemoryInternal.c)
 *     NdisMAllocateSharedMemory @ 0x1C0059F00 (NdisMAllocateSharedMemory.c)
 *     NdisMFreeSharedMemory @ 0x1C005A700 (NdisMFreeSharedMemory.c)
 *     NdisFreeSharedMemory @ 0x1C00C9480 (NdisFreeSharedMemory.c)
 *     ??1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1C01228A4 (--1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall NdisStatisticalStopwatch::Stop(NdisStatisticalStopwatch *this)
{
  LARGE_INTEGER v2; // rax
  unsigned __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
  result = (unsigned __int64)(1000000 * (v2.QuadPart - *((_QWORD *)this + 1))) / PerformanceFrequency.QuadPart;
  _InterlockedExchangeAdd64((volatile signed __int64 *)&(&ndisGlobalStatistics)[*(int *)this], result);
  *((_QWORD *)this + 1) = 0LL;
  return result;
}
