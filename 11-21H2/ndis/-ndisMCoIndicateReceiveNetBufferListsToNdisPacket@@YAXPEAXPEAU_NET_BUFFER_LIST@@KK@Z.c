/*
 * XREFs of ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00BD4D0
 * Callers:
 *     <none>
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0006310 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C0006630 (NdisAcquireRWLockRead.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C002DDD8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x1C006E068 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x1C006E568 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C008A680 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C00BC5FC (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C00C4E0C (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ndisMCoIndicateReceiveNetBufferListsToNdisPacket(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // r15
  __int64 v6; // rsi
  __int64 Status; // r12
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // al
  struct _NDIS_PACKET **v12; // r13
  struct _NDIS_PACKET *v13; // rbx
  __int64 NdisPacketOobOffset; // r14
  _MDL *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  struct _NDIS_STACK_RESERVED *v18; // rdi
  int v19; // ecx
  signed __int32 v20; // edx
  bool v21; // zf
  struct _NDIS_PACKET *v22; // rdx
  struct _NDIS_MINIPORT_BLOCK *v23; // rdx
  __int64 v24; // r12
  struct _NET_BUFFER_LIST *v25; // rbx
  _QWORD *v26; // rdi
  unsigned int v27; // esi
  unsigned int v28; // r14d
  char v29; // [rsp+40h] [rbp-C0h]
  struct _LOCK_STATE_EX LockState; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h]
  unsigned int v32; // [rsp+50h] [rbp-B0h]
  unsigned int v33; // [rsp+54h] [rbp-ACh]
  struct _NDIS_STACK_RESERVED *v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h]
  struct _NET_BUFFER_LIST *v36; // [rsp+68h] [rbp-98h]
  void *v37; // [rsp+70h] [rbp-90h]
  struct _NDIS_PACKET **v38; // [rsp+78h] [rbp-88h] BYREF
  int v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+84h] [rbp-7Ch]
  struct _NET_BUFFER_LIST *v41; // [rsp+88h] [rbp-78h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+90h] [rbp-70h]
  unsigned int v43; // [rsp+98h] [rbp-68h]
  int v44; // [rsp+9Ch] [rbp-64h]
  __int64 v45; // [rsp+A0h] [rbp-60h]
  _BYTE v46[512]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a1[9];
  v33 = a3;
  v36 = a2;
  v37 = a1;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v40 = 0;
  v44 = 0;
  v32 = a4;
  memset(v46, 0, sizeof(v46));
  v6 = *(_QWORD *)(v4 + 120);
  v34 = 0LL;
  v35 = *(_QWORD *)(v6 + 400);
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(v35 + 288), &LockState, 0);
  Status = a2->Status;
  v8 = KeGetPcr()->Prcb.Number << 12;
  v9 = *(_QWORD *)(v4 + 16);
  v39 = 64;
  v41 = a2;
  v43 = 0;
  v10 = *(_QWORD *)(v9 + 720);
  v38 = (struct _NDIS_PACKET **)v46;
  v45 = v6;
  *(_BYTE *)(v8 + v10) = 1;
  FirstNetBuffer = a2->FirstNetBuffer;
  do
  {
    v11 = ndisXlateRecvNetBufferListsToPacketArray((struct _NDIS_NBLS_TO_PKT_ARRAY *)&v38);
    v29 = v11;
    if ( !v43 )
      continue;
    v12 = v38;
    v31 = v43;
    do
    {
      v13 = *v12;
      NdisPacketOobOffset = (*v12)->Private.NdisPacketOobOffset;
      ++*(_DWORD *)&v13[-1].ProtocolReserved[4];
      NDIS_STACK_RESERVED_FROM_PACKET(v13, &v34);
      v16 = *(_QWORD *)(v6 + 3152);
      if ( v16 )
      {
        v17 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v16 + v17 + 32);
      }
      v18 = v34;
      *((_DWORD *)v34 + 2) = -1;
      *((_DWORD *)v18 + 3) = (_DWORD)v15;
      *(_QWORD *)v18 = v6;
      v13->Private.ValidCounts = (unsigned __int8)v15;
      if ( (*(_DWORD *)(v4 + 4) & 0x10) != 0 )
      {
        v19 = (int)v15;
      }
      else
      {
        v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _NDIS_PACKET *))(v4 + 56))(
                *(_QWORD *)(*(_QWORD *)(v4 + 16) + 32LL),
                *(_QWORD *)(v4 + 24),
                v13);
        v15 = 0LL;
      }
      *((_DWORD *)v18 + 3) = v19;
      if ( v19 )
      {
        v20 = _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 2, v19 + 1) + v19 + 1;
        v21 = v20 == 0;
        if ( v20 > 0 )
        {
          if ( (*(_DWORD *)(v6 + 120) & 0x40000) == 0 )
            *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = 259;
          v21 = v20 == 0;
        }
        if ( !v21 )
        {
          if ( (*(_DWORD *)(v6 + 120) & 0x8000) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v6 + 1828));
          goto LABEL_32;
        }
        v18 = v34;
      }
      else
      {
        *((_DWORD *)v18 + 2) = (_DWORD)v15;
      }
      --*(_DWORD *)&v13[-1].ProtocolReserved[4];
      if ( *(unsigned int *)((char *)&v13->Private.Count + NdisPacketOobOffset) == -1073741670 )
        goto LABEL_32;
      if ( (*(_DWORD *)(v6 + 120) & 0x40000) != 0 )
      {
        *(_QWORD *)v18 = v15;
        *(unsigned int *)((char *)&v13->Private.Count + NdisPacketOobOffset) = 259;
        if ( (v13[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v13[-1].ProtocolReserved[4] == -1 )
          goto LABEL_29;
        v22 = v13;
        if ( *(_MDL **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset) != v15 )
          goto LABEL_24;
        (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(*(_QWORD *)(v6 + 3760) + 224LL))(
          *(_QWORD *)(v6 + 24),
          v13);
      }
      else
      {
        if ( *(_MDL **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset) != v15 )
        {
          *(_QWORD *)v18 = v15;
          *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = 259;
          if ( (v13[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v13[-1].ProtocolReserved[4] != -1 )
          {
            v22 = v13;
LABEL_24:
            ndisReturnPacketToNetBufferList((struct _NDIS_OBJECT_HEADER *)v6, v22);
            goto LABEL_32;
          }
LABEL_29:
          NDIS_FREE_XFER_DATA_PACKET(v13);
          goto LABEL_32;
        }
        *(unsigned int *)((char *)&v13->Private.Count + NdisPacketOobOffset) = (unsigned int)v15;
      }
LABEL_32:
      if ( Status == -1073741670 )
        ndisXlateReturnPacketToNetBufferList(v13);
      ++v12;
      --v31;
    }
    while ( v31 );
    v11 = v29;
  }
  while ( v11 );
  v23 = *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120);
  v24 = v35;
  if ( v23->PmodeOpens )
  {
    v25 = v36;
    v26 = v37;
    v27 = v32;
    v28 = v33;
    ndisCoIndicatePromiscNetBuffer(v37, v23, *(struct _NDIS_OPEN_BLOCK **)v35, v36, v33, v32, 1);
    ndisCoIndicatePromiscNetBuffer(
      v26,
      *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
      *(struct _NDIS_OPEN_BLOCK **)(v24 + 8),
      v25,
      v28,
      v27,
      1);
    ndisCoIndicatePromiscNetBuffer(
      v26,
      *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
      *(struct _NDIS_OPEN_BLOCK **)(v24 + 16),
      v25,
      v28,
      v27,
      1);
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v24 + 288), &LockState);
}
