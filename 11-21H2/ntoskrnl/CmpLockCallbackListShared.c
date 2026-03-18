/*
 * XREFs of CmpLockCallbackListShared @ 0x140693158
 * Callers:
 *     CmSetCallbackObjectContext @ 0x140692F40 (CmSetCallbackObjectContext.c)
 *     CmpEnumerateCallback @ 0x1407FC920 (CmpEnumerateCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 CmpLockCallbackListShared()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
}
