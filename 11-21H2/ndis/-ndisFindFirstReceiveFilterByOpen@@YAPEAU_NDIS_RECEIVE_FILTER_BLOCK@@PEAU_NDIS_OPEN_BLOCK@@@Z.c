/*
 * XREFs of ?ndisFindFirstReceiveFilterByOpen@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C007E9B0
 * Callers:
 *     ?ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C012A924 (-ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

struct _NDIS_RECEIVE_FILTER_BLOCK *__fastcall ndisFindFirstReceiveFilterByOpen(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  _LIST_ENTRY *v3; // rdi
  _LIST_ENTRY *i; // rax
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  MiniportHandle = a1->MiniportHandle;
  NewIrql = 0;
  v3 = 0LL;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
  for ( i = MiniportHandle->ReceiveFilterList.Flink; i != &MiniportHandle->ReceiveFilterList; i = i->Flink )
  {
    if ( (struct _NDIS_OPEN_BLOCK *)i[4].Flink == a1 )
    {
      v3 = i;
      break;
    }
  }
  MiniportHandle->MiniportThread = 0LL;
  KeReleaseSpinLock(&MiniportHandle->Lock, NewIrql);
  return (struct _NDIS_RECEIVE_FILTER_BLOCK *)v3;
}
