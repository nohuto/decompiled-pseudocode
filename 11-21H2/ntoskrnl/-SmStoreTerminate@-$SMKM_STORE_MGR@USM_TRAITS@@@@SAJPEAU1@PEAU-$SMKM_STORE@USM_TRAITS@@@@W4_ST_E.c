/*
 * XREFs of ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x1405FD08C
 * Callers:
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x1405F8850 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     SmKmStoreReference @ 0x14035F464 (SmKmStoreReference.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreTerminate(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v8; // edi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  int v10; // edx

  v8 = 0;
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x6D546D73u);
  if ( PoolWithTag )
  {
    if ( SmKmStoreReference(a1, *(_DWORD *)(a2 + 6016)) )
    {
      PoolWithTag->List.Blink = 0LL;
      PoolWithTag[1].WorkerRoutine = 0LL;
      PoolWithTag[1].Parameter = 0LL;
      PoolWithTag->WorkerRoutine = SmKmStoreTerminateWorker;
      PoolWithTag->Parameter = PoolWithTag;
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag[1].List.Blink = (struct _LIST_ENTRY *)(a2 + 6216);
      PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)a1;
      LODWORD(PoolWithTag[1].WorkerRoutine) = *(_DWORD *)(a2 + 6016);
      v10 = *(_DWORD *)(a1 + 1840) & 1;
      LODWORD(PoolWithTag[1].Parameter) = a3;
      HIDWORD(PoolWithTag[1].WorkerRoutine) = v10;
      HIDWORD(PoolWithTag[1].Parameter) = a4;
      ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
    }
    else
    {
      v8 = -1073741431;
      ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
