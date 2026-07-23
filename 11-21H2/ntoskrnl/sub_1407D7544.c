/*
 * XREFs of sub_1407D7544 @ 0x1407D7544
 * Callers:
 *     sub_1407D7100 @ 0x1407D7100 (sub_1407D7100.c)
 * Callees:
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1407D7544(ULONG_PTR a1, int a2, unsigned int a3, __int64 a4)
{
  struct _WORK_QUEUE_ITEM *v4; // r14
  __int64 v8; // r15
  KPRIORITY PriorityThread; // edi
  PWORKER_THREAD_ROUTINE *p_WorkerRoutine; // rbx
  struct _EX_RUNDOWN_REF RunRef[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h]

  v4 = *(struct _WORK_QUEUE_ITEM **)(a1 + 88);
  v8 = a3;
  memset(v4, 0, 48LL * a3);
  *(_OWORD *)&RunRef[0].Count = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  ExInitializeRundownProtection(RunRef);
  RunRef[1].Count = a1;
  LODWORD(v14) = a2;
  *(_QWORD *)&v13 = a4;
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  if ( a3 )
  {
    p_WorkerRoutine = &v4->WorkerRoutine;
    do
    {
      p_WorkerRoutine[2] = (PWORKER_THREAD_ROUTINE)RunRef;
      *(p_WorkerRoutine - 2) = 0LL;
      *p_WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1407DF140;
      p_WorkerRoutine[1] = (PWORKER_THREAD_ROUTINE)v4;
      sub_140347810(RunRef);
      ExQueueWorkItem(v4, (WORK_QUEUE_TYPE)(PriorityThread + 32));
      v4 = (struct _WORK_QUEUE_ITEM *)((char *)v4 + 48);
      p_WorkerRoutine += 6;
      --v8;
    }
    while ( v8 );
  }
  ExWaitForRundownProtectionRelease(RunRef);
}
