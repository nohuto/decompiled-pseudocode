/*
 * XREFs of ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00C25A0
 * Callers:
 *     <none>
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0003410 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C0003A60 (NdisAcquireRWLockRead.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0031788 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x1C0073420 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x1C0073924 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0090350 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C00C169C (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C00C9A6C (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ndisMCoIndicateReceiveNetBufferListsToNdisPacket(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // r13
  __int64 v6; // rdi
  __int64 Status; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // al
  struct _NDIS_PACKET **v12; // r12
  struct _NDIS_PACKET *v13; // rbx
  __int64 NdisPacketOobOffset; // r14
  char *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rax
  struct _NDIS_STACK_RESERVED *v18; // rsi
  int *v19; // r15
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  signed __int32 v23; // edx
  bool v24; // zf
  struct _NDIS_PACKET *v25; // rdx
  struct _NDIS_MINIPORT_BLOCK *v26; // rdx
  __int64 v27; // r12
  struct _NET_BUFFER_LIST *v28; // rbx
  _QWORD *v29; // rdi
  unsigned int v30; // esi
  unsigned int v31; // r14d
  char v32; // [rsp+40h] [rbp-C0h]
  struct _LOCK_STATE_EX LockState; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v34; // [rsp+48h] [rbp-B8h]
  unsigned int v35; // [rsp+4Ch] [rbp-B4h]
  struct _NDIS_STACK_RESERVED *v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  struct _NET_BUFFER_LIST *v40; // [rsp+70h] [rbp-90h]
  void *v41; // [rsp+78h] [rbp-88h]
  struct _NDIS_PACKET **v42; // [rsp+80h] [rbp-80h] BYREF
  int v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+8Ch] [rbp-74h]
  struct _NET_BUFFER_LIST *v45; // [rsp+90h] [rbp-70h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+98h] [rbp-68h]
  unsigned int v47; // [rsp+A0h] [rbp-60h]
  int v48; // [rsp+A4h] [rbp-5Ch]
  __int64 v49; // [rsp+A8h] [rbp-58h]
  _BYTE v50[512]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a1[9];
  v35 = a3;
  v40 = a2;
  v41 = a1;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v44 = 0;
  v48 = 0;
  v34 = a4;
  memset(v50, 0, sizeof(v50));
  v6 = *(_QWORD *)(v4 + 120);
  v36 = 0LL;
  v39 = *(_QWORD *)(v6 + 400);
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(v39 + 288), &LockState, 0);
  Status = a2->Status;
  v8 = KeGetPcr()->Prcb.Number << 12;
  v9 = *(_QWORD *)(v4 + 16);
  v43 = 64;
  v45 = a2;
  v47 = 0;
  v10 = *(_QWORD *)(v9 + 720);
  v42 = (struct _NDIS_PACKET **)v50;
  v49 = v6;
  v38 = Status;
  *(_BYTE *)(v8 + v10) = 1;
  FirstNetBuffer = a2->FirstNetBuffer;
  do
  {
    v11 = ndisXlateRecvNetBufferListsToPacketArray((struct _NDIS_NBLS_TO_PKT_ARRAY *)&v42);
    v32 = v11;
    if ( !v47 )
      continue;
    v12 = v42;
    v37 = v47;
    do
    {
      v13 = *v12;
      NdisPacketOobOffset = (*v12)->Private.NdisPacketOobOffset;
      ++*(_DWORD *)&v13[-1].ProtocolReserved[4];
      v15 = (char *)v13 + NdisPacketOobOffset;
      NDIS_STACK_RESERVED_FROM_PACKET(v13, &v36);
      v16 = *(_QWORD *)(v6 + 3152);
      if ( v16 )
      {
        v17 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v16 + v17 + 32);
      }
      v18 = v36;
      *((_DWORD *)v36 + 2) = -1;
      v19 = (int *)((char *)v18 + 12);
      *((_DWORD *)v18 + 3) = 0;
      *(_QWORD *)v18 = v6;
      v13->Private.ValidCounts = 0;
      v20 = *((_DWORD *)v15 + 8);
      if ( v20 != -1073741670 )
        *((_DWORD *)v15 + 8) = v20;
      if ( (*(_DWORD *)(v4 + 4) & 0x10) != 0 )
        v21 = 0;
      else
        v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _NDIS_PACKET *))(v4 + 56))(
                *(_QWORD *)(*(_QWORD *)(v4 + 16) + 32LL),
                *(_QWORD *)(v4 + 24),
                v13);
      *v19 = v21;
      if ( *v19 )
      {
        v22 = *v19;
        v23 = _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 2, v22 + 1) + v22 + 1;
        v24 = v23 == 0;
        if ( v23 > 0 )
        {
          if ( (*(_DWORD *)(v6 + 120) & 0x40000) == 0 )
            *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = 259;
          v24 = v23 == 0;
        }
        if ( !v24 )
        {
          if ( (*(_DWORD *)(v6 + 120) & 0x8000) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v6 + 1828));
          goto LABEL_34;
        }
        v18 = v36;
      }
      else
      {
        *((_DWORD *)v18 + 2) = 0;
      }
      --*(_DWORD *)&v13[-1].ProtocolReserved[4];
      if ( *((_DWORD *)v15 + 8) == -1073741670 )
        goto LABEL_34;
      if ( (*(_DWORD *)(v6 + 120) & 0x40000) != 0 )
      {
        *(_QWORD *)v18 = 0LL;
        *((_DWORD *)v15 + 8) = 259;
        if ( (v13[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v13[-1].ProtocolReserved[4] == -1 )
          goto LABEL_31;
        v25 = v13;
        if ( *(_MDL **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset) )
          goto LABEL_26;
        (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(*(_QWORD *)(v6 + 3760) + 224LL))(
          *(_QWORD *)(v6 + 24),
          v13);
      }
      else
      {
        if ( *(_MDL **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset) )
        {
          *(_QWORD *)v18 = 0LL;
          *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = 259;
          if ( (v13[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v13[-1].ProtocolReserved[4] != -1 )
          {
            v25 = v13;
LABEL_26:
            ndisReturnPacketToNetBufferList((struct _NDIS_OBJECT_HEADER *)v6, v25);
            goto LABEL_34;
          }
LABEL_31:
          NDIS_FREE_XFER_DATA_PACKET(v13);
          goto LABEL_34;
        }
        *((_DWORD *)v15 + 8) = 0;
      }
LABEL_34:
      if ( v38 == -1073741670 )
        ndisXlateReturnPacketToNetBufferList(v13);
      ++v12;
      --v37;
    }
    while ( v37 );
    v11 = v32;
  }
  while ( v11 );
  v26 = *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120);
  v27 = v39;
  if ( v26->PmodeOpens )
  {
    v28 = v40;
    v29 = v41;
    v30 = v34;
    v31 = v35;
    ndisCoIndicatePromiscNetBuffer(v41, v26, *(struct _NDIS_OPEN_BLOCK **)v39, v40, v35, v34, 1);
    ndisCoIndicatePromiscNetBuffer(
      v29,
      *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
      *(struct _NDIS_OPEN_BLOCK **)(v27 + 8),
      v28,
      v31,
      v30,
      1);
    ndisCoIndicatePromiscNetBuffer(
      v29,
      *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
      *(struct _NDIS_OPEN_BLOCK **)(v27 + 16),
      v28,
      v31,
      v30,
      1);
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v27 + 288), &LockState);
}
