/*
 * XREFs of ndisMIsLoopbackPacket @ 0x1C00C67E0
 * Callers:
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C6B78 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0006310 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C0006630 (NdisAcquireRWLockRead.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C002DDD8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     NdisPacketSize @ 0x1C002DE10 (NdisPacketSize.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z @ 0x1C005D624 (-ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z.c)
 *     NdisAllocateBuffer @ 0x1C00C09C0 (NdisAllocateBuffer.c)
 *     NdisQueryPacket @ 0x1C00C6D04 (NdisQueryPacket.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x1C00C6DB0 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 */

bool __fastcall ndisMIsLoopbackPacket(__int64 a1, struct _NDIS_PACKET *a2, struct _NDIS_PACKET **a3)
{
  _MDL *Head; // rcx
  char v5; // si
  __int64 v7; // rdx
  char *MappedSystemVa; // rbx
  __int64 v11; // rcx
  char v12; // bl
  __int64 v13; // r14
  char v14; // r12
  char v15; // cl
  int v16; // r13d
  bool v17; // zf
  unsigned __int8 Multicast; // al
  char v19; // dl
  UINT TotalLength; // r14d
  UINT v21; // eax
  __int64 v22; // r13
  UINT v23; // eax
  char *Pool2; // rax
  char *v25; // r12
  struct _NDIS_PACKET *v26; // rbx
  unsigned int i; // r12d
  char *v28; // r9
  unsigned int v29; // edx
  struct _MDL *v30; // r12
  unsigned __int8 *v31; // r9
  unsigned __int16 v32; // r13
  int Status; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-Ch] BYREF
  PNDIS_BUFFER Buffer; // [rsp+38h] [rbp-8h] BYREF
  KSPIN_LOCK *LockState; // [rsp+88h] [rbp+48h] BYREF
  char *Length; // [rsp+98h] [rbp+58h] BYREF

  LODWORD(Length) = 0;
  Status = 0;
  Head = a2->Private.Head;
  v5 = 0;
  Buffer = 0LL;
  v34 = 0;
  v7 = 1LL;
  LOWORD(LockState) = 0;
  v17 = (Head->MdlFlags & 5) == 0;
  BYTE2(LockState) = 0;
  if ( v17 )
  {
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u);
    v7 = 1LL;
  }
  else
  {
    MappedSystemVa = (char *)Head->MappedSystemVa;
  }
  if ( MappedSystemVa )
  {
    if ( *(_DWORD *)(a1 + 464) )
      return (a2->Private.Flags & 0x200) != 0;
    if ( (*(_DWORD *)(a1 + 120) & 0x800000) != 0 )
    {
      if ( (*MappedSystemVa & 1) == 0
        && (v11 = *(_QWORD *)(a1 + 400), *(_DWORD *)(MappedSystemVa + 2) == *(_DWORD *)(v11 + 338))
        && *(_WORD *)MappedSystemVa == *(_WORD *)(v11 + 336) )
      {
        v12 = 1;
        v5 = 1;
      }
      else
      {
        v12 = 1;
      }
      goto LABEL_36;
    }
    NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(*(_QWORD *)(a1 + 400) + 288LL), (PLOCK_STATE_EX)&LockState, 0);
    v13 = *(_QWORD *)(a1 + 400);
    v14 = 0;
    v15 = 1;
    v16 = *(_DWORD *)(v13 + 312);
    if ( (*MappedSystemVa & 1) == 0 )
    {
      if ( *(_DWORD *)(MappedSystemVa + 2) != *(_DWORD *)(v13 + 338)
        || *(_WORD *)MappedSystemVa != *(_WORD *)(v13 + 336) )
      {
        goto LABEL_32;
      }
      v5 = 1;
      goto LABEL_31;
    }
    if ( *MappedSystemVa == -1
      && MappedSystemVa[1] == -1
      && MappedSystemVa[2] == -1
      && MappedSystemVa[3] == -1
      && MappedSystemVa[4] == -1
      && MappedSystemVa[5] == -1 )
    {
      v17 = (v16 & 8) == 0;
    }
    else
    {
      if ( (v16 & 4) != 0 )
      {
LABEL_31:
        v14 = v15;
        goto LABEL_32;
      }
      if ( (v16 & 2) == 0 )
      {
LABEL_32:
        v12 = v14;
        if ( (v16 & 0xA0) != 0 )
          v12 = v15;
        NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v13 + 288), (PLOCK_STATE_EX)&LockState);
        if ( !v12 )
          goto LABEL_38;
        v7 = 1LL;
LABEL_36:
        if ( (a2->Private.Flags & 0x200) != 0 )
        {
          v5 = 1;
LABEL_39:
          a2->Private.NdisPacketFlags |= 4u;
LABEL_40:
          if ( v12 )
          {
            LockState = 0LL;
            if ( a2->Private.ValidCounts )
            {
              TotalLength = a2->Private.TotalLength;
            }
            else
            {
              NdisQueryPacket(a2, (PUINT)v7, 0LL, 0LL, (PUINT)&Length);
              TotalLength = (unsigned int)Length;
            }
            v21 = NdisPacketSize(0x20u);
            v22 = v21;
            v23 = TotalLength + v21;
            if ( v23 >= TotalLength )
            {
              Pool2 = (char *)ExAllocatePool2(66LL, v23, 1886143566);
              v25 = Pool2;
              if ( Pool2 )
              {
                memset(Pool2, 0, (unsigned int)v22);
                Length = &v25[v22];
                v26 = (struct _NDIS_PACKET *)&v25[48 * ndisPacketStackSize + 16];
                for ( i = 0; i < ndisPacketStackSize; ++i )
                {
                  *(_DWORD *)&v26[-1].ProtocolReserved[4] = i;
                  NDIS_STACK_RESERVED_FROM_PACKET(v26, (struct _NDIS_STACK_RESERVED **)&LockState);
                  KeInitializeSpinLock(LockState + 3);
                }
                v28 = Length;
                *(_DWORD *)&v26[-1].ProtocolReserved[4] = -1;
                NdisAllocateBuffer(&Status, &Buffer, 0LL, v28, TotalLength);
                v30 = Buffer;
                if ( !Status )
                {
                  v31 = (unsigned __int8 *)Length;
                  v26->Private.Head = Buffer;
                  v26->Private.Tail = v30;
                  v26->Private.Pool = (void *)1886351180;
                  v32 = v22 - 48 * ndisPacketStackSize - 152;
                  v26->Private.NdisPacketOobOffset = v32;
                  *(_QWORD *)&v26->ProtocolReserved[v32] = v26;
                  ndisMCopyFromPacketToBuffer(a2, v29, TotalLength, v31, &v34);
                  if ( v34 == TotalLength )
                  {
                    if ( a3 )
                    {
                      *a3 = v26;
                      v26->Private.NdisPacketFlags |= 2u;
                      v26->Private.Flags = a2->Private.Flags & 0x80 | 0x100;
                    }
                    return v5;
                  }
                }
                ExFreePoolWithTag((char *)v26 - 48 * ndisPacketStackSize - 16, 0);
                if ( v30 )
                  IoFreeMdl(v30);
              }
            }
            *a3 = 0LL;
            return 0;
          }
          return (a2->Private.Flags & 0x200) != 0;
        }
LABEL_38:
        if ( !v5 )
          goto LABEL_40;
        goto LABEL_39;
      }
      Multicast = ethFindMulticast(
                    *(_DWORD *)(v13 + 368),
                    0LL,
                    *(unsigned __int8 (**)[6])(v13 + 352),
                    (unsigned __int8 *const)MappedSystemVa);
      v15 = v19 + 1;
      v17 = Multicast == 0;
    }
    if ( !v17 )
      goto LABEL_31;
    goto LABEL_32;
  }
  if ( a3 )
    *a3 = 0LL;
  return 0;
}
