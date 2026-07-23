/*
 * XREFs of PpmIdleRemoveConcurrency @ 0x1405858A0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     PpmIdleUpdateConcurrency @ 0x14033EBF0 (PpmIdleUpdateConcurrency.c)
 */

__int64 __fastcall PpmIdleRemoveConcurrency(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  KSPIN_LOCK *v4; // rcx

  v1 = *(KSPIN_LOCK **)(a1 + 34040);
  if ( v1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    PpmIdleUpdateConcurrency(v1, PerformanceCounter.QuadPart, 1, 0);
    v4 = *(KSPIN_LOCK **)(a1 + 34048);
    *(_QWORD *)(a1 + 34040) = 0LL;
    if ( v4 )
    {
      PpmIdleUpdateConcurrency(v4, PerformanceCounter.QuadPart, 1, 0);
      *(_QWORD *)(a1 + 34048) = 0LL;
    }
  }
  return 0LL;
}
