/*
 * XREFs of PfSnPrefetchSectionsCleanup @ 0x14074D034
 * Callers:
 *     PfSnPrefetchSections @ 0x14074CD68 (PfSnPrefetchSections.c)
 * Callees:
 *     ExInitializePushLock @ 0x140223590 (ExInitializePushLock.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x140304E00 (KeQueryPriorityThread.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A5D0 (ExWaitForRundownProtectionRelease.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall PfSnPrefetchSectionsCleanup(unsigned __int64 a1, int a2, unsigned int a3, __int64 a4)
{
  struct _WORK_QUEUE_ITEM *v4; // r14
  __int64 v8; // r15
  KPRIORITY PriorityThread; // edi
  void (__fastcall **p_WorkerRoutine)(void *); // rbx
  struct _EX_RUNDOWN_REF RunRef[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h]

  v4 = *(struct _WORK_QUEUE_ITEM **)(a1 + 88);
  v8 = a3;
  memset(v4, 0, 48LL * a3);
  *(_OWORD *)&RunRef[0].Count = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  ExInitializePushLock(RunRef);
  RunRef[1].Count = a1;
  LODWORD(v14) = a2;
  *(_QWORD *)&v13 = a4;
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  if ( a3 )
  {
    p_WorkerRoutine = &v4->WorkerRoutine;
    do
    {
      p_WorkerRoutine[2] = (void (__fastcall *)(void *))RunRef;
      *(p_WorkerRoutine - 2) = 0LL;
      *p_WorkerRoutine = (void (__fastcall *)(void *))PfSnSectionInfoCleanupWorkItem;
      p_WorkerRoutine[1] = (void (__fastcall *)(void *))v4;
      ExAcquireRundownProtection_0(RunRef);
      ExQueueWorkItem(v4, (WORK_QUEUE_TYPE)(PriorityThread + 32));
      v4 = (struct _WORK_QUEUE_ITEM *)((char *)v4 + 48);
      p_WorkerRoutine += 6;
      --v8;
    }
    while ( v8 );
  }
  ExWaitForRundownProtectionRelease(RunRef);
}
