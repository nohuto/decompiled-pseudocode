/*
 * XREFs of WdipTimeoutCheckRoutine @ 0x1407DA840
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     ExSetTimer @ 0x14031DDF0 (ExSetTimer.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x1407DA8F0 (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1407DA978 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x14082FD70 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableContextProviders @ 0x14083033C (WdipSemDisableContextProviders.c)
 *     WdipSemLogTimeoutInformation @ 0x1409DE26C (WdipSemLogTimeoutInformation.c)
 */

_BOOL8 WdipTimeoutCheckRoutine()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 TimedOutInstanceForDeletion; // rdi
  __int64 v3; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  WdipSemSqmLogInflightLimitExceededDataPoints();
  if ( WdipSemTimeoutEnabled )
  {
    TimedOutInstanceForDeletion = WdipSemMarkNextTimedOutInstanceForDeletion(&WdipSemEnabledInstanceTable);
    while ( TimedOutInstanceForDeletion )
    {
      LOBYTE(v1) = 1;
      WdipSemDisableContextProviders(TimedOutInstanceForDeletion, v1);
      v5 = TimedOutInstanceForDeletion;
      v6 = WdipSemMarkNextTimedOutInstanceForDeletion(TimedOutInstanceForDeletion);
      v7 = *(_QWORD *)(TimedOutInstanceForDeletion + 32);
      v8 = TimedOutInstanceForDeletion + 16;
      TimedOutInstanceForDeletion = v6;
      WdipSemLogTimeoutInformation(v7, *(unsigned __int16 *)(v7 + 16), v8);
      WdipSemDeleteTransitionalInstance(v5);
    }
  }
  v3 = WdipSemOneSecond * (WdipSemTimeoutValue / 0xAu);
  ExReleasePushLockEx((__int64 *)&WdipSemPushLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return ExSetTimer(WdipTimeoutTimer, v3, 0LL, (__int64)&WdipTimeoutTimerParameters);
}
