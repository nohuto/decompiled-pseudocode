/*
 * XREFs of ?ndisOidPostRcvFilterMoveFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00843E0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisIsSuccessOrSupriseRemove@@YA_NHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00374D0 (-ndisIsSuccessOrSupriseRemove@@YA_NHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075FC0 (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C0083F7C (-ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KK.c)
 */

void __fastcall ndisOidPostRcvFilterMoveFilter(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // r8
  unsigned int *v7; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveFilterByFilterId; // rax
  KIRQL v9; // dl
  struct _NDIS_MINIPORT_BLOCK *v10; // r14
  _NDIS_MINIPORT_BLOCK *PrimaryMiniport; // rbx
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // rax
  _LIST_ENTRY *v13; // rcx
  __int64 v14; // r8
  wchar_t *Buffer; // rdx
  __int64 v16; // rdx
  _LIST_ENTRY *p_FilterList; // rdx
  _LIST_ENTRY *Flink; // r8
  struct _NDIS_NIC_SWITCH_BLOCK *NicSwitch; // rcx
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  if ( v1 && ndisIsSuccessOrSupriseRemove(*((_DWORD *)a1 + 10), v1) && *(_DWORD *)(v3 + 48) >= 8u )
  {
    v4 = *(_QWORD *)(v3 + 40);
    v5 = *(_DWORD *)(v4 + 4);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
    ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(v1, v5, v6, v7);
    v9 = NewIrql;
    v1->MiniportThread = 0LL;
    v10 = ReceiveFilterByFilterId;
    KeReleaseSpinLock(&v1->Lock, v9);
    PrimaryMiniport = v10->PrimaryMiniport;
    VPortByVPortId = ndisIovFindVPortByVPortId(v1, *(_DWORD *)(v4 + 20));
    v13 = (_LIST_ENTRY *)&v10->32;
    v14 = *(_QWORD *)&v10->Reserved4.Length;
    if ( *(struct _NDIS_MINIPORT_BLOCK **)(v14 + 8) != (struct _NDIS_MINIPORT_BLOCK *)&v10->32 )
      goto LABEL_15;
    Buffer = v10->Reserved4.Buffer;
    if ( *(_LIST_ENTRY **)Buffer != v13 )
      goto LABEL_15;
    *(_QWORD *)Buffer = v14;
    *(_QWORD *)(v14 + 8) = Buffer;
    --LODWORD(PrimaryMiniport->WorkQueue[5].Next);
    v16 = *(_QWORD *)&PrimaryMiniport->LinkStateIndicationFlags;
    if ( PrimaryMiniport->PnPFlags )
      --*(_DWORD *)(v16 + 656);
    else
      --*(_DWORD *)(v16 + 652);
    p_FilterList = &VPortByVPortId->FilterList;
    Flink = VPortByVPortId->FilterList.Flink;
    if ( Flink->Blink != &VPortByVPortId->FilterList )
LABEL_15:
      __fastfail(3u);
    v13->Flink = Flink;
    v10->Reserved4.Buffer = (wchar_t *)p_FilterList;
    Flink->Blink = v13;
    p_FilterList->Flink = v13;
    ++VPortByVPortId->NumFilters;
    NicSwitch = VPortByVPortId->NicSwitch;
    if ( VPortByVPortId->VPortParams.VPortId )
      ++*((_DWORD *)NicSwitch + 164);
    else
      ++*((_DWORD *)NicSwitch + 163);
    v10->PrimaryMiniport = (_NDIS_MINIPORT_BLOCK *)VPortByVPortId;
    *((_DWORD *)a1 + 10) = 0;
  }
}
