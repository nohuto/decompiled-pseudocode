/*
 * XREFs of QueueCapWork @ 0x1C000C330
 * Callers:
 *     QuickCapTraceDpc @ 0x1C00058A0 (QuickCapTraceDpc.c)
 *     LongCapTraceDpc @ 0x1C000C300 (LongCapTraceDpc.c)
 * Callees:
 *     <none>
 */

void __fastcall QueueCapWork(PVOID *a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG v8; // eax
  __int64 Pool2; // rax
  __int64 v10; // rdi

  v8 = IoSizeofWorkItem();
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(v8 + 32), 1919119952LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 8) = a2;
    *(_QWORD *)Pool2 = a1;
    *(_QWORD *)(Pool2 + 16) = a3;
    *(_QWORD *)(Pool2 + 24) = a4;
    IoInitializeWorkItem(*a1, (PIO_WORKITEM)(Pool2 + 32));
    IoQueueWorkItem((PIO_WORKITEM)(v10 + 32), CapLogWorker, DelayedWorkQueue, (PVOID)v10);
  }
}
