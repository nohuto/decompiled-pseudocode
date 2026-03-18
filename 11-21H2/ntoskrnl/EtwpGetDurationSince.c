/*
 * XREFs of EtwpGetDurationSince @ 0x14062EDA8
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140214244 (MiAllocateContiguousMemory.c)
 *     MiAllocatePagesForMdl @ 0x140265428 (MiAllocatePagesForMdl.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

unsigned __int64 __fastcall EtwpGetDurationSince(__int64 a1)
{
  LARGE_INTEGER v1; // r8
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v1.QuadPart = *(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - a1;
  if ( is_mul_ok(v1.QuadPart, 0xF4240uLL) )
    return (unsigned __int64)v1.QuadPart
         * (unsigned __int128)0xF4240uLL
         / (unsigned __int64)PerformanceFrequency.QuadPart;
  if ( PerformanceFrequency.QuadPart / 0xF4240uLL )
    return v1.QuadPart / (PerformanceFrequency.QuadPart / 0xF4240uLL);
  return 0LL;
}
