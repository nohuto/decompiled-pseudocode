/*
 * XREFs of ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C007EA60
 * Callers:
 *     ?ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C007EA90 (-ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisOidPostRcvFilterAllocateQueue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007EBA0 (-ndisOidPostRcvFilterAllocateQueue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterEnumFilters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007F500 (-ndisOidPreRcvFilterEnumFilters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterFreeQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007FAD0 (-ndisOidPreRcvFilterFreeQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterQueueParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0080080 (-ndisOidPreRcvFilterQueueParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0080514 (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAMETERS@@@Z @ 0x1C0080BB8 (-ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAME.c)
 *     ndisGetSharedMemoryAllocationDetails @ 0x1C00C7AF0 (ndisGetSharedMemoryAllocationDetails.c)
 * Callees:
 *     <none>
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisFindReceiveQueueByQueueId(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v4; // r8
  struct _NDIS_MINIPORT_BLOCK *i; // rax

  v4 = 0LL;
  for ( i = (struct _NDIS_MINIPORT_BLOCK *)a1->ReceiveQueueList.Flink;
        i != (struct _NDIS_MINIPORT_BLOCK *)&a1->ReceiveQueueList;
        i = *(struct _NDIS_MINIPORT_BLOCK **)&i->Header.Type )
  {
    if ( i->PcwDatapathEventMask == a2 )
      return i;
    if ( i->PcwDatapathEventMask > a2 )
      return (struct _NDIS_MINIPORT_BLOCK *)v4;
  }
  return (struct _NDIS_MINIPORT_BLOCK *)v4;
}
