/*
 * XREFs of NdisAllocatePacket @ 0x1C002DB90
 * Callers:
 *     NdisAllocatePacketPoolEx @ 0x1C002D880 (NdisAllocatePacketPoolEx.c)
 *     ?ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z @ 0x1C006DF14 (-ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z.c)
 *     ndisLWM5IndicateReceive @ 0x1C00C63D0 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C002DDD8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 */

void __stdcall NdisAllocatePacket(PNDIS_STATUS Status, PNDIS_PACKET *Packet, NDIS_HANDLE PoolHandle)
{
  char *v3; // rsi
  _SLIST_HEADER *v4; // rbx
  PNDIS_PACKET *v6; // r14
  PSLIST_ENTRY v7; // rbp
  KSPIN_LOCK *v8; // r12
  char *v9; // r15
  KIRQL v10; // r13
  char *v11; // rbx
  _SLIST_HEADER *Pool2; // rax
  _SLIST_HEADER *v13; // rbx
  int v14; // ebp
  _SLIST_HEADER *v15; // rsi
  _SLIST_HEADER *v16; // r14
  unsigned int v17; // r12d
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // r15d
  KSPIN_LOCK *v21; // r13
  KIRQL v22; // al
  _QWORD *Alignment; // rdx
  void **Region; // rcx
  char **v25; // rax
  char *v26; // rdi
  unsigned __int64 v27; // rax
  char *v28; // rax
  unsigned __int64 v29; // rax
  LONGLONG v30; // rax
  char *v31; // [rsp+20h] [rbp-58h]
  KIRQL NewIrql; // [rsp+90h] [rbp+18h]
  struct _NDIS_STACK_RESERVED *v35; // [rsp+98h] [rbp+20h] BYREF

  v3 = (char *)PoolHandle + 40;
  v4 = (_SLIST_HEADER *)*((_QWORD *)PoolHandle + 5);
  v31 = (char *)PoolHandle + 40;
  v6 = Packet;
  v7 = 0LL;
  if ( v4 != (_SLIST_HEADER *)((char *)PoolHandle + 40) )
  {
    v7 = ExpInterlockedPopEntrySList(v4 + 2);
    if ( v7 )
    {
      v20 = 1;
      if ( *((_WORD *)PoolHandle + 4) <= 1u || ExQueryDepthSList(v4 + 2) )
        goto LABEL_14;
      v21 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
      v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
      Alignment = (_QWORD *)v4->Alignment;
      NewIrql = v22;
      if ( *(_SLIST_HEADER **)(v4->Alignment + 8) == v4 )
      {
        Region = (void **)v4->Region;
        if ( *Region == v4 )
        {
          *Region = Alignment;
          Alignment[1] = Region;
          if ( ExQueryDepthSList(v4 + 2) )
          {
            v27 = *(_QWORD *)v3;
            if ( *(char **)(*(_QWORD *)v3 + 8LL) == v3 )
            {
              v4->Alignment = v27;
              v20 = 0;
              v4->Region = (unsigned __int64)v3;
              *(_QWORD *)(v27 + 8) = v4;
              *(_QWORD *)v3 = v4;
              goto LABEL_25;
            }
          }
          else
          {
            v25 = (char **)*((_QWORD *)PoolHandle + 8);
            v26 = (char *)PoolHandle + 56;
            if ( *v25 == v26 )
            {
              v4->Alignment = (unsigned __int64)v26;
              v4->Region = (unsigned __int64)v25;
              *v25 = (char *)v4;
              *((_QWORD *)v26 + 1) = v4;
LABEL_25:
              LODWORD(v4[3].Alignment) = v20;
              KeReleaseSpinLock(v21, NewIrql);
              goto LABEL_14;
            }
          }
        }
      }
LABEL_34:
      __fastfail(3u);
    }
  }
  v8 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
  v9 = (char *)PoolHandle + 72;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
  v11 = (char *)*((_QWORD *)PoolHandle + 9);
  if ( v11 == (char *)PoolHandle + 72 )
  {
    if ( *((_DWORD *)PoolHandle + 3) < (int)*((unsigned __int16 *)PoolHandle + 4) )
    {
      Pool2 = (_SLIST_HEADER *)ExAllocatePool2(64LL, *((unsigned int *)PoolHandle + 5), *(_DWORD *)PoolHandle);
      v13 = Pool2;
      if ( Pool2 )
      {
        ++*((_DWORD *)PoolHandle + 3);
        Pool2->Region = (unsigned __int64)Pool2;
        Pool2->Alignment = (unsigned __int64)Pool2;
        InitializeSListHead(Pool2 + 2);
        v14 = *((unsigned __int16 *)PoolHandle + 3);
        if ( *((_WORD *)PoolHandle + 3) )
        {
          v15 = v13 + 4;
          do
          {
            v35 = 0LL;
            v16 = &v15[3 * ndisPacketStackSize + 1];
            *((_BYTE *)&v16[2].HeaderX64 + 9) = 0;
            v15 = (_SLIST_HEADER *)((char *)v15 + *((unsigned __int16 *)PoolHandle + 2));
            ExpInterlockedPushEntrySList(v13 + 2, (PSLIST_ENTRY)v16);
            v16[1].Region = (unsigned __int64)PoolHandle;
            v17 = 0;
            *((_DWORD *)&v16[2].HeaderX64 + 1) = *((_DWORD *)PoolHandle + 4);
            v18 = (unsigned __int16)(*((_WORD *)PoolHandle + 2) - 48 * ndisPacketStackSize - 152);
            *((_WORD *)&v16[2].HeaderX64 + 5) = v18;
            for ( *(unsigned __int64 *)((char *)&v16[6].Alignment + v18) = (unsigned __int64)v16;
                  v17 < ndisPacketStackSize;
                  ++v17 )
            {
              *((_DWORD *)&v16[-1].HeaderX64 + 3) = v17;
              NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v16, &v35);
              KeInitializeSpinLock((PKSPIN_LOCK)v35 + 3);
            }
            --v14;
          }
          while ( v14 );
          v3 = v31;
          v6 = Packet;
          v8 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
        }
        v7 = ExpInterlockedPopEntrySList(v13 + 2);
        v19 = *(_QWORD *)v3;
        if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
          goto LABEL_34;
        v13->Alignment = v19;
        v13->Region = (unsigned __int64)v3;
        *(_QWORD *)(v19 + 8) = v13;
        *(_QWORD *)v3 = v13;
        LODWORD(v13[3].Alignment) = 0;
      }
    }
  }
  else
  {
    if ( *((char **)v11 + 1) != v9 )
      goto LABEL_34;
    v28 = *(char **)v11;
    if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
      goto LABEL_34;
    *(_QWORD *)v9 = v28;
    *((_QWORD *)v28 + 1) = v9;
    v7 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v11 + 2);
    v29 = *(_QWORD *)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
      goto LABEL_34;
    *(_QWORD *)v11 = v29;
    *((_QWORD *)v11 + 1) = v3;
    *(_QWORD *)(v29 + 8) = v11;
    *(_QWORD *)v3 = v11;
    *((_DWORD *)v11 + 12) = 0;
    if ( *(char **)v9 == v9 )
      v30 = 0LL;
    else
      v30 = *(_QWORD *)(*(_QWORD *)v9 + 16LL) + PoolAgingTicks.QuadPart;
    *((_QWORD *)PoolHandle + 13) = v30;
  }
  KeReleaseSpinLock(v8, v10);
  if ( v7 )
  {
LABEL_14:
    *v6 = (PNDIS_PACKET)v7;
    *Status = 0;
    *(_DWORD *)&(*v6)[-1].ProtocolReserved[4] = -1;
    *(_DWORD *)(*v6)[-1].ProtocolReserved = -1;
    *(_QWORD *)&(*v6)->ProtocolReserved[(*v6)->Private.NdisPacketOobOffset] = *v6;
    (*v6)->Private.Head = 0LL;
    (*v6)->Private.ValidCounts = 0;
    (*v6)->Private.NdisPacketFlags = 0x80;
    return;
  }
  *v6 = 0LL;
  *Status = -1073741670;
}
