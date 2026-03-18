/*
 * XREFs of DbgkFlushErrorPort @ 0x1407513E4
 * Callers:
 *     PspExitProcess @ 0x140751434 (PspExitProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     PsGetProcessServerSilo @ 0x14028C180 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140297694 (PsGetServerSiloGlobals.c)
 *     ExfReleasePushLockShared @ 0x1402BD860 (ExfReleasePushLockShared.c)
 *     DbgkpDereferenceErrorPort @ 0x14053BB88 (DbgkpDereferenceErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140939F70 (DbgkpRemoveErrorPort.c)
 */

_QWORD *__fastcall DbgkFlushErrorPort(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  _QWORD *result; // rax
  signed __int64 *v4; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int32 *v6; // rdi

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  result = PsGetServerSiloGlobals(ProcessServerSilo);
  v4 = result + 121;
  if ( a1 == result[123] )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(result + 121), 0LL);
    if ( a1 == v4[2] )
    {
      v6 = (volatile signed __int32 *)v4[1];
      _InterlockedIncrement(v6);
    }
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v6 )
    {
      DbgkpRemoveErrorPort(CurrentThread, v4, v6);
      return (_QWORD *)DbgkpDereferenceErrorPort(v6);
    }
  }
  return result;
}
