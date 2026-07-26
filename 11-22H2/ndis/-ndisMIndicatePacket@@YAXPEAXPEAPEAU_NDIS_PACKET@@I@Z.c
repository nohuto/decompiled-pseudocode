/*
 * XREFs of ?ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0090640
 * Callers:
 *     <none>
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0003280 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C00038D0 (NdisAcquireRWLockRead.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C00315F8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C0072204 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0090330 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     NdisGetFirstBufferFromPacket @ 0x1C00C6480 (NdisGetFirstBufferFromPacket.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C00C9A4C (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ndisMIndicatePacket(struct _NDIS_OBJECT_HEADER *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // rax
  char v4; // r15
  unsigned int Number; // r12d
  struct _NDIS_PACKET **v6; // rbx
  struct _NDIS_RW_LOCK_EX *v9; // rcx
  struct _NDIS_PACKET *v10; // rbx
  int v11; // ecx
  struct _NDIS_STACK_RESERVED *v12; // rsi
  _DWORD *v13; // r14
  char *v14; // r13
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r14
  __int64 v21; // rcx
  struct NDIS_NBL_TRACKER_HANDLE__ *v22; // rdx
  unsigned int v23; // r12d
  _QWORD *v24; // rax
  struct _NET_BUFFER_LIST *v25; // rcx
  int v26; // ecx
  bool v27; // zf
  struct _NDIS_PACKET *v28; // rdx
  _QWORD *v29; // rsi
  __int64 v30; // rcx
  unsigned int v31; // r12d
  __int64 v32; // rax
  __int64 v33; // rbx
  int v34; // [rsp+40h] [rbp-49h]
  struct _NDIS_STACK_RESERVED *v35; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v36; // [rsp+50h] [rbp-39h]
  _QWORD *v37; // [rsp+58h] [rbp-31h]
  unsigned int v38; // [rsp+60h] [rbp-29h]
  __int64 v39; // [rsp+68h] [rbp-21h] BYREF
  struct _NDIS_PACKET **v40; // [rsp+70h] [rbp-19h]
  char v41; // [rsp+78h] [rbp-11h] BYREF
  _QWORD *v42; // [rsp+80h] [rbp-9h]
  __int64 v43; // [rsp+88h] [rbp-1h]
  __int64 v44; // [rsp+90h] [rbp+7h]
  char v45; // [rsp+98h] [rbp+Fh] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+F0h] [rbp+67h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+F8h] [rbp+6Fh]
  unsigned int v48; // [rsp+100h] [rbp+77h]
  unsigned int v49; // [rsp+108h] [rbp+7Fh] BYREF

  v48 = a3;
  BugCheckParameter4 = (ULONG_PTR)a2;
  v3 = *(_QWORD *)&a1[100].Type;
  v4 = 0;
  Number = KeGetPcr()->Prcb.Number;
  v6 = a2;
  v40 = a2;
  v37 = (_QWORD *)v3;
  *(_WORD *)&LockState.OldIrql = 0;
  v9 = *(struct _NDIS_RW_LOCK_EX **)(v3 + 288);
  LockState.Flags = 0;
  v35 = 0LL;
  v39 = 0LL;
  v49 = 0;
  v34 = 0;
  v38 = Number;
  NdisAcquireRWLockRead(v9, &LockState, 0);
  v36 = 0;
  if ( !a3 )
  {
    v29 = v37;
    goto LABEL_62;
  }
  do
  {
    v10 = *v6;
    ++*(_DWORD *)&v10[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v10, &v35);
    v12 = v35;
    v13 = (_DWORD *)((char *)v35 + 8);
    if ( *((_DWORD *)v35 + 2) )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *(_QWORD *)&a1[964].Type,
        "Indicating packet not owned by it");
      KeBugCheckEx(0x7Cu, 0x12uLL, (ULONG_PTR)a1, (ULONG_PTR)v10, BugCheckParameter4);
    }
    v14 = (char *)v10 + v10->Private.NdisPacketOobOffset;
    NdisGetFirstBufferFromPacket(v11, (unsigned int)&v45, (unsigned int)&v39, (unsigned int)&v41, (__int64)&v49);
    if ( (v10->Private.Flags & 0x20000) == 0 && (v10->Private.NdisPacketFlags & 2) == 0 )
    {
      v15 = *(_QWORD *)&a1[788].Type;
      if ( v15 )
      {
        v12 = v35;
        v16 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v15 + v16 + 32);
      }
      v17 = *(_QWORD *)&a1[788].Type;
      if ( v17 )
      {
        v12 = v35;
        v18 = v49;
        v15 = v17 + 112LL * KeGetPcr()->Prcb.Number;
        *(_QWORD *)(v15 + 8) += v49;
        *(_QWORD *)v15 += v18;
      }
    }
    v10->Private.Flags &= ~0x20000u;
    *v13 = -1;
    *((_DWORD *)v12 + 3) = 0;
    *(_QWORD *)v12 = a1;
    v10->Private.ValidCounts = 0;
    if ( *((_DWORD *)v14 + 8) == -1073741670 || (*(_DWORD *)&a1[31] & 0x800) != 0 )
    {
      v19 = 1LL;
      v4 = 1;
    }
    else
    {
      if ( (*(_DWORD *)&a1[30] & 0x8000) == 0 )
        *((_DWORD *)v14 + 8) = 0;
      v19 = 1LL;
    }
    v20 = *v37;
    if ( *v37 )
    {
      v21 = Number << 12;
      v44 = v21;
      do
      {
        ++v34;
        v43 = *(_QWORD *)(v20 + 424);
        *(_BYTE *)(v21 + *(_QWORD *)(v20 + 720)) = 1;
        v22 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)&a1[400].Type;
        v23 = *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset);
        v24 = (_QWORD *)*((_QWORD *)v22 + KeGetPcr()->Prcb.Number);
        v42 = v24;
        LODWORD(v24) = KeGetPcr()->Prcb.Number;
        *((_QWORD *)v22 + (_QWORD)v24) = v10;
        if ( v4 || !*(_QWORD *)(v20 + 160) )
        {
          *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset) = -1073741670;
          (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v20 + 128))(*(_QWORD *)(v20 + 32), v10);
          *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset) = v23;
        }
        else
        {
          v25 = *(struct _NET_BUFFER_LIST **)((char *)&v10[1].Private.Head + v10->Private.NdisPacketOobOffset);
          if ( v25 && v23 == -1073741670 )
            ndisNblTrackerTransferOwnershipSingleNbl(v25, v22, *(_QWORD *)(v20 + 584));
          *((_DWORD *)v12 + 3) += (*(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *, __int64))(v20 + 160))(
                                    *(_QWORD *)(v20 + 32),
                                    v10,
                                    v19);
        }
        v19 = 1LL;
        if ( *((int *)v12 + 3) > 0 && (*(_DWORD *)(v20 + 224) & 8) == 0 )
          v4 = 1;
        v15 = (unsigned __int64)v42;
        *(_QWORD *)(*(_QWORD *)&a1[400].Type + 8LL * KeGetPcr()->Prcb.Number) = v42;
        v21 = v44;
        v20 = v43;
      }
      while ( v43 );
      v12 = v35;
      Number = v38;
    }
    v26 = *((_DWORD *)v12 + 3);
    v4 = 0;
    if ( v26 )
    {
      v15 = (unsigned int)(_InterlockedExchangeAdd((volatile signed __int32 *)v12 + 2, v26 + 1) + v26 + 1);
      v27 = (_DWORD)v15 == 0;
      if ( (int)v15 > 0 )
      {
        if ( (*(_DWORD *)&a1[30] & 0x40000) == 0 )
          *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset) = 259;
        v27 = (_DWORD)v15 == 0;
      }
      if ( !v27 )
      {
        if ( (*(_DWORD *)&a1[30] & 0x8000) != 0 )
          _InterlockedAdd((volatile signed __int32 *)&a1[457], 1u);
        goto LABEL_52;
      }
      v12 = v35;
    }
    else
    {
      *((_DWORD *)v12 + 2) = 0;
    }
    --*(_DWORD *)&v10[-1].ProtocolReserved[4];
    if ( *((_DWORD *)v14 + 8) == -1073741670 )
      goto LABEL_52;
    if ( (*(_DWORD *)&a1[30] & 0x40000) != 0 )
    {
      *(_QWORD *)v12 = 0LL;
      *((_DWORD *)v14 + 8) = 259;
      if ( (v10[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v10[-1].ProtocolReserved[4] == -1 )
        goto LABEL_49;
      v28 = v10;
      if ( *(_MDL **)((char *)&v10[1].Private.Head + v10->Private.NdisPacketOobOffset) )
        goto LABEL_44;
      (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, __int64))(*(_QWORD *)&a1[940].Type + 224LL))(
        *(_QWORD *)&a1[6].Type,
        v10,
        1LL);
    }
    else
    {
      if ( *(_MDL **)((char *)&v10[1].Private.Head + v10->Private.NdisPacketOobOffset) )
      {
        *(_QWORD *)v12 = 0LL;
        *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset) = 259;
        if ( (v10[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v10[-1].ProtocolReserved[4] != -1 )
        {
          v28 = v10;
LABEL_44:
          ndisReturnPacketToNetBufferList(a1, v28);
          goto LABEL_52;
        }
LABEL_49:
        NDIS_FREE_XFER_DATA_PACKET(v10);
        goto LABEL_52;
      }
      *((_DWORD *)v14 + 8) = 0;
    }
LABEL_52:
    v6 = v40 + 1;
    ++v36;
    ++v40;
  }
  while ( v36 < v48 );
  v29 = v37;
  if ( v34 )
  {
    v30 = *v37;
    if ( *v37 )
    {
      v31 = Number << 12;
      do
      {
        v32 = *(_QWORD *)(v30 + 720);
        v33 = *(_QWORD *)(v30 + 424);
        if ( *(_BYTE *)(v32 + v31) )
        {
          *(_BYTE *)(v32 + v31) = 0;
          (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64))(v30 + 136))(*(_QWORD *)(v30 + 32), v15, v19);
        }
        v30 = v33;
      }
      while ( v33 );
    }
  }
LABEL_62:
  NdisReleaseRWLock((PNDIS_RW_LOCK_EX)v29[36], &LockState);
}
