/*
 * XREFs of MiZeroAllPageFiles @ 0x140AABBE4
 * Callers:
 *     MiShutdownSystem @ 0x140AAB9E0 (MiShutdownSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiZeroPageFile @ 0x14061A0C0 (MiZeroPageFile.c)
 */

__int64 MiZeroAllPageFiles()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rdi
  __int64 v4; // rsi
  ULONG v5; // edi
  bool v6; // zf
  ULONG v7; // esi
  __int64 v8; // r15
  struct _KEVENT *v9; // rbp
  struct _WORK_QUEUE_ITEM *Pool; // rbx
  PVOID Object[64]; // [rsp+40h] [rbp-528h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+240h] [rbp-328h] BYREF

  memset(Object, 0, 0x80uLL);
  VfZeroAllPagesRunning = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v1 = KeAbPreAcquire((__int64)qword_140C6B878, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)qword_140C6B878, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(qword_140C6B878, v1, (__int64)qword_140C6B878);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  v4 = qword_140C6B4F8;
  v5 = Count;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C6B878, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_140C6B878);
  KeAbPostRelease((ULONG_PTR)qword_140C6B878);
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v4 && v5 )
  {
    KeWaitForSingleObject(&unk_140C6B760, WrKernel, 0, 0, 0LL);
    v7 = v5;
    do
    {
      v8 = v7 - 1;
      v9 = (struct _KEVENT *)&Object[3 * v8 + 16];
      KeInitializeEvent(v9, NotificationEvent, 0);
      Object[v8] = v9;
      if ( (*(_BYTE *)(*(_QWORD *)&MiSystemPartition[4 * v8 + 8528] + 204LL) & 0x40) != 0
        || (Pool = (struct _WORK_QUEUE_ITEM *)MiAllocatePool(64, 0x30uLL, 0x775A6D4Du)) == 0LL )
      {
        KeSetEvent((PRKEVENT)&Object[3 * v8 + 16], 0, 0);
      }
      else
      {
        Pool[1].List.Flink = *(struct _LIST_ENTRY **)&MiSystemPartition[4 * v8 + 8528];
        Pool[1].List.Blink = (struct _LIST_ENTRY *)v9;
        if ( v7 == 1 )
        {
          KeSetEvent((PRKEVENT)&Object[3 * v8 + 16], 0, 0);
          MiZeroPageFile(Pool);
        }
        else
        {
          Pool->List.Flink = 0LL;
          Pool->WorkerRoutine = (void (__fastcall *)(void *))MiZeroPageFile;
          Pool->Parameter = Pool;
          ExQueueWorkItem(Pool, CriticalWorkQueue);
        }
      }
      --v7;
    }
    while ( (_DWORD)v8 );
    if ( v5 > 1 )
      KeWaitForMultipleObjects(v5, Object, WaitAll, Executive, 0, 0, 0LL, &WaitBlockArray);
  }
  VfZeroAllPagesRunning = 0;
  return 1LL;
}
