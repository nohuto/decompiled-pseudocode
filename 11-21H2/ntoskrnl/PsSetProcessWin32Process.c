/*
 * XREFs of PsSetProcessWin32Process @ 0x1406C7F10
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsSetProcessWin32Process(_QWORD *Object, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v4; // edi
  volatile signed __int64 *v8; // rbp
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v11; // r14

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --*((_WORD *)CurrentThread + 242);
  v8 = Object + 135;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object + 135), 0LL);
  if ( a2 )
  {
    if ( (*((_DWORD *)Object + 281) & 8) != 0 || Object[161] )
    {
      v4 = -1073741558;
    }
    else
    {
      Object[161] = a2;
      if ( ((Object[302] | (Object[302] >> 30)) & 0x3FFFFFFFLL) != 0 )
      {
        PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x65446954u);
        v11 = PoolWithTag;
        if ( PoolWithTag )
        {
          ObfReferenceObjectWithTag(Object, 0x624A7350u);
          v11[1].List.Flink = (struct _LIST_ENTRY *)Object;
          v11->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1405E1550;
          v11->Parameter = v11;
          v11->List.Flink = 0LL;
          ExQueueWorkItem(v11, NormalWorkQueue);
        }
      }
    }
  }
  else if ( Object[161] == a3 )
  {
    Object[161] = 0LL;
  }
  else
  {
    v4 = -1073741823;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  sub_1402AFC00((ULONG_PTR)v8);
  sub_1402AC800((__int64)CurrentThread);
  return v4;
}
