/*
 * XREFs of ?ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0083FBC
 * Callers:
 *     ?ndisOidPostRcvFilterAllocateQueue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00840D0 (-ndisOidPostRcvFilterAllocateQueue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostRcvFilterFreeQueue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0084370 (-ndisOidPostRcvFilterFreeQueue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C005BB74 (WPP_RECORDER_SF_qdL_ea_1C005BB74.c)
 *     WPP_RECORDER_SF_ql @ 0x1C0060DBC (WPP_RECORDER_SF_ql_ea_1C0060DBC.c)
 *     ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C0083DA8 (-ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C0083F8C (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00D2668 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ndisFreeReceiveQueue(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r8
  unsigned int *v6; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // rax
  KIRQL v8; // dl
  struct _NDIS_MINIPORT_BLOCK *v9; // rbp
  int v10; // edx
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x12u,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      (char)a1,
      a2);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(a1, a2, v5, v6);
  v8 = NewIrql;
  v9 = ReceiveQueueByQueueId;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v8);
  if ( v9 )
  {
    if ( (unsigned int)ndisDereferenceReceiveQueue(v9) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  else
  {
    v2 = -1073741811;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      0x19u,
      0x13u,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      (char)a1,
      a2,
      v2);
  return v2;
}
