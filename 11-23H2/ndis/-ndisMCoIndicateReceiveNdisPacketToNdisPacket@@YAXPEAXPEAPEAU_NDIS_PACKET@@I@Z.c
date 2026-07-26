/*
 * XREFs of ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C20A0
 * Callers:
 *     <none>
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0003410 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C0003A60 (NdisAcquireRWLockRead.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0031788 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0090350 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C00C18A4 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C00C9A6C (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ndisMCoIndicateReceiveNdisPacketToNdisPacket(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r12
  struct _NDIS_PACKET *v8; // rbx
  __int64 NdisPacketOobOffset; // rbp
  char *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rax
  struct _NDIS_STACK_RESERVED *v13; // rsi
  int *v14; // r14
  int v15; // ecx
  struct _NDIS_MINIPORT_BLOCK *v16; // rdx
  int v17; // ecx
  signed __int32 v18; // edx
  bool v19; // zf
  struct _NDIS_PACKET *v20; // rdx
  struct _NDIS_STACK_RESERVED *v22; // [rsp+88h] [rbp+10h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+90h] [rbp+18h] BYREF
  __int64 v24; // [rsp+98h] [rbp+20h]

  v3 = a1[9];
  v22 = 0LL;
  v5 = a3;
  *(_WORD *)&LockState.OldIrql = 0;
  v6 = *(_QWORD *)(v3 + 120);
  LockState.Flags = 0;
  v7 = *(_QWORD *)(v6 + 400);
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(v7 + 288), &LockState, 0);
  *(_BYTE *)((KeGetPcr()->Prcb.Number << 12) + *(_QWORD *)(*(_QWORD *)(v3 + 16) + 720LL)) = 1;
  if ( (_DWORD)v5 )
  {
    v24 = v5;
    do
    {
      v8 = *a2;
      NdisPacketOobOffset = (*a2)->Private.NdisPacketOobOffset;
      ++*(_DWORD *)&v8[-1].ProtocolReserved[4];
      v10 = (char *)v8 + NdisPacketOobOffset;
      NDIS_STACK_RESERVED_FROM_PACKET(v8, &v22);
      v11 = *(_QWORD *)(v6 + 3152);
      if ( v11 )
      {
        v12 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v11 + v12 + 32);
      }
      v13 = v22;
      *((_DWORD *)v22 + 2) = -1;
      v14 = (int *)((char *)v13 + 12);
      *((_DWORD *)v13 + 3) = 0;
      *(_QWORD *)v13 = v6;
      v8->Private.ValidCounts = 0;
      if ( *((_DWORD *)v10 + 8) != -1073741670 )
        *((_DWORD *)v10 + 8) = 0;
      if ( (*(_DWORD *)(v3 + 4) & 0x10) != 0 )
        v15 = 0;
      else
        v15 = (*(__int16 (__fastcall **)(_QWORD, _QWORD, struct _NDIS_PACKET *))(v3 + 56))(
                *(_QWORD *)(*(_QWORD *)(v3 + 16) + 32LL),
                *(_QWORD *)(v3 + 24),
                v8);
      *v14 = v15;
      v16 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 120);
      if ( v16->PmodeOpens )
      {
        ndisCoIndicatePromiscPacket(a1, v16, *(struct _NDIS_OPEN_BLOCK **)v7, v8, 1);
        ndisCoIndicatePromiscPacket(
          a1,
          *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 120),
          *(struct _NDIS_OPEN_BLOCK **)(v7 + 8),
          v8,
          1);
        ndisCoIndicatePromiscPacket(
          a1,
          *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 120),
          *(struct _NDIS_OPEN_BLOCK **)(v7 + 16),
          v8,
          1);
      }
      if ( *v14 )
      {
        v17 = *v14;
        v18 = _InterlockedExchangeAdd((volatile signed __int32 *)v13 + 2, v17 + 1) + v17 + 1;
        v19 = v18 == 0;
        if ( v18 > 0 )
        {
          if ( (*(_DWORD *)(v6 + 120) & 0x40000) == 0 )
            *(unsigned int *)((char *)&v8->Private.Count + v8->Private.NdisPacketOobOffset) = 259;
          v19 = v18 == 0;
        }
        if ( !v19 )
        {
          if ( (*(_DWORD *)(v6 + 120) & 0x8000) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v6 + 1828));
          goto LABEL_35;
        }
        v13 = v22;
      }
      else
      {
        *((_DWORD *)v13 + 2) = 0;
      }
      --*(_DWORD *)&v8[-1].ProtocolReserved[4];
      if ( *((_DWORD *)v10 + 8) != -1073741670 )
      {
        if ( (*(_DWORD *)(v6 + 120) & 0x40000) != 0 )
        {
          *(_QWORD *)v13 = 0LL;
          *((_DWORD *)v10 + 8) = 259;
          if ( (v8[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v8[-1].ProtocolReserved[4] == -1 )
            goto LABEL_32;
          v20 = v8;
          if ( !*(_MDL **)((char *)&v8[1].Private.Head + v8->Private.NdisPacketOobOffset) )
          {
            (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(*(_QWORD *)(v6 + 3760) + 224LL))(
              *(_QWORD *)(v6 + 24),
              v8);
            goto LABEL_35;
          }
        }
        else
        {
          if ( !*(_MDL **)((char *)&v8[1].Private.Head + v8->Private.NdisPacketOobOffset) )
          {
            *((_DWORD *)v10 + 8) = 0;
            goto LABEL_35;
          }
          *(_QWORD *)v13 = 0LL;
          *(unsigned int *)((char *)&v8->Private.Count + v8->Private.NdisPacketOobOffset) = 259;
          if ( (v8[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v8[-1].ProtocolReserved[4] == -1 )
          {
LABEL_32:
            NDIS_FREE_XFER_DATA_PACKET(v8);
            goto LABEL_35;
          }
          v20 = v8;
        }
        ndisReturnPacketToNetBufferList((struct _NDIS_OBJECT_HEADER *)v6, v20);
      }
LABEL_35:
      ++a2;
      --v24;
    }
    while ( v24 );
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v7 + 288), &LockState);
}
