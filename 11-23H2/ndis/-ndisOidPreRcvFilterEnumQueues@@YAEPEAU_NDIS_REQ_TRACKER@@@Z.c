/*
 * XREFs of ?ndisOidPreRcvFilterEnumQueues@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0084D90
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DD8A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisCopyReceiveQueueInfo@@YAXPEAU_NDIS_RECEIVE_QUEUE_INFO@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C0083AA8 (-ndisCopyReceiveQueueInfo@@YAXPEAU_NDIS_RECEIVE_QUEUE_INFO@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 */

char __fastcall ndisOidPreRcvFilterEnumQueues(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  unsigned int v2; // r12d
  _BYTE *v3; // r13
  char v5; // r14
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  __int64 v8; // rcx
  char v9; // bp
  _BYTE *OidSourceHandle; // rax
  struct _NDIS_RECEIVE_QUEUE_BLOCK **p_DefaultReceiveQueue; // rcx
  unsigned int NumReceiveQueues; // r15d
  unsigned int v13; // edx
  __int64 v14; // rax
  KIRQL v15; // dl
  __int64 v16; // rax
  struct _NDIS_RECEIVE_QUEUE_INFO *v17; // rbp
  _QWORD *v18; // rax
  _QWORD *v19; // r13
  struct _NDIS_RECEIVE_QUEUE_BLOCK *p_ReceiveQueueList; // rax
  struct _NDIS_RECEIVE_QUEUE_BLOCK *Flink; // r13
  KIRQL v22; // dl
  __int64 v23; // rax
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *i; // [rsp+88h] [rbp+10h]
  unsigned int v27; // [rsp+90h] [rbp+18h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v2 = 0;
  v3 = 0LL;
  NewIrql = 0;
  v5 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x1Cu,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      a1);
  v6 = *((_QWORD *)a1 + 4);
  v7 = (_DWORD *)((char *)a1 + 40);
  if ( (*(_DWORD *)(v6 + 4) & 0xFFFFFFFD) != 0 )
  {
    *v7 = -1073741637;
    goto LABEL_31;
  }
  *(_DWORD *)(v6 + 52) = 0;
  if ( !v1 )
  {
    v5 = 0;
    goto LABEL_31;
  }
  *v7 = -1073741637;
  if ( v1->ReceiveFilterCurrentCapabilities )
  {
    v8 = *((_QWORD *)a1 + 4);
    if ( *(_DWORD *)(v8 + 4) == 2 )
    {
      v9 = 0;
    }
    else
    {
      OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v8);
      v3 = OidSourceHandle;
      if ( !OidSourceHandle || *OidSourceHandle != 18 )
        goto LABEL_31;
      v9 = 1;
    }
    LOBYTE(i) = v9;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
    p_DefaultReceiveQueue = &v1->DefaultReceiveQueue;
    if ( v9 )
    {
      NumReceiveQueues = *((_DWORD *)v3 + 188);
    }
    else
    {
      NumReceiveQueues = v1->NumReceiveQueues;
      if ( *p_DefaultReceiveQueue )
        ++NumReceiveQueues;
    }
    v13 = 1096 * NumReceiveQueues + 16;
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 56LL) = v13;
    v14 = *((_QWORD *)a1 + 4);
    v27 = v13;
    if ( v13 <= *(_DWORD *)(v14 + 48) )
    {
      v16 = *(_QWORD *)(v14 + 40);
      v17 = (struct _NDIS_RECEIVE_QUEUE_INFO *)(v16 + 16);
      *(_DWORD *)v16 = 1048960;
      *(_DWORD *)(v16 + 4) = 16;
      *(_DWORD *)(v16 + 8) = NumReceiveQueues;
      *(_DWORD *)(v16 + 12) = 1096;
      if ( (_BYTE)i )
      {
        v18 = v3 + 736;
        v19 = (_QWORD *)*((_QWORD *)v3 + 92);
        for ( i = v18; v19 != i; ++v2 )
        {
          if ( v2 >= NumReceiveQueues )
            break;
          ndisCopyReceiveQueueInfo(v17, (struct _NDIS_RECEIVE_QUEUE_BLOCK *)(v19 - 2));
          v19 = (_QWORD *)*v19;
          v17 = (struct _NDIS_RECEIVE_QUEUE_INFO *)((char *)v17 + 1096);
        }
      }
      else
      {
        if ( *p_DefaultReceiveQueue )
        {
          ndisCopyReceiveQueueInfo((struct _NDIS_RECEIVE_QUEUE_INFO *)(v16 + 16), *p_DefaultReceiveQueue);
          v17 = (struct _NDIS_RECEIVE_QUEUE_INFO *)((char *)v17 + 1096);
          v2 = 1;
        }
        p_ReceiveQueueList = (struct _NDIS_RECEIVE_QUEUE_BLOCK *)&v1->ReceiveQueueList;
        Flink = (struct _NDIS_RECEIVE_QUEUE_BLOCK *)v1->ReceiveQueueList.Flink;
        while ( Flink != p_ReceiveQueueList && v2 < NumReceiveQueues )
        {
          ndisCopyReceiveQueueInfo(v17, Flink);
          Flink = (struct _NDIS_RECEIVE_QUEUE_BLOCK *)Flink->AdapterLink.Flink;
          p_ReceiveQueueList = (struct _NDIS_RECEIVE_QUEUE_BLOCK *)&v1->ReceiveQueueList;
          v17 = (struct _NDIS_RECEIVE_QUEUE_INFO *)((char *)v17 + 1096);
          ++v2;
        }
      }
      v22 = NewIrql;
      v1->MiniportThread = 0LL;
      KeReleaseSpinLock(&v1->Lock, v22);
      v23 = *((_QWORD *)a1 + 4);
      *v7 = 0;
      *(_DWORD *)(v23 + 52) = v27;
    }
    else
    {
      v15 = NewIrql;
      v1->MiniportThread = 0LL;
      KeReleaseSpinLock(&v1->Lock, v15);
      *v7 = -1073676266;
    }
  }
LABEL_31:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x1Du,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      (char)v1,
      *v7);
  return v5;
}
