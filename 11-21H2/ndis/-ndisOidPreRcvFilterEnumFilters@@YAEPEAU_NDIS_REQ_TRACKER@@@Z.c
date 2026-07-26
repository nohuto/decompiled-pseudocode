/*
 * XREFs of ?ndisOidPreRcvFilterEnumFilters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007F500
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0070BD8 (-ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C007EA60 (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 */

char __fastcall ndisOidPreRcvFilterEnumFilters(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // r13
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  char v5; // r12
  __int64 v6; // rax
  int *v7; // r14
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // r8
  unsigned int *v15; // r9
  struct _NDIS_MINIPORT_BLOCK *VPortByVPortIdInternal; // rax
  KIRQL v17; // dl
  unsigned int Next; // edx
  unsigned int v19; // edx
  unsigned int v20; // r15d
  $3484372124D9A3F19503CD0C8B2AC869 *v21; // rcx
  unsigned int v22; // r10d
  __int64 i; // rsi
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  KIRQL v27; // dl
  __int64 v28; // rax
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  NewIrql = 0;
  ReceiveQueueByQueueId = 0LL;
  v3 = 0LL;
  v5 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x1Eu,
      (struct _GUID *)&WPP_a095d03b818b3b9702993c77529453c6_Traceguids,
      a1);
  v6 = *((_QWORD *)a1 + 4);
  v7 = (int *)((char *)a1 + 40);
  v8 = 20;
  if ( *(_DWORD *)(v6 + 4) == 12 )
  {
    *v7 = 0;
    if ( *(_DWORD *)(v6 + 48) < 0x14u )
    {
      *(_DWORD *)(v6 + 68) = 20;
      v9 = -1073676268;
LABEL_8:
      v10 = *((_QWORD *)a1 + 4);
      *v7 = v9;
      *(_DWORD *)(v10 + 60) = 0;
LABEL_9:
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 0;
      goto LABEL_43;
    }
    if ( *(_DWORD *)(v6 + 52) < 0x14u )
    {
      *(_DWORD *)(v6 + 68) = 20;
      v9 = -1073676266;
      goto LABEL_8;
    }
    v11 = v6;
    if ( *(_BYTE *)(*(_QWORD *)(v6 + 40) + 1LL) == 2 )
    {
      v8 = 28;
      if ( *(_DWORD *)(v6 + 48) < 0x1Cu )
      {
        v12 = -1073676268;
LABEL_15:
        *(_DWORD *)(v11 + 68) = 28;
        *v7 = v12;
        *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
        goto LABEL_9;
      }
      if ( *(_DWORD *)(v6 + 52) < 0x1Cu )
      {
        v12 = -1073676266;
        goto LABEL_15;
      }
    }
    if ( !v1 )
    {
      v5 = 0;
      goto LABEL_43;
    }
    *v7 = -1073741637;
    if ( v1->ReceiveFilterCurrentCapabilities )
    {
      v13 = *(_QWORD *)(v6 + 40);
      *(_DWORD *)(v6 + 60) = 0;
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = v8;
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
      if ( *(_BYTE *)(v13 + 1) >= 2u && (*(_DWORD *)(v13 + 20) & 1) != 0 )
      {
        VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(v1, *(_DWORD *)(v13 + 24));
        v3 = VPortByVPortIdInternal;
        if ( !VPortByVPortIdInternal )
        {
LABEL_22:
          v17 = NewIrql;
          v1->MiniportThread = 0LL;
          KeReleaseSpinLock(&v1->Lock, v17);
          *v7 = -1073741811;
          goto LABEL_43;
        }
        Next = (unsigned int)VPortByVPortIdInternal->WorkQueue[5].Next;
      }
      else
      {
        v19 = *(_DWORD *)(v13 + 4);
        if ( v19 )
          ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v1, v19, v14, v15);
        else
          ReceiveQueueByQueueId = (struct _NDIS_MINIPORT_BLOCK *)v1->DefaultReceiveQueue;
        if ( !ReceiveQueueByQueueId )
          goto LABEL_22;
        Next = HIDWORD(ReceiveQueueByQueueId->Reserved29);
      }
      v20 = 16 * Next + 28;
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 68LL) = v20;
      if ( v20 <= *(_DWORD *)(*((_QWORD *)a1 + 4) + 52LL) )
      {
        *(_DWORD *)v13 = 1835392;
        if ( v3 )
        {
          v21 = ($3484372124D9A3F19503CD0C8B2AC869 *)v3->WorkQueue[6].Next;
          *(_DWORD *)(v13 + 24) = v3->PnPFlags;
        }
        else
        {
          v21 = *($3484372124D9A3F19503CD0C8B2AC869 **)&ReceiveQueueByQueueId->Reserved4.Length;
          *(_DWORD *)(v13 + 4) = ReceiveQueueByQueueId->PcwDatapathEventMask;
        }
        *(_DWORD *)(v13 + 8) = 28;
        *(_DWORD *)(v13 + 16) = 16;
        v22 = 0;
        *(_DWORD *)(v13 + 12) = Next;
        for ( i = v13 + 28; v22 < Next; v21 = *($3484372124D9A3F19503CD0C8B2AC869 **)&v21->Reserved4.Length )
        {
          if ( v3 )
          {
            if ( v21 == ($3484372124D9A3F19503CD0C8B2AC869 *)&v3->WorkQueue[6] )
              break;
            v24 = 104LL;
            v25 = 1LL;
            v26 = 108LL;
          }
          else
          {
            if ( v21 == &ReceiveQueueByQueueId->32 )
              break;
            v24 = 120LL;
            v25 = 2LL;
            v26 = 124LL;
          }
          ++v22;
          *(_OWORD *)i = 0LL;
          *(_DWORD *)i = 1048960;
          *(_DWORD *)(i + 4) = *(_DWORD *)((char *)&v21->Reserved4.Length + v24);
          *(_DWORD *)(i + 8) = *(_DWORD *)((char *)&v21->Reserved4.Length + v26);
          *(_DWORD *)(i + 12) = *(_DWORD *)&v21[v25].Reserved4.Length;
          i += 16LL;
        }
        v27 = NewIrql;
        v1->MiniportThread = 0LL;
        KeReleaseSpinLock(&v1->Lock, v27);
        v28 = *((_QWORD *)a1 + 4);
        *v7 = 0;
        *(_DWORD *)(v28 + 60) = v20;
      }
      else
      {
        v1->MiniportThread = 0LL;
        KeReleaseSpinLock(&v1->Lock, NewIrql);
        *v7 = -1073676266;
      }
    }
  }
  else
  {
    *v7 = -1073741637;
  }
LABEL_43:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x1Fu,
      (struct _GUID *)&WPP_a095d03b818b3b9702993c77529453c6_Traceguids,
      (char)v1,
      *v7);
  return v5;
}
