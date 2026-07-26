/*
 * XREFs of ?ndisOidPreRcvFilterEnumFilters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0084A10
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075FFC (-ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C0083F8C (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 */

char __fastcall ndisOidPreRcvFilterEnumFilters(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // r15
  struct _NDIS_MINIPORT_BLOCK *v3; // r13
  char v5; // r12
  _DWORD *v6; // rax
  int *v7; // rdi
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r8
  unsigned int *v14; // r9
  struct _NDIS_MINIPORT_BLOCK *VPortByVPortIdInternal; // rax
  unsigned int Next; // edx
  unsigned int v17; // edx
  unsigned int v18; // r12d
  __int64 v19; // r8
  _SINGLE_LIST_ENTRY *v20; // rcx
  __int64 v21; // rsi
  unsigned int v22; // ebp
  $2FD635346711C53BB9C66C447095EC18 *v23; // rdi
  _SINGLE_LIST_ENTRY *v24; // rax
  _DWORD *v25; // r9
  _SINGLE_LIST_ENTRY *v26; // r10
  KIRQL v27; // dl
  __int64 v28; // rax
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF
  $2FD635346711C53BB9C66C447095EC18 *v31; // [rsp+88h] [rbp+10h]

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
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      a1);
  v6 = (_DWORD *)*((_QWORD *)a1 + 4);
  v7 = (int *)((char *)a1 + 40);
  v8 = 20;
  if ( v6[1] == 12 )
  {
    v9 = -1073676268;
    *v7 = 0;
    if ( v6[12] >= 0x14u )
    {
      v10 = 0;
      if ( v6[13] < 0x14u )
      {
        v6[17] = 20;
        v10 = -1073676266;
        *v7 = -1073676266;
      }
    }
    else
    {
      v6[17] = 20;
      v10 = -1073676268;
      *v7 = -1073676268;
    }
    v11 = *((_QWORD *)a1 + 4);
    if ( v10 )
    {
      *(_DWORD *)(v11 + 60) = 0;
LABEL_10:
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 0;
      goto LABEL_48;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v11 + 40) + 1LL) == 2 )
    {
      *v7 = 0;
      v8 = 28;
      if ( *(_DWORD *)(v11 + 48) < 0x1Cu )
      {
LABEL_15:
        *(_DWORD *)(v11 + 68) = 28;
        *v7 = v9;
        *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
        goto LABEL_10;
      }
      if ( *(_DWORD *)(v11 + 52) < 0x1Cu )
      {
        v9 = -1073676266;
        goto LABEL_15;
      }
    }
    if ( !v1 )
    {
      v5 = 0;
      goto LABEL_48;
    }
    *v7 = -1073741637;
    if ( v1->ReceiveFilterCurrentCapabilities )
    {
      v12 = *(_QWORD *)(v11 + 40);
      *(_DWORD *)(v11 + 60) = 0;
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = v8;
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
      if ( *(_BYTE *)(v12 + 1) >= 2u && (*(_DWORD *)(v12 + 20) & 1) != 0 )
      {
        VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(v1, *(_DWORD *)(v12 + 24));
        v3 = VPortByVPortIdInternal;
        if ( !VPortByVPortIdInternal )
        {
          v1->MiniportThread = 0LL;
LABEL_23:
          KeReleaseSpinLock(&v1->Lock, NewIrql);
          *v7 = -1073741811;
          goto LABEL_48;
        }
        Next = (unsigned int)VPortByVPortIdInternal->WorkQueue[5].Next;
      }
      else
      {
        v17 = *(_DWORD *)(v12 + 4);
        if ( v17 )
          ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v1, v17, v13, v14);
        else
          ReceiveQueueByQueueId = (struct _NDIS_MINIPORT_BLOCK *)v1->DefaultReceiveQueue;
        if ( !ReceiveQueueByQueueId )
        {
          v1->MiniportThread = 0LL;
          goto LABEL_23;
        }
        Next = HIDWORD(ReceiveQueueByQueueId->Reserved29);
      }
      v18 = 16 * Next + 28;
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 68LL) = v18;
      if ( v18 <= *(_DWORD *)(*((_QWORD *)a1 + 4) + 52LL) )
      {
        *(_DWORD *)v12 = 1835392;
        v31 = &ReceiveQueueByQueueId->32;
        if ( v3 )
        {
          v19 = (__int64)&v3->WorkQueue[6];
          v20 = v3->WorkQueue[6].Next;
          *(_DWORD *)(v12 + 24) = v3->PnPFlags;
        }
        else
        {
          v20 = *(_SINGLE_LIST_ENTRY **)&ReceiveQueueByQueueId->Reserved4.Length;
          v19 = 872LL;
          *(_DWORD *)(v12 + 4) = ReceiveQueueByQueueId->PcwDatapathEventMask;
        }
        *(_DWORD *)(v12 + 8) = 28;
        *(_DWORD *)(v12 + 16) = 16;
        *(_DWORD *)(v12 + 12) = Next;
        v21 = v12 + 28;
        v22 = 0;
        if ( Next )
        {
          v23 = v31;
          do
          {
            if ( v3 )
            {
              if ( v20 == (_SINGLE_LIST_ENTRY *)v19 )
                break;
              v24 = v20 + 13;
              v25 = (_DWORD *)&v20[13].Next + 1;
              v26 = v20 + 2;
            }
            else
            {
              if ( v20 == (_SINGLE_LIST_ENTRY *)v23 )
                break;
              v24 = v20 + 15;
              v25 = (_DWORD *)&v20[15].Next + 1;
              v26 = v20 + 4;
            }
            ++v22;
            *(_OWORD *)v21 = 0LL;
            *(_DWORD *)v21 = 1048960;
            *(_DWORD *)(v21 + 4) = v24->Next;
            *(_DWORD *)(v21 + 8) = *v25;
            *(_DWORD *)(v21 + 12) = v26->Next;
            v21 += 16LL;
            v20 = v20->Next;
          }
          while ( v22 < Next );
          v7 = (int *)((char *)a1 + 40);
        }
        v27 = NewIrql;
        v1->MiniportThread = 0LL;
        KeReleaseSpinLock(&v1->Lock, v27);
        v28 = *((_QWORD *)a1 + 4);
        *v7 = 0;
        *(_DWORD *)(v28 + 60) = v18;
      }
      else
      {
        v1->MiniportThread = 0LL;
        KeReleaseSpinLock(&v1->Lock, NewIrql);
        *v7 = -1073676266;
      }
      v5 = 1;
    }
  }
  else
  {
    *v7 = -1073741637;
  }
LABEL_48:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x1Fu,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      (char)v1,
      *v7);
  return v5;
}
