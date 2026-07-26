/*
 * XREFs of ndisGetSharedMemoryAllocationDetails @ 0x1C00CC8B4
 * Callers:
 *     NdisAllocateSharedMemory @ 0x1C00CDD60 (NdisAllocateSharedMemory.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C0083FAC (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 */

__int64 __fastcall ndisGetSharedMemoryAllocationDetails(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  unsigned int *v7; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // rax
  __int64 v9; // rcx
  KIRQL v10; // dl
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225659LL;
  if ( a1->Header.Type != 17 )
  {
    if ( a1->Header.Type != 18 )
      return 3221225485LL;
    *(_QWORD *)(a3 + 16) = a1;
    a1 = a1->BaseMiniport;
  }
  *(_QWORD *)(a3 + 8) = a1;
  if ( !a1 )
    goto LABEL_11;
  if ( *(_DWORD *)(a2 + 8) )
  {
    NewIrql = 0;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(
                              *(struct _NDIS_MINIPORT_BLOCK **)(a3 + 8),
                              *(_DWORD *)(a2 + 8),
                              v6,
                              v7);
    v9 = *(_QWORD *)(a3 + 8);
    v10 = NewIrql;
    *(_QWORD *)(a3 + 24) = ReceiveQueueByQueueId;
    *(_QWORD *)(v9 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 96), v10);
  }
  else
  {
    *(_QWORD *)(a3 + 24) = a1->DefaultReceiveQueue;
  }
  if ( *(_QWORD *)(a3 + 24) )
  {
LABEL_11:
    *(_DWORD *)a3 = 1;
    return 0LL;
  }
  return 3221225485LL;
}
