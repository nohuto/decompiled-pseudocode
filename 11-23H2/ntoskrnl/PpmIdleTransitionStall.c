/*
 * XREFs of PpmIdleTransitionStall @ 0x140585B40
 * Callers:
 *     PpmIdleWaitForDependentTransitions @ 0x140255360 (PpmIdleWaitForDependentTransitions.c)
 *     PpmExitCoordinatedIdleState @ 0x140463094 (PpmExitCoordinatedIdleState.c)
 *     PoInitiateProcessorWake @ 0x140584210 (PoInitiateProcessorWake.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140584B5C (PpmIdleCheckCoordinatedDependency.c)
 *     PpmTestAndLockProcessor @ 0x1405863EC (PpmTestAndLockProcessor.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

LARGE_INTEGER __fastcall PpmIdleTransitionStall(__int64 a1)
{
  LARGE_INTEGER result; // rax
  ULONG_PTR v3; // r9

  if ( *(_QWORD *)a1 )
  {
    result.QuadPart = (unsigned int)(*(_DWORD *)(a1 + 24) + 1);
    *(_DWORD *)(a1 + 24) = result.LowPart;
    if ( result.LowPart == 1000 )
    {
      *(_DWORD *)(a1 + 24) = 0;
      result = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)a1);
      if ( result.QuadPart > *(_QWORD *)(a1 + 8) )
      {
        v3 = *(_QWORD *)(a1 + 16);
        if ( v3 )
          KeBugCheckEx(0xA0u, 0x701uLL, *(unsigned int *)(v3 + 33660), v3, *(unsigned int *)(v3 + 36));
        KeBugCheckEx(0xA0u, 0x704uLL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    result = KeQueryPerformanceCounter(0LL);
    *(LARGE_INTEGER *)a1 = result;
  }
  if ( *(_BYTE *)(a1 + 28) )
    _mm_pause();
  _mm_pause();
  return result;
}
