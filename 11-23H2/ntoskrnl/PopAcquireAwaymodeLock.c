/*
 * XREFs of PopAcquireAwaymodeLock @ 0x140AA8FD8
 * Callers:
 *     PopPowerRequestCallbackAwayModeRequired @ 0x140981530 (PopPowerRequestCallbackAwayModeRequired.c)
 *     PopIssueActionRequest @ 0x140989CA4 (PopIssueActionRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *PopAcquireAwaymodeLock()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopAwaymodeLock, 0LL);
  result = KeGetCurrentThread();
  PopAwaymodeLockExclusiveThread = (__int64)result;
  return result;
}
