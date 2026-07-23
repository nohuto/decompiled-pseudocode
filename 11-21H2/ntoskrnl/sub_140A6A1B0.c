/*
 * XREFs of sub_140A6A1B0 @ 0x140A6A1B0
 * Callers:
 *     sub_140A69FD8 @ 0x140A69FD8 (sub_140A69FD8.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140581A70 @ 0x140581A70 (sub_140581A70.c)
 */

__int64 sub_140A6A1B0()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rbp
  ULONG v2; // esi
  bool v3; // zf
  ULONG v4; // edi
  __int64 v5; // r15
  struct _KEVENT *v6; // rbp
  struct _WORK_QUEUE_ITEM *v7; // rbx
  PVOID Object[64]; // [rsp+40h] [rbp-528h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+240h] [rbp-328h] BYREF

  memset(Object, 0, 0x80uLL);
  dword_140D5755C = 1;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)qword_140C553A8, 0LL);
  v1 = qword_140C55020;
  v2 = Count;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C553A8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(qword_140C553A8);
  sub_1402AFC00((ULONG_PTR)qword_140C553A8);
  v3 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v3 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( v1 && v2 )
  {
    KeWaitForSingleObject(&unk_140C55290, WrKernel, 0, 0, 0LL);
    v4 = v2;
    do
    {
      v5 = v4 - 1;
      v6 = (struct _KEVENT *)&Object[3 * v5 + 16];
      KeInitializeEvent(v6, NotificationEvent, 0);
      Object[v5] = v6;
      if ( (*(_BYTE *)(*(&StartContext + v5 + 2092) + 204) & 0x40) != 0
        || (v7 = (struct _WORK_QUEUE_ITEM *)sub_1402828F0(64, 0x30uLL, 0x775A6D4Du)) == 0LL )
      {
        KeSetEvent((PRKEVENT)&Object[3 * v5 + 16], 0, 0);
      }
      else
      {
        v7[1].List.Flink = (struct _LIST_ENTRY *)*(&StartContext + v5 + 2092);
        v7[1].List.Blink = (struct _LIST_ENTRY *)v6;
        if ( v4 == 1 )
        {
          KeSetEvent((PRKEVENT)&Object[3 * v5 + 16], 0, 0);
          sub_140581A70(v7);
        }
        else
        {
          v7->List.Flink = 0LL;
          v7->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140581A70;
          v7->Parameter = v7;
          ExQueueWorkItem(v7, CriticalWorkQueue);
        }
      }
      --v4;
    }
    while ( (_DWORD)v5 );
    if ( v2 > 1 )
      KeWaitForMultipleObjects(v2, Object, WaitAll, Executive, 0, 0, 0LL, &WaitBlockArray);
  }
  dword_140D5755C = 0;
  return 1LL;
}
