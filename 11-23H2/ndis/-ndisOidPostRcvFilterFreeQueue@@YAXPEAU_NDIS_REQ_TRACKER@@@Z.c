/*
 * XREFs of ?ndisOidPostRcvFilterFreeQueue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0084390
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIsSuccessOrSupriseRemove@@YA_NHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00374D0 (-ndisIsSuccessOrSupriseRemove@@YA_NHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0083FDC (-ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisOidPostRcvFilterFreeQueue(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // r8
  __int64 v3; // r9

  if ( *(_QWORD *)a1
    && ndisIsSuccessOrSupriseRemove(*((_DWORD *)a1 + 10), *(struct _NDIS_MINIPORT_BLOCK **)a1)
    && *(_DWORD *)(v3 + 48) >= 0xCu )
  {
    ndisFreeReceiveQueue(v2, *(_DWORD *)(*(_QWORD *)(v3 + 40) + 8LL));
    *((_DWORD *)a1 + 10) = 0;
  }
}
