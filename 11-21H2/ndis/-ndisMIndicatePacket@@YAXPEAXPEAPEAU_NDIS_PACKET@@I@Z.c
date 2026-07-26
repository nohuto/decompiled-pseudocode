/*
 * XREFs of ?ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C008A990
 * Callers:
 *     <none>
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0006310 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C0006630 (NdisAcquireRWLockRead.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C002DDD8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C006CE6C (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C008A680 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     NdisGetFirstBufferFromPacket @ 0x1C00C1840 (NdisGetFirstBufferFromPacket.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C00C4E0C (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ndisMIndicatePacket(struct _NDIS_OBJECT_HEADER *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  unsigned int Number; // eax
  struct _NDIS_PACKET **v5; // rbx
  struct _NDIS_RW_LOCK_EX *v7; // rcx
  struct _NDIS_PACKET *v8; // rbx
  int v9; // ecx
  struct _NDIS_STACK_RESERVED *v10; // rsi
  volatile signed __int32 *v11; // r13
  char *v12; // r15
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  int *v18; // rcx
  char v19; // r12
  __int64 v20; // r8
  __int64 v21; // r14
  int *v22; // r13
  __int64 v23; // rcx
  struct NDIS_NBL_TRACKER_HANDLE__ *v24; // rdx
  unsigned int v25; // esi
  _QWORD *v26; // rax
  __int16 (__fastcall *v27)(_QWORD, struct _NDIS_PACKET *); // r8
  struct _NET_BUFFER_LIST *v28; // rcx
  int v29; // ecx
  bool v30; // zf
  struct _NDIS_PACKET *v31; // rdx
  _QWORD *v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rbx
  int v37; // [rsp+40h] [rbp-59h]
  struct _NDIS_STACK_RESERVED *v38; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v39; // [rsp+50h] [rbp-49h]
  unsigned int v40; // [rsp+54h] [rbp-45h]
  _QWORD *v41; // [rsp+58h] [rbp-41h]
  __int64 v42; // [rsp+60h] [rbp-39h] BYREF
  int *v43; // [rsp+68h] [rbp-31h]
  struct _NDIS_PACKET **v44; // [rsp+70h] [rbp-29h]
  char v45; // [rsp+78h] [rbp-21h] BYREF
  _QWORD *v46; // [rsp+80h] [rbp-19h]
  __int64 v47; // [rsp+88h] [rbp-11h]
  __int64 v48; // [rsp+90h] [rbp-9h]
  volatile signed __int32 *v49; // [rsp+98h] [rbp-1h]
  char v50; // [rsp+A0h] [rbp+7h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+100h] [rbp+67h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+108h] [rbp+6Fh]
  unsigned int v53; // [rsp+110h] [rbp+77h]
  unsigned int v54; // [rsp+118h] [rbp+7Fh] BYREF

  v53 = a3;
  BugCheckParameter4 = (ULONG_PTR)a2;
  Number = KeGetPcr()->Prcb.Number;
  v44 = a2;
  v5 = a2;
  v41 = *(_QWORD **)&a1[100].Type;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v7 = (struct _NDIS_RW_LOCK_EX *)v41[36];
  v38 = 0LL;
  v42 = 0LL;
  v54 = 0;
  v37 = 0;
  v40 = Number;
  NdisAcquireRWLockRead(v7, &LockState, 0);
  v39 = 0;
  if ( !a3 )
  {
    v32 = v41;
    goto LABEL_61;
  }
  do
  {
    v8 = *v5;
    ++*(_DWORD *)&v8[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v8, &v38);
    v10 = v38;
    v11 = (volatile signed __int32 *)((char *)v38 + 8);
    v49 = (volatile signed __int32 *)((char *)v38 + 8);
    if ( *((_DWORD *)v38 + 2) )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *(_QWORD *)&a1[964].Type,
        "Indicating packet not owned by it");
      KeBugCheckEx(0x7Cu, 0x12uLL, (ULONG_PTR)a1, (ULONG_PTR)v8, BugCheckParameter4);
    }
    v12 = (char *)v8 + v8->Private.NdisPacketOobOffset;
    NdisGetFirstBufferFromPacket(v9, (unsigned int)&v50, (unsigned int)&v42, (unsigned int)&v45, (__int64)&v54);
    if ( (v8->Private.Flags & 0x20000) == 0 && (v8->Private.NdisPacketFlags & 2) == 0 )
    {
      v14 = *(_QWORD *)&a1[788].Type;
      if ( v14 )
      {
        v10 = v38;
        v15 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v14 + v15 + 32);
        v16 = *(_QWORD *)&a1[788].Type;
        if ( v16 )
        {
          v10 = v38;
          v17 = v54;
          v13 = v16 + 112LL * KeGetPcr()->Prcb.Number;
          *(_QWORD *)(v13 + 8) += v54;
          *(_QWORD *)v13 += v17;
        }
      }
    }
    v8->Private.Flags &= ~0x20000u;
    v18 = (int *)((char *)v10 + 12);
    *v11 = -1;
    *((_DWORD *)v10 + 3) = 0;
    *(_QWORD *)v10 = a1;
    v8->Private.ValidCounts = 0;
    v30 = *((_DWORD *)v12 + 8) == -1073741670;
    v43 = (int *)((char *)v10 + 12);
    if ( v30 || (*(_DWORD *)&a1[31] & 0x800) != 0 )
    {
      v20 = 1LL;
      v19 = 1;
    }
    else
    {
      if ( (*(_DWORD *)&a1[30] & 0x8000) == 0 )
        *((_DWORD *)v12 + 8) = 0;
      v19 = 0;
      v20 = 1LL;
    }
    v21 = *v41;
    if ( *v41 )
    {
      v22 = v43;
      v23 = v40 << 12;
      v48 = v23;
      do
      {
        ++v37;
        v47 = *(_QWORD *)(v21 + 424);
        *(_BYTE *)(v23 + *(_QWORD *)(v21 + 720)) = 1;
        v24 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)&a1[400].Type;
        v25 = *(unsigned int *)((char *)&v8->Private.Count + v8->Private.NdisPacketOobOffset);
        v26 = (_QWORD *)*((_QWORD *)v24 + KeGetPcr()->Prcb.Number);
        v46 = v26;
        LODWORD(v26) = KeGetPcr()->Prcb.Number;
        *((_QWORD *)v24 + (_QWORD)v26) = v8;
        if ( v19 || (v27 = *(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v21 + 160)) == 0LL )
        {
          *(unsigned int *)((char *)&v8->Private.Count + v8->Private.NdisPacketOobOffset) = -1073741670;
          (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v21 + 128))(*(_QWORD *)(v21 + 32), v8);
          *(unsigned int *)((char *)&v8->Private.Count + v8->Private.NdisPacketOobOffset) = v25;
        }
        else
        {
          v28 = *(struct _NET_BUFFER_LIST **)((char *)&v8[1].Private.Head + v8->Private.NdisPacketOobOffset);
          if ( v28 && v25 == -1073741670 )
          {
            ndisNblTrackerTransferOwnershipSingleNbl(v28, v24, *(_QWORD *)(v21 + 584));
            v27 = *(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v21 + 160);
          }
          *v22 += v27(*(_QWORD *)(v21 + 32), v8);
        }
        v20 = 1LL;
        if ( *v22 > 0 && (*(_DWORD *)(v21 + 224) & 8) == 0 )
          v19 = 1;
        v13 = (unsigned __int64)v46;
        *(_QWORD *)(*(_QWORD *)&a1[400].Type + 8LL * KeGetPcr()->Prcb.Number) = v46;
        v23 = v48;
        v21 = v47;
      }
      while ( v47 );
      v10 = v38;
      v11 = v49;
      v18 = v43;
    }
    v29 = *v18;
    if ( v29 )
    {
      v13 = (unsigned int)(_InterlockedExchangeAdd(v11, v29 + 1) + v29 + 1);
      v30 = (_DWORD)v13 == 0;
      if ( (int)v13 > 0 )
      {
        if ( (*(_DWORD *)&a1[30] & 0x40000) == 0 )
          *(unsigned int *)((char *)&v8->Private.Count + v8->Private.NdisPacketOobOffset) = 259;
        v30 = (_DWORD)v13 == 0;
      }
      if ( !v30 )
      {
        if ( (*(_DWORD *)&a1[30] & 0x8000) != 0 )
          _InterlockedAdd((volatile signed __int32 *)&a1[457], 1u);
        goto LABEL_51;
      }
      v10 = v38;
    }
    else
    {
      *v11 = 0;
    }
    --*(_DWORD *)&v8[-1].ProtocolReserved[4];
    if ( *((_DWORD *)v12 + 8) == -1073741670 )
      goto LABEL_51;
    if ( (*(_DWORD *)&a1[30] & 0x40000) != 0 )
    {
      *(_QWORD *)v10 = 0LL;
      *((_DWORD *)v12 + 8) = 259;
      if ( (v8[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v8[-1].ProtocolReserved[4] == -1 )
        goto LABEL_48;
      v31 = v8;
      if ( *(_MDL **)((char *)&v8[1].Private.Head + v8->Private.NdisPacketOobOffset) )
        goto LABEL_43;
      (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, __int64))(*(_QWORD *)&a1[940].Type + 224LL))(
        *(_QWORD *)&a1[6].Type,
        v8,
        1LL);
    }
    else
    {
      if ( *(_MDL **)((char *)&v8[1].Private.Head + v8->Private.NdisPacketOobOffset) )
      {
        *(_QWORD *)v10 = 0LL;
        *(unsigned int *)((char *)&v8->Private.Count + v8->Private.NdisPacketOobOffset) = 259;
        if ( (v8[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v8[-1].ProtocolReserved[4] != -1 )
        {
          v31 = v8;
LABEL_43:
          ndisReturnPacketToNetBufferList(a1, v31);
          goto LABEL_51;
        }
LABEL_48:
        NDIS_FREE_XFER_DATA_PACKET(v8);
        goto LABEL_51;
      }
      *((_DWORD *)v12 + 8) = 0;
    }
LABEL_51:
    v5 = v44 + 1;
    ++v39;
    ++v44;
  }
  while ( v39 < v53 );
  v32 = v41;
  if ( v37 )
  {
    v33 = *v41;
    if ( *v41 )
    {
      v34 = v40 << 12;
      do
      {
        v35 = *(_QWORD *)(v33 + 720);
        v36 = *(_QWORD *)(v33 + 424);
        if ( *(_BYTE *)(v35 + v34) )
        {
          *(_BYTE *)(v35 + v34) = 0;
          (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64))(v33 + 136))(*(_QWORD *)(v33 + 32), v13, v20);
        }
        v33 = v36;
      }
      while ( v36 );
    }
  }
LABEL_61:
  NdisReleaseRWLock((PNDIS_RW_LOCK_EX)v32[36], &LockState);
}
