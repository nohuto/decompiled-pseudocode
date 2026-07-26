/*
 * XREFs of ?ndisOidPreRcvFilterQueueParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00855C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DC0A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C0083F8C (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 */

char __fastcall ndisOidPreRcvFilterQueueParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  int *v2; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  __int64 v4; // r13
  _BYTE *v5; // r15
  int v6; // eax
  char v7; // r14
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned __int16 v11; // cx
  unsigned __int64 v12; // rdx
  int v13; // eax
  unsigned __int16 v14; // cx
  unsigned __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // r8
  unsigned int *v18; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // rax
  unsigned int v20; // ecx
  size_t v21; // r8
  void *v22; // rcx
  _BYTE *OidSourceHandle; // rax
  __int64 v24; // rdx
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = (int *)((char *)a1 + 40);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = 0LL;
  v5 = 0LL;
  NewIrql = 0;
  v6 = *(_DWORD *)(v1 + 4);
  v7 = 1;
  if ( v6 != 12 )
  {
    if ( v6 != 1 )
    {
      *v2 = -1073741637;
      return v7;
    }
    *v2 = 0;
    if ( *(_DWORD *)(v1 + 48) < 0x43Cu )
    {
      *(_DWORD *)(v1 + 56) = 1084;
      *v2 = -1073676268;
      *(_DWORD *)(v1 + 52) = 0;
      return v7;
    }
    goto LABEL_10;
  }
  *v2 = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x43Cu )
  {
    if ( *(_DWORD *)(v1 + 52) < 0x43Cu )
    {
      v8 = -1073676266;
      goto LABEL_6;
    }
LABEL_10:
    if ( !v3 )
      return 0;
    v9 = *(_DWORD *)(v1 + 4);
    if ( v9 == 12 )
    {
      *(_DWORD *)(v1 + 60) = 0;
      v10 = 1096;
      v4 = *(_QWORD *)(v1 + 40);
      v11 = *(_WORD *)(v4 + 2);
      v12 = v11;
      if ( v11 >= 0x448u )
        v12 = 1096LL;
      if ( v12 >= *(unsigned int *)(v1 + 48) )
      {
        v10 = *(_DWORD *)(v1 + 48);
      }
      else if ( v11 < 0x448u )
      {
        v10 = *(unsigned __int16 *)(v4 + 2);
      }
      *(_DWORD *)(v1 + 64) = v10;
    }
    else if ( v9 == 1 )
    {
      v4 = *(_QWORD *)(v1 + 40);
      v13 = 1096;
      v14 = *(_WORD *)(v4 + 2);
      v15 = v14;
      if ( v14 >= 0x448u )
        v15 = 1096LL;
      if ( v15 >= *(unsigned int *)(v1 + 48) )
      {
        v13 = *(_DWORD *)(v1 + 48);
      }
      else if ( v14 < 0x448u )
      {
        v13 = *(unsigned __int16 *)(v4 + 2);
      }
      *(_DWORD *)(v1 + 52) = v13;
    }
    *v2 = -1073741637;
    v16 = *(_DWORD *)(v4 + 12);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v3, v16, v17, v18);
    if ( !ReceiveQueueByQueueId )
    {
      v3->MiniportThread = 0LL;
LABEL_32:
      KeReleaseSpinLock(&v3->Lock, NewIrql);
      *v2 = -1073741811;
      return v7;
    }
    if ( *(_DWORD *)(v1 + 4) == 12 )
    {
      v20 = WORD1(ReceiveQueueByQueueId->PacketList.Flink);
      if ( v20 >= *(_DWORD *)(v1 + 48) )
        v20 = *(_DWORD *)(v1 + 48);
      v21 = v20;
      v22 = *(void **)(v1 + 40);
      *(_DWORD *)(v1 + 60) = v21;
      memmove(v22, &ReceiveQueueByQueueId->PacketList, v21);
      *(_WORD *)(v4 + 2) = *(_WORD *)(v1 + 60);
      *v2 = 0;
    }
    else
    {
      OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
      if ( OidSourceHandle && *OidSourceHandle == 18 )
        v5 = OidSourceHandle;
      if ( *(_BYTE **)(v24 + 72) != v5 )
      {
        v3->MiniportThread = 0LL;
        goto LABEL_32;
      }
      v7 = 0;
    }
    v3->MiniportThread = 0LL;
    KeReleaseSpinLock(&v3->Lock, NewIrql);
    return v7;
  }
  v8 = -1073676268;
LABEL_6:
  *(_DWORD *)(v1 + 68) = 1084;
  *v2 = v8;
  *(_DWORD *)(v1 + 60) = 0;
  *(_DWORD *)(v1 + 64) = 0;
  return v7;
}
