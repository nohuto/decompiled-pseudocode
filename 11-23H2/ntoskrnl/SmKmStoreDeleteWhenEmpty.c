/*
 * XREFs of SmKmStoreDeleteWhenEmpty @ 0x1403433CC
 * Callers:
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1405CCB38 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmpKeyedStoreCreate @ 0x1407B7770 (SmpKeyedStoreCreate.c)
 *     SmpKeyedStoreDeleteInitiate @ 0x1407B8460 (SmpKeyedStoreDeleteInitiate.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x1402B982C (ExQueueWorkItemToPartition.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140345424 (SmKmStoreRefFromStoreIndex.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SmKmStoreDeleteWhenEmpty(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  __int64 v7; // rax
  __int64 v8; // r11
  int v9; // r9d
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  __int64 Object; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v13[3]; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]
  __int64 v16; // [rsp+98h] [rbp+18h] BYREF

  v3 = *(_DWORD *)(a2 + 6016);
  v4 = 0;
  WorkItem.List.Blink = 0LL;
  v5 = v3 & 0x3FF;
  BYTE3(Object) = 0;
  v15 = 0;
  v16 = 0LL;
  v7 = SmKmStoreRefFromStoreIndex(a1, v5, a3, (unsigned int)a3);
  if ( v9 )
  {
    _InterlockedOr8((volatile signed __int8 *)(v7 + 34), 1u);
  }
  else if ( (*(_BYTE *)(v7 + 34) & 1) == 0 )
  {
    return v4;
  }
  if ( !*(_QWORD *)(v8 + 88) )
  {
    _m_prefetchw((const void *)(v7 + 34));
    if ( (_InterlockedOr8((volatile signed __int8 *)(v7 + 34), 2u) & 2) == 0
      && (*(int (__fastcall **)(__int64, __int64 *, __int64))(a1 + 256))(a1, &v16, 8LL) >= 0 )
    {
      v13[1] = v13;
      v13[0] = v13;
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))SmKmStoreDeleteWhenEmptyWorker;
      WorkItem.Parameter = &WorkItem;
      WorkItem.List.Blink = 0LL;
      Object = 393216LL;
      v15 = 0;
      v13[2] = a1;
      v14 = v5;
      WorkItem.List.Flink = 0LL;
      if ( v16 )
        ExQueueWorkItemToPartition(&WorkItem, 1, 0xFFFFFFFF, v16);
      else
        ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
      KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
      return 1;
    }
  }
  return v4;
}
