/*
 * XREFs of ?ndisRssV2InitializeDpcWorkerContext@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@@Z @ 0x1C0033ECC
 * Callers:
 *     ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0033E7C (-ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisRssV2InitializeDpcWorkerContext(PVOID DeferredContext, struct _KDPC **a2)
{
  unsigned int v2; // ebx
  struct _KDPC *Pool2; // rax
  struct _KDPC *v6; // rdi

  v2 = 0;
  *a2 = 0LL;
  Pool2 = (struct _KDPC *)ExAllocatePool2(72LL, 3208LL, 1936868430);
  v6 = Pool2;
  if ( Pool2 )
  {
    KeInitializeDpc(Pool2, ndisEmulateRSSv1Dpc, DeferredContext);
    KeSetImportanceDpc(v6, MediumHighImportance);
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
