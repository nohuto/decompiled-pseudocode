/*
 * XREFs of ?ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C007E45C
 * Callers:
 *     ?ndisOidPostRcvFilterClearFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007ED00 (-ndisOidPostRcvFilterClearFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostRcvFilterSetFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007F040 (-ndisOidPostRcvFilterSetFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C0056858 (WPP_RECORDER_SF_qdL_ea_1C0056858.c)
 *     WPP_RECORDER_SF_ql @ 0x1C005BB6C (WPP_RECORDER_SF_ql_ea_1C005BB6C.c)
 *     ?ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1C007E6C0 (-ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z.c)
 *     ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C007EA30 (-ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KK.c)
 */

__int64 __fastcall ndisClearReceiveFilter(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r8d
  unsigned int *v6; // r9
  struct _NDIS_RECEIVE_FILTER_BLOCK *ReceiveFilterByFilterId; // rax
  KIRQL v8; // dl
  struct _NDIS_RECEIVE_FILTER_BLOCK *v9; // rbp
  int v10; // edx
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x19u,
      (struct _GUID *)&WPP_a095d03b818b3b9702993c77529453c6_Traceguids,
      (char)a1,
      a2);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(a1, a2, v5, v6);
  v8 = NewIrql;
  v9 = ReceiveFilterByFilterId;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v8);
  if ( v9 )
    ndisDereferenceReceiveFilter(v9);
  else
    v2 = -1073741811;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      0x19u,
      0x1Au,
      (struct _GUID *)&WPP_a095d03b818b3b9702993c77529453c6_Traceguids,
      (char)a1,
      a2,
      v2);
  return v2;
}
