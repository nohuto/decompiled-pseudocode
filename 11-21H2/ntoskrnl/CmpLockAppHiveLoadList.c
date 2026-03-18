/*
 * XREFs of CmpLockAppHiveLoadList @ 0x1406D5E2C
 * Callers:
 *     CmLoadAppKey @ 0x14071A870 (CmLoadAppKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void CmpLockAppHiveLoadList()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
}
