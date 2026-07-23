/*
 * XREFs of PpmIdleInstallConcurrency @ 0x1403B36C0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     PpmIdleUpdateConcurrency @ 0x14033EBF0 (PpmIdleUpdateConcurrency.c)
 */

__int64 __fastcall PpmIdleInstallConcurrency(__int64 a1, KSPIN_LOCK *a2, KSPIN_LOCK *a3)
{
  LARGE_INTEGER PerformanceCounter; // rbp

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  PpmIdleUpdateConcurrency(a2, PerformanceCounter.QuadPart, 0, 0);
  *(_QWORD *)(a1 + 34040) = a2;
  if ( a3 )
  {
    PpmIdleUpdateConcurrency(a3, PerformanceCounter.QuadPart, 0, 0);
    *(_QWORD *)(a1 + 34048) = a3;
  }
  return 0LL;
}
