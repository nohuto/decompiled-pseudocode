/*
 * XREFs of ndisKillReceiveWorkerThreadPool @ 0x1C00A4094
 * Callers:
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0006198 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C0030BC8 (ndisCreateReceiveWorkerThreadPool.c)
 * Callees:
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C000191C (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void ndisKillReceiveWorkerThreadPool()
{
  unsigned int v0; // edx
  __int64 i; // rbx
  struct _WORK_QUEUE_ITEM *v2; // rdx
  __int64 v3; // rbx
  void *v4; // rcx

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0xBu,
      (struct _GUID *)&WPP_04120f1ead0836c58aece9b177b8d3ef_Traceguids);
  v0 = ndisMaxNumberOfProcessors;
  for ( i = 0LL; (unsigned int)i < ndisMaxNumberOfProcessors; i = (unsigned int)(i + 1) )
  {
    if ( !*((_QWORD *)qword_1C00EC288 + i) )
      break;
    v2 = (struct _WORK_QUEUE_ITEM *)((char *)ndisPerCpuPoisonPills + 32 * (unsigned int)i);
    v2->WorkerRoutine = 0LL;
    v2->List.Flink = 0LL;
    v2->Parameter = v2;
    ndisInsertInWorkQueue((struct _KSEMAPHORE *)qword_1C00EC280 + 2 * (unsigned __int64)(unsigned int)i, v2, 0);
    v0 = ndisMaxNumberOfProcessors;
  }
  v3 = 0LL;
  if ( v0 )
  {
    do
    {
      v4 = (void *)*((_QWORD *)qword_1C00EC288 + v3);
      if ( !v4 )
        break;
      ndisWaitForKernelObject(v4);
      ObfDereferenceObject(*((PVOID *)qword_1C00EC288 + v3));
      *((_QWORD *)qword_1C00EC288 + v3) = 0LL;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < ndisMaxNumberOfProcessors );
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0xCu,
      (struct _GUID *)&WPP_04120f1ead0836c58aece9b177b8d3ef_Traceguids);
}
