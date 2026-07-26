/*
 * XREFs of NdisFRestartFilter @ 0x1C0067E60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C0022764 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C012D3A8 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisFRestartFilter(NDIS_HANDLE NdisFilterHandle)
{
  NDIS_STATUS v2; // ebx
  struct _WORK_QUEUE_ITEM *Pool2; // rdi
  int v5; // [rsp+60h] [rbp+8h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x25u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      NdisFilterHandle);
  if ( KeGetCurrentIrql() >= 2u )
  {
    v2 = 0;
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 40LL, 538985550);
    if ( Pool2 )
    {
      v5 = 0;
      if ( ndisReferenceRefEx((PKSPIN_LOCK)NdisFilterHandle + 39, 0x16u, (enum _NDIS_REFERENCE_STATUS *)&v5) )
      {
        Pool2->Parameter = Pool2;
        Pool2->WorkerRoutine = ndisQueuedRestartFilter;
        Pool2->List.Flink = 0LL;
        Pool2[1].List.Flink = (_LIST_ENTRY *)NdisFilterHandle;
        ExQueueWorkItem(Pool2, (WORK_QUEUE_TYPE)40);
      }
      else
      {
        ExFreePoolWithTag(Pool2, 0);
        v2 = -1073741823;
      }
    }
    else
    {
      v2 = -1073741670;
    }
  }
  else
  {
    ndisQueueFilterRestart((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
    v2 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x26u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      (char)NdisFilterHandle,
      v2);
  return v2;
}
