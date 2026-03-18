/*
 * XREFs of MiFlushAllPagesWorker @ 0x14038A914
 * Callers:
 *     MiFlushAllPages @ 0x14038A880 (MiFlushAllPages.c)
 * Callees:
 *     MiWakeModifiedPageWriter @ 0x14025C460 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402664E8 (MiStoreUpdateMemoryConditions.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     MiCanFlushMakeProgress @ 0x140388F60 (MiCanFlushMakeProgress.c)
 *     CcNotifyWriteBehindEx @ 0x14038AA18 (CcNotifyWriteBehindEx.c)
 */

_QWORD *__fastcall MiFlushAllPagesWorker(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 808));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 812));
  do
  {
    if ( !(unsigned int)MiCanFlushMakeProgress(a1, 0) || a4 && *(_DWORD *)(a4 + 4) )
      break;
    KeSetEvent((PRKEVENT)(a1 + 816), 0, 0);
    MiWakeModifiedPageWriter(a1, -1LL);
    CcNotifyWriteBehindEx(2LL, *(_QWORD *)(a1 + 176));
    if ( *(_DWORD *)(a1 + 1176) )
      MiStoreUpdateMemoryConditions(a1);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    if ( KiQueryUnbiasedInterruptTime() - a2 > a3 )
      break;
  }
  while ( *(_QWORD *)(a1 + 17280) > 0x32uLL );
  _InterlockedAdd((volatile signed __int32 *)(a1 + 808), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 812), 0xFFFFFFFF);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
