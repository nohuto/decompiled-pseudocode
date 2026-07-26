/*
 * XREFs of ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C1CB0
 * Callers:
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00C1AD0 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0003410 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C0003A60 (NdisAcquireRWLockRead.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0031788 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C00C18A4 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CC968 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisCoSendPacketsToNdisPackets(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // r13
  struct _NDIS_PACKET **v5; // rbx
  int v7; // r14d
  __int64 v8; // r12
  unsigned int v9; // esi
  unsigned int v10; // r15d
  struct _NDIS_MINIPORT_BLOCK *v11; // rdx
  struct _NDIS_PACKET *v12; // rbp
  _MDL *Head; // rbx
  struct _NDIS_STACK_RESERVED *v15; // rcx
  struct _NDIS_STACK_RESERVED *v16; // [rsp+30h] [rbp-58h] BYREF
  _X_FILTER *EthDB; // [rsp+38h] [rbp-50h]
  struct _LOCK_STATE_EX LockState; // [rsp+90h] [rbp+8h] BYREF
  struct _NDIS_PACKET **v19; // [rsp+98h] [rbp+10h]
  unsigned int v20; // [rsp+A0h] [rbp+18h]
  struct _NDIS_PACKET **v21; // [rsp+A8h] [rbp+20h]

  v20 = a3;
  v19 = a2;
  v3 = (struct _NDIS_MINIPORT_BLOCK *)a1[24];
  v16 = 0LL;
  *(_WORD *)&LockState.OldIrql = 0;
  v5 = a2;
  LockState.Flags = 0;
  EthDB = v3->EthDB;
  NdisAcquireRWLockRead(EthDB->BindListLock, &LockState, 0);
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  if ( !a3 )
    goto LABEL_23;
  v21 = v5;
  do
  {
    v11 = (struct _NDIS_MINIPORT_BLOCK *)a1[24];
    v12 = *v5;
    if ( v11->PmodeOpens )
      ndisCoIndicatePromiscPacket(a1, v11, v3->OpenQueue, *v5, 0);
    ++*(_DWORD *)&v12[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v12, &v16);
    if ( (v3->SendFlags & 2) != 0 )
    {
      if ( !v7 )
      {
LABEL_14:
        if ( (v3->Flags & 0x40) != 0 )
        {
          v15 = v16;
          *(_QWORD *)v16 = a1[10];
          *((_QWORD *)v15 + 1) = a1;
          ndisMAllocSGList(v3, v12);
        }
        else
        {
          ++v9;
        }
        ++v10;
        goto LABEL_20;
      }
    }
    else
    {
      Head = v12->Private.Head;
      v7 = 0;
      while ( 1 )
      {
        if ( !Head )
        {
          v5 = v21;
          goto LABEL_14;
        }
        if ( !((Head->MdlFlags & 5) != 0
             ? Head->MappedSystemVa
             : MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u)) )
          break;
        Head = Head->Next;
      }
      v5 = v21;
      v7 = -1073741670;
    }
    ((void (__fastcall *)(__int64, _QWORD *, struct _NDIS_PACKET *))a1[34])(3221225626LL, a1, v12);
    if ( v9 )
    {
      ((void (__fastcall *)(_QWORD, struct _NDIS_PACKET **, _QWORD))a1[26])(a1[25], &v19[v8], v9);
      v9 = 0;
    }
    v8 = ++v10;
LABEL_20:
    v21 = ++v5;
  }
  while ( v10 < v20 );
  if ( v9 )
    ((void (__fastcall *)(_QWORD, struct _NDIS_PACKET **, _QWORD))a1[26])(a1[25], &v19[v8], v9);
LABEL_23:
  NdisReleaseRWLock(EthDB->BindListLock, &LockState);
}
