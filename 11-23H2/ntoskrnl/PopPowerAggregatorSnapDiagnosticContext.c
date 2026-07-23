/*
 * XREFs of PopPowerAggregatorSnapDiagnosticContext @ 0x1408838DC
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1403D59F0 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __fastcall PopPowerAggregatorSnapDiagnosticContext(_QWORD *a1)
{
  void *Pool2; // rax
  void *v3; // rbx

  *a1 = 0LL;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  Pool2 = (void *)ExAllocatePool2(256LL, 4440LL, 1734960208LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, &PopPowerAggregatorContext, 0x1158uLL);
    *a1 = v3;
  }
  PopReleaseRwLock(&PopPowerAggregatorLock);
}
