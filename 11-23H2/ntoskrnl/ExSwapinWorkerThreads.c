/*
 * XREFs of ExSwapinWorkerThreads @ 0x140A00858
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140AA67C0 (PopUnlockAfterSleepWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 *     ExShutdownSystem @ 0x140AAA9C8 (ExShutdownSystem.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeSetKernelStackSwapEnable @ 0x1402A8F40 (KeSetKernelStackSwapEnable.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     KeInitializeApc @ 0x1402BE960 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1402CC8D0 (KeInsertQueueApc.c)
 *     PsGetNextPartitionUnsafe @ 0x140311180 (PsGetNextPartitionUnsafe.c)
 *     KeRemoveQueueApc @ 0x140362500 (KeRemoveQueueApc.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F5F4 (PoPushPowerStateTransitionRecordWithCallback.c)
 *     PsGetNextProcessThread @ 0x140742CA0 (PsGetNextProcessThread.c)
 *     PsReferencePartitionSystemProcess @ 0x1409B66D0 (PsReferencePartitionSystemProcess.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140AA5FDC (PoDelistPowerStateTransitionBlocker.c)
 */

void __fastcall ExSwapinWorkerThreads(BOOLEAN a1)
{
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *i; // rcx
  struct _KTHREAD *j; // rdx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *NextProcessThread; // rax
  struct _KTHREAD *v10; // rdi
  _UNKNOWN **NextPartitionUnsafe; // rax
  _QWORD *v12; // rsi
  signed __int32 v13[8]; // [rsp+0h] [rbp-89h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v15[128]; // [rsp+60h] [rbp-29h] BYREF
  BOOLEAN Enable; // [rsp+F0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+F8h] [rbp+6Fh] BYREF
  LARGE_INTEGER Timeout; // [rsp+100h] [rbp+77h] BYREF

  Enable = a1;
  memset(v15, 0, 0x58uLL);
  Object = 0LL;
  Timeout.QuadPart = -100000000LL;
  memset(&Event, 0, sizeof(Event));
  CurrentThread = KeGetCurrentThread();
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  ExAcquireFastMutex(&ExpWorkerSwapinMutex);
  ExpWorkersCanSwap = Enable;
  _InterlockedOr(v13, 0);
  for ( i = 0LL; ; i = v12 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(i);
    v12 = NextPartitionUnsafe;
    if ( !NextPartitionUnsafe )
      break;
    if ( (int)PsReferencePartitionSystemProcess((__int64)NextPartitionUnsafe, &Object) >= 0 )
    {
      for ( j = 0LL; ; j = v10 )
      {
        NextProcessThread = (struct _KTHREAD *)PsGetNextProcessThread((__int64)Object, j);
        v10 = NextProcessThread;
        if ( !NextProcessThread )
          break;
        if ( (*((_DWORD *)&NextProcessThread[1].SwapListEntry + 3) & 1) != 0 )
        {
          if ( NextProcessThread == CurrentThread )
          {
            KeSetKernelStackSwapEnable(Enable);
          }
          else
          {
            KeInitializeApc(
              (__int64)v15,
              (__int64)NextProcessThread,
              0,
              (__int64)ExpSetSwappingKernelApc,
              0LL,
              0LL,
              0,
              (__int64)&Enable);
            if ( (unsigned __int8)KeInsertQueueApc((__int64)v15, (__int64)&Event, 0LL, 3u) )
            {
              if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) == 258 && !KeRemoveQueueApc((__int64)v15) )
              {
                v4 = PoPushPowerStateTransitionRecordWithCallback(Object, v10, 0LL, 0LL);
                KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                if ( v4 >= 0 )
                  PoDelistPowerStateTransitionBlocker(v6, v5, v7, v8);
              }
            }
          }
        }
      }
      ObfDereferenceObject(Object);
    }
  }
  ExReleaseFastMutex(&ExpWorkerSwapinMutex);
}
