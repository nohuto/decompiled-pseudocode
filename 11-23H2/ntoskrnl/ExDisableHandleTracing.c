/*
 * XREFs of ExDisableHandleTracing @ 0x140606EC4
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x1409AE844 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExDereferenceHandleDebugInfo @ 0x1409F8F30 (ExDereferenceHandleDebugInfo.c)
 */

_QWORD *__fastcall ExDisableHandleTracing(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v2; // rbp
  __int64 v4; // rsi
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = (volatile signed __int64 *)(a1 + 56);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v4 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( v4 && (*(_DWORD *)(v4 + 8) & 8) == 0 )
    *(_BYTE *)(a1 + 44) &= ~2u;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v4 )
    return (_QWORD *)ExDereferenceHandleDebugInfo(a1, v4);
  return result;
}
