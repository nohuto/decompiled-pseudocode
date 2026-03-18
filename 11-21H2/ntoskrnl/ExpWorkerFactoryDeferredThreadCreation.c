/*
 * XREFs of ExpWorkerFactoryDeferredThreadCreation @ 0x140255720
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x1403C6970 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402F8420 (ExpWorkerFactoryCheckCreate.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlpInterlockedFlushSList @ 0x140429900 (RtlpInterlockedFlushSList.c)
 */

LONG_PTR ExpWorkerFactoryDeferredThreadCreation()
{
  LONG_PTR result; // rax
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  ExpWorkerFactoryThreadCreationState = 0;
  result = (LONG_PTR)RtlpInterlockedFlushSList(&ExpWorkerFactoryThreadCreationList);
  v1 = (_QWORD *)result;
  if ( result )
  {
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2[2], &LockHandle);
      *((_DWORD *)v2 + 102) &= ~8u;
      ExpWorkerFactoryCheckCreate(v2, &LockHandle);
      result = ObfDereferenceObjectWithTag(v2, 0x746C6644u);
    }
    while ( v1 );
  }
  return result;
}
