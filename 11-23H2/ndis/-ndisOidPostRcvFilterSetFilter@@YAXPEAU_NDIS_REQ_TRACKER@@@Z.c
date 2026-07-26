/*
 * XREFs of ?ndisOidPostRcvFilterSetFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0084570
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00839A8 (-ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C0083F7C (-ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KK.c)
 */

void __fastcall ndisOidPostRcvFilterSetFilter(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  __int64 v4; // rsi
  unsigned int v5; // edx
  __int64 v6; // r8
  unsigned int *v7; // r9
  __int64 v8; // [rsp+30h] [rbp-28h]
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x16u,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      (char)v3,
      v1);
  if ( v3 && *(_DWORD *)(v1 + 48) >= 0x14u )
  {
    v4 = *(_QWORD *)(v1 + 40);
    if ( *((_DWORD *)a1 + 10) )
    {
      v5 = *(_DWORD *)(v4 + 16);
      if ( v5 )
        ndisClearReceiveFilter(v3, v5);
    }
    else
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
      ndisFindReceiveFilterByFilterId(v3, *(_DWORD *)(v4 + 16), v6, v7);
      v3->MiniportThread = 0LL;
      KeReleaseSpinLock(&v3->Lock, NewIrql);
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x17u,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      (char)v3,
      v8);
  }
}
