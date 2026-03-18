/*
 * XREFs of LOCK_TRANSACTION_LIST @ 0x140767FCC
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x140302D98 (CmpTransEnlistUowInCmTrans.c)
 *     CmpRundownUnitOfWork @ 0x140768DD8 (CmpRundownUnitOfWork.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140302660 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_TRANSACTION_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
}
