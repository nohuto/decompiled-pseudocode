/*
 * XREFs of ?ndisEmulateRSSv1Dpc@@YAXPEAU_KDPC@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@@Z @ 0x1C0086450
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00B635C (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 */

void __fastcall ndisEmulateRSSv1Dpc(
        struct _KDPC *Dpc,
        struct _NDIS_MINIPORT_BLOCK *DeferredContext,
        struct _NDIS_OID_REQUEST *SystemArgument1,
        _DWORD *SystemArgument2)
{
  SystemArgument2[16] = ndisSynchronousOidRequestInternal(0LL, DeferredContext, 0LL, SystemArgument1);
  if ( _InterlockedExchangeAdd(&DeferredContext->RssV2CompletionCount, 0xFFFFFFFF) == 1 )
    KeSetEvent(&DeferredContext->RssV2CompletionEvent, 0, 0);
}
