/*
 * XREFs of sub_1405C850C @ 0x1405C850C
 * Callers:
 *     sub_1405DD4C0 @ 0x1405DD4C0 (sub_1405DD4C0.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

void __fastcall sub_1405C850C(PKSPIN_LOCK SpinLock, _QWORD *a2, _QWORD *a3)
{
  LARGE_INTEGER PerformanceCounter; // rsi
  KSPIN_LOCK v7; // rax
  KSPIN_LOCK v8; // rcx
  __int64 v9; // rax
  __int16 v10; // [rsp+30h] [rbp-8h]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  _disable();
  KeAcquireSpinLockAtDpcLevel(SpinLock);
  v7 = SpinLock[2];
  if ( PerformanceCounter.QuadPart > v7 )
  {
    SpinLock[2] = PerformanceCounter.QuadPart;
    v8 = PerformanceCounter.QuadPart - v7;
    v9 = *((unsigned int *)SpinLock + 3);
    SpinLock[3] += v8;
    SpinLock[v9 + 41] += v8;
  }
  *a2 = SpinLock[3];
  *a3 = SpinLock[41];
  KeReleaseSpinLockFromDpcLevel(SpinLock);
  if ( (v10 & 0x200) != 0 )
    _enable();
}
