/*
 * XREFs of ?ndisOidPostRcvFilterQueueParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0084530
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAMETERS@@@Z @ 0x1C00860BC (-ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAME.c)
 */

void __fastcall ndisOidPostRcvFilterQueueParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)a1 + 4);
  if ( *(_DWORD *)(v1 + 4) == 1 && *(_QWORD *)a1 && !*((_DWORD *)a1 + 10) )
    ndisUpdateRcvFilterQueueParameters(
      *(struct _NDIS_MINIPORT_BLOCK **)a1,
      *(struct _NDIS_RECEIVE_QUEUE_PARAMETERS **)(v1 + 40));
}
