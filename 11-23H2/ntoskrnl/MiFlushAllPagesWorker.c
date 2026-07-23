/*
 * XREFs of MiFlushAllPagesWorker @ 0x14063A234
 * Callers:
 *     MiFlushAllPages @ 0x14063A15C (MiFlushAllPages.c)
 * Callees:
 *     MiStoreUpdateMemoryConditions @ 0x140222F70 (MiStoreUpdateMemoryConditions.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     CcNotifyWriteBehindEx @ 0x140536F90 (CcNotifyWriteBehindEx.c)
 *     MiCanFlushMakeProgress @ 0x1406390EC (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x14063C188 (MiWakeModifiedPageWriter.c)
 */

_QWORD *__fastcall MiFlushAllPagesWorker(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 824));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 828));
  do
  {
    if ( !(unsigned int)MiCanFlushMakeProgress(a1, 0) || a4 && *(_DWORD *)(a4 + 4) )
      break;
    KeSetEvent((PRKEVENT)(a1 + 832), 0, 0);
    MiWakeModifiedPageWriter(a1, -1LL);
    CcNotifyWriteBehindEx(2u, *(_QWORD *)(a1 + 200));
    if ( *(_DWORD *)(a1 + 1192) )
      MiStoreUpdateMemoryConditions(a1);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    if ( KiQueryUnbiasedInterruptTime() - a2 > a3 )
      break;
  }
  while ( *(_QWORD *)(a1 + 17600) > 0x32uLL );
  _InterlockedAdd((volatile signed __int32 *)(a1 + 824), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 828), 0xFFFFFFFF);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
