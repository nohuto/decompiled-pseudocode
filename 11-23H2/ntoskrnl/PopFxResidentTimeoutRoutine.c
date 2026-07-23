/*
 * XREFs of PopFxResidentTimeoutRoutine @ 0x14034C560
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C4570 (RtlGetInterruptTimePrecise.c)
 *     PopFxIdleComponent @ 0x140313250 (PopFxIdleComponent.c)
 *     PopFxArmResidentTimer @ 0x14034C694 (PopFxArmResidentTimer.c)
 */

__int64 PopFxResidentTimeoutRoutine()
{
  struct _KTHREAD *CurrentThread; // rax
  LARGE_INTEGER InterruptTimePrecise; // rax
  ULONG_PTR v2; // rbx
  LARGE_INTEGER v3; // rsi
  __int64 v4; // rdx
  unsigned int i; // edi
  __int64 v6; // rcx
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  if ( (ULONG_PTR *)PopFxDeviceList != &PopFxDeviceList )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v2 = PopFxDeviceList;
    v3 = InterruptTimePrecise;
    while ( (ULONG_PTR *)v2 != &PopFxDeviceList )
    {
      for ( i = 0; i < *(_DWORD *)(v2 + 828); ++i )
      {
        v4 = *(_QWORD *)(*(_QWORD *)(v2 + 832) + 8LL * i);
        if ( *(int *)(v4 + 96) > 0
          && v3.QuadPart - *(_QWORD *)(v4 + 144) >= (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
        {
          _InterlockedAdd((volatile signed __int32 *)(v4 + 96), 0xFFFFFFFF);
          _InterlockedAdd(&PopFxResidentComponentCount, 0xFFFFFFFF);
          PopFxIdleComponent(v2, i, 1);
        }
      }
      v2 = *(_QWORD *)v2;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  LOBYTE(v6) = 1;
  return PopFxArmResidentTimer(v6);
}
