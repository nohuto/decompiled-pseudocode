/*
 * XREFs of ?ndisOidPostRcvFilterAllocateQueue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00840F0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C0083FAC (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 *     ?ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0083FDC (-ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisOidPostRcvFilterAllocateQueue(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // edx
  __int64 v6; // r8
  unsigned int *v7; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // rdx
  __int64 v9; // [rsp+30h] [rbp-28h]
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x10u,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      (char)v3,
      v1);
  if ( v3 && *(_DWORD *)(v1 + 48) >= 0x43Cu )
  {
    v4 = *(_QWORD *)(v1 + 40);
    if ( *((_DWORD *)a1 + 10) )
    {
      v5 = *(_DWORD *)(v4 + 12);
      if ( v5 )
        ndisFreeReceiveQueue(v3, v5);
    }
    else
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
      ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v3, *(_DWORD *)(v4 + 12), v6, v7);
      HIDWORD(ReceiveQueueByQueueId->Reserved28) = 2;
      HIDWORD(ReceiveQueueByQueueId->Reserved26) = *(_DWORD *)(v4 + 44);
      if ( *(_BYTE *)(v4 + 1) >= 2u && *(_WORD *)(v4 + 2) >= 0x444u && *(_DWORD *)(v1 + 48) >= 0x444u )
        ReceiveQueueByQueueId->OriginalDeviceCaps.D2Latency = *(_DWORD *)(v4 + 1088);
      v3->MiniportThread = 0LL;
      KeReleaseSpinLock(&v3->Lock, NewIrql);
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x11u,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      (char)v3,
      v9);
  }
}
