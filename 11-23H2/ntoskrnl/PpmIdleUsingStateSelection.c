/*
 * XREFs of PpmIdleUsingStateSelection @ 0x14032C6B0
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x14032C5C0 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 */

bool PpmIdleUsingStateSelection()
{
  struct _KTHREAD *CurrentThread; // rax
  bool v1; // bl
  _PPM_IDLE_STATES *IdleStates; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
  v1 = 0;
  IdleStates = KeGetCurrentPrcb()->PowerState.IdleStates;
  if ( IdleStates )
    v1 = IdleStates->InterfaceVersion == 1;
  PopReleaseRwLock(&PpmIdlePolicyLock);
  return v1;
}
