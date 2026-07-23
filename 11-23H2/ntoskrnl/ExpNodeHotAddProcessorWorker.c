/*
 * XREFs of ExpNodeHotAddProcessorWorker @ 0x140A00A60
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     PsGetNextPartition @ 0x14036AF10 (PsGetNextPartition.c)
 *     PsQuitNextPartition @ 0x1405A6B10 (PsQuitNextPartition.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1407D5F5C (KeSynchronizeWithDynamicProcessors.c)
 *     ExpWorkQueueManagerStart @ 0x140849770 (ExpWorkQueueManagerStart.c)
 */

void __fastcall ExpNodeHotAddProcessorWorker(unsigned __int16 *a1)
{
  _QWORD *v2; // rcx
  int v3; // eax
  _QWORD *NextPartition; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rbx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  KeSynchronizeWithDynamicProcessors();
  v2 = 0LL;
  while ( 1 )
  {
    NextPartition = PsGetNextPartition(v2);
    v7 = NextPartition;
    if ( !NextPartition )
      break;
    v3 = ExpWorkQueueManagerStart(*(_QWORD *)(*(_QWORD *)(NextPartition[2] + 16LL) + 8LL * *a1), *a1, v5, v6);
    v2 = v7;
    if ( v3 < 0 )
    {
      PsQuitNextPartition(v7);
      Interval.QuadPart = -500000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      *((_QWORD *)a1 + 38) = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 152), DelayedWorkQueue);
      return;
    }
  }
}
