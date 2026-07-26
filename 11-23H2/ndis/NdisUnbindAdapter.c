/*
 * XREFs of NdisUnbindAdapter @ 0x1C009DCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F73C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C009CDF0 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisUnbindAdapter(NDIS_HANDLE NdisBindingHandle)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rbx

  if ( KeGetCurrentIrql() )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 40LL, 1769423950);
    if ( !Pool2 )
      return -1073741670;
    ndisMReferenceOpen((__int64)NdisBindingHandle, 0x12u);
    Pool2->List.Flink = 0LL;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))ndisUnbindAdapterWorkItem;
    Pool2[1].List.Flink = (_LIST_ENTRY *)NdisBindingHandle;
    Pool2->Parameter = Pool2;
    ExQueueWorkItem(Pool2, (WORK_QUEUE_TYPE)40);
  }
  else
  {
    ndisUnbindAdapterInner((struct _NDIS_OPEN_BLOCK *)NdisBindingHandle);
  }
  return 0;
}
