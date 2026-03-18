/*
 * XREFs of ExpWorkerFactoryDeferredThreadCreation @ 0x140366064
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x14038EA40 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260E60 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402B8D40 (ExpWorkerFactoryCheckCreate.c)
 *     RtlpInterlockedFlushSList @ 0x140428F30 (RtlpInterlockedFlushSList.c)
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
      ExpWorkerFactoryCheckCreate((PSLIST_ENTRY)v2, &LockHandle, 1);
      result = ObfDereferenceObjectWithTag(v2, 0x746C6644u);
    }
    while ( v1 );
  }
  return result;
}
