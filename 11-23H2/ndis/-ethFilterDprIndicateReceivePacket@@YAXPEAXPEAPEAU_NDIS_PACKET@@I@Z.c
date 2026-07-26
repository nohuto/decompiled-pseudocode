/*
 * XREFs of ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0061E80
 * Callers:
 *     <none>
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0003410 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C0003A60 (NdisAcquireRWLockRead.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0031788 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z @ 0x1C0062918 (-ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C0072224 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0090350 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ethFilterReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z @ 0x1C0090484 (-ethFilterReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C00C9A6C (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ethFilterDprIndicateReceivePacket(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PACKET **a2,
        unsigned int a3)
{
  unsigned int Number; // ebp
  _X_FILTER *EthDB; // r15
  int PnPFlags; // r8d
  struct _NDIS_PACKET **v7; // rbx
  int v9; // r12d
  struct _NDIS_RW_LOCK_EX *BindListLock; // rcx
  struct _NDIS_PACKET *v11; // rbx
  int v12; // ecx
  int v13; // r9d
  _MDL *Head; // rsi
  char *v15; // rdx
  unsigned __int8 *MappedSystemVa; // r11
  unsigned __int8 *v17; // rax
  struct _MDL *Next; // rcx
  __int64 v19; // r8
  unsigned int ByteCount; // r10d
  struct _NDIS_STACK_RESERVED *v21; // r13
  _NDIS_OPEN_BLOCK *SingleActiveOpen; // rsi
  int v23; // r10d
  struct NDIS_NBL_TRACKER_HANDLE__ *IndicatedPacket; // rdx
  unsigned int v25; // ebp
  __int64 v26; // rax
  _NDIS_PACKET *v27; // r14
  struct _NET_BUFFER_LIST *v28; // rcx
  _NDIS_MINIPORT_STATS *v29; // r8
  _NDIS_MINIPORT_STATS *v30; // rdx
  _NDIS_MINIPORT_STATS *v31; // rdx
  __int64 v32; // rax
  int v33; // r14d
  _NDIS_OPEN_BLOCK *v34; // rsi
  unsigned int v35; // eax
  _NDIS_OPEN_BLOCK *v36; // r12
  struct NDIS_NBL_TRACKER_HANDLE__ *v37; // rdx
  unsigned int v38; // ebp
  __int64 v39; // rax
  _NDIS_PACKET *v40; // r15
  struct _NET_BUFFER_LIST *v41; // rcx
  int v42; // eax
  unsigned int *p_Flags; // r14
  int v44; // r9d
  _NDIS_MINIPORT_STATS *BottomIfStats; // r8
  _NDIS_MINIPORT_STATS *v46; // rdx
  _NDIS_MINIPORT_STATS *v47; // rdx
  __int64 v48; // rax
  _NDIS_MINIPORT_STATS *v49; // r9
  _NDIS_MINIPORT_STATS *v50; // rdx
  _NDIS_MINIPORT_STATS *v51; // rdx
  __int64 v52; // rax
  _NDIS_OPEN_BLOCK *OpenList; // rsi
  _NDIS_OPEN_BLOCK *FilterNextOpen; // r13
  unsigned int PacketFilters; // eax
  int v56; // ebp
  unsigned __int8 Multicast; // al
  struct NDIS_NBL_TRACKER_HANDLE__ *v58; // rdx
  unsigned int v59; // r15d
  __int64 v60; // rax
  _NDIS_PACKET *v61; // r12
  struct _NET_BUFFER_LIST *v62; // rcx
  int v63; // ecx
  struct _NDIS_STACK_RESERVED *v64; // rax
  unsigned __int8 *v65; // r8
  char v66; // al
  int v67; // ecx
  signed __int32 v68; // edx
  bool v69; // zf
  char *v70; // rcx
  struct _NDIS_PACKET *v71; // rdx
  _NDIS_OPEN_BLOCK *v72; // rcx
  __int64 v73; // rdi
  PNDIS_PER_PROCESSOR_SLOT__ *ReceivedAPacketSlot; // rax
  _NDIS_OPEN_BLOCK *v75; // rbx
  unsigned int v76; // [rsp+40h] [rbp-98h]
  int v77; // [rsp+44h] [rbp-94h]
  int v78; // [rsp+48h] [rbp-90h]
  unsigned int v79; // [rsp+4Ch] [rbp-8Ch]
  struct _NDIS_STACK_RESERVED *v80; // [rsp+50h] [rbp-88h] BYREF
  unsigned int v81; // [rsp+58h] [rbp-80h]
  unsigned __int8 *v82; // [rsp+60h] [rbp-78h]
  _X_FILTER *v83; // [rsp+68h] [rbp-70h]
  struct _NDIS_STACK_RESERVED *v84; // [rsp+70h] [rbp-68h]
  char *v85; // [rsp+78h] [rbp-60h]
  struct _NDIS_PACKET **v86; // [rsp+80h] [rbp-58h]
  struct _LOCK_STATE_EX LockState; // [rsp+E0h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+E8h] [rbp+10h]
  unsigned int v89; // [rsp+F0h] [rbp+18h]
  int v90; // [rsp+F8h] [rbp+20h]

  v89 = a3;
  BugCheckParameter4 = (ULONG_PTR)a2;
  Number = KeGetPcr()->Prcb.Number;
  EthDB = a1->EthDB;
  PnPFlags = a1->PnPFlags;
  v7 = a2;
  v86 = a2;
  *(_WORD *)&LockState.LockState = 0;
  v80 = 0LL;
  v9 = 0;
  LockState.OldIrql = 2;
  BindListLock = EthDB->BindListLock;
  v83 = EthDB;
  v77 = 0;
  v79 = Number;
  NdisAcquireRWLockRead(BindListLock, &LockState, PnPFlags < 0);
  v81 = 0;
  if ( !a3 )
    goto LABEL_150;
  while ( 1 )
  {
    v11 = *v7;
    v12 = *(_DWORD *)&v11[-1].ProtocolReserved[4];
    if ( v12 != -1 && (a1->Flags & 0x8000) == 0 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        a1->pAdapterInstanceName,
        "Indicating packet not owned by it");
      KeBugCheckEx(0x7Cu, 5uLL, (ULONG_PTR)a1, (ULONG_PTR)v11, BugCheckParameter4);
    }
    *(_DWORD *)&v11[-1].ProtocolReserved[4] = v12 + 1;
    NDIS_STACK_RESERVED_FROM_PACKET(v11, &v80);
    Head = v11->Private.Head;
    v15 = (char *)v11 + v11->Private.NdisPacketOobOffset;
    v85 = v15;
    if ( (Head->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = (unsigned __int8 *)Head->MappedSystemVa;
      v82 = MappedSystemVa;
    }
    else
    {
      v17 = (unsigned __int8 *)MmMapLockedPages(Head, 0);
      v15 = v85;
      MappedSystemVa = v17;
      v82 = v17;
    }
    Next = Head->Next;
    v19 = 0LL;
    ByteCount = Head->ByteCount;
    v76 = ByteCount;
    if ( Head->Next )
    {
      do
      {
        ByteCount += Next->ByteCount;
        Next = Next->Next;
      }
      while ( Next );
      v76 = ByteCount;
    }
    v21 = v80;
    v84 = v80;
    *((_DWORD *)v80 + 2) = -1;
    *((_DWORD *)v21 + 3) = 0;
    *(_QWORD *)v21 = a1;
    v11->Private.ValidCounts = 0;
    if ( *((_DWORD *)v15 + 8) == -1073741670 || (a1->PnPFlags & 0x800) != 0 )
    {
      LOBYTE(v13) = 1;
    }
    else
    {
      if ( (a1->Flags & 0x8000) == 0 )
        *((_DWORD *)v15 + 8) = 0;
      LOBYTE(v13) = 0;
    }
    SingleActiveOpen = EthDB->SingleActiveOpen;
    v90 = v13;
    if ( SingleActiveOpen && SingleActiveOpen->ProtocolMajorVersion < 6 )
    {
      if ( (ByteCount >= 0xE || (EthDB->CombinedPacketFilter & 0xA0) != 0)
        && ((v11->Private.Flags & 0x80u) == 0
         || *(_NDIS_OPEN_BLOCK **)&v11->MacReserved[v11->Private.NdisPacketOobOffset + 24] != SingleActiveOpen) )
      {
        v77 = v9 + 1;
        *((_BYTE *)SingleActiveOpen->ReceivedAPacketSlot + 4096 * Number) = 1;
        v23 = SingleActiveOpen->PacketFilters & 0xA0;
        if ( (v11->Private.Flags & 0x20000) == 0 && (v11->Private.NdisPacketFlags & 2) == 0 )
        {
          ethFilterReceivePacketStats(a1, MappedSystemVa, v76);
          v19 = 0LL;
        }
        v11->Private.Flags &= ~0x20000u;
        IndicatedPacket = (struct NDIS_NBL_TRACKER_HANDLE__ *)a1->IndicatedPacket;
        v25 = *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset);
        v26 = KeGetPcr()->Prcb.Number;
        v27 = (_NDIS_PACKET *)*((_QWORD *)IndicatedPacket + v26);
        *((_QWORD *)IndicatedPacket + v26) = v11;
        if ( (_BYTE)v90 || !SingleActiveOpen->ReceivePacketHandler || v23 && !EthDB->SingleActiveOpen )
        {
          *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = -1073741670;
          SingleActiveOpen->ReceiveHandler(
            SingleActiveOpen->ProtocolBindingContext,
            v11,
            MappedSystemVa,
            14u,
            MappedSystemVa + 14,
            v11->Private.Head->ByteCount - 14,
            v76 - 14);
          *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = v25;
        }
        else
        {
          v28 = *(struct _NET_BUFFER_LIST **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset);
          if ( v28 && v25 == -1073741670 )
            ndisNblTrackerTransferOwnershipSingleNbl(v28, IndicatedPacket, SingleActiveOpen->NblTracker, v13);
          *((_DWORD *)v21 + 3) += ((__int16 (__fastcall *)(void *, struct _NDIS_PACKET *, __int64))SingleActiveOpen->ReceivePacketHandler)(
                                    SingleActiveOpen->ProtocolBindingContext,
                                    v11,
                                    v19);
        }
        a1->IndicatedPacket[KeGetPcr()->Prcb.Number] = v27;
      }
      goto LABEL_119;
    }
    if ( ByteCount < 0xE )
    {
      v44 = 32;
      p_Flags = &v11->Private.Flags;
      v78 = 32;
      goto LABEL_91;
    }
    if ( (*MappedSystemVa & 1) != 0 )
    {
      if ( *MappedSystemVa == 0xFF
        && MappedSystemVa[1] == 0xFF
        && MappedSystemVa[2] == 0xFF
        && MappedSystemVa[3] == 0xFF
        && MappedSystemVa[4] == 0xFF
        && MappedSystemVa[5] == 0xFF )
      {
        p_Flags = &v11->Private.Flags;
        v44 = 8;
        v78 = 8;
        if ( (v11->Private.Flags & 0x20000) == 0 && (v11->Private.NdisPacketFlags & 2) == 0 )
        {
          BottomIfStats = a1->BottomIfStats;
          if ( BottomIfStats )
          {
            v46 = &BottomIfStats[KeGetPcr()->Prcb.Number];
            v46->ifHCInBroadcastOctets += ByteCount;
            v46->ifHCInOctets += ByteCount;
          }
          v47 = a1->BottomIfStats;
          if ( v47 )
          {
            v48 = KeGetPcr()->Prcb.Number;
            ++v47[v48].ifHCInBroadcastPkts;
          }
        }
      }
      else
      {
        v44 = 2;
        p_Flags = &v11->Private.Flags;
        v78 = 2;
        if ( (v11->Private.Flags & 0x20000) == 0 && (v11->Private.NdisPacketFlags & 2) == 0 )
        {
          v49 = a1->BottomIfStats;
          if ( v49 )
          {
            v50 = &v49[KeGetPcr()->Prcb.Number];
            v50->ifHCInMulticastOctets += ByteCount;
            v50->ifHCInOctets += ByteCount;
          }
          v51 = a1->BottomIfStats;
          v44 = 2;
          if ( v51 )
          {
            v52 = KeGetPcr()->Prcb.Number;
            ++v51[v52].ifHCInMulticastPkts;
          }
        }
      }
      *p_Flags &= ~0x20000u;
      v19 = 0LL;
LABEL_91:
      OpenList = EthDB->OpenList;
      if ( !EthDB->OpenList )
        goto LABEL_119;
      while ( 1 )
      {
        FilterNextOpen = OpenList->FilterNextOpen;
        if ( (*p_Flags & 0x80u) != 0
          && *(_NDIS_OPEN_BLOCK **)&v11->MacReserved[v11->Private.NdisPacketOobOffset + 24] == OpenList )
        {
          goto LABEL_117;
        }
        PacketFilters = OpenList->PacketFilters;
        v56 = PacketFilters & 0xA0;
        if ( (PacketFilters & 0xA0) != 0 )
          goto LABEL_102;
        if ( v44 == 8 )
          break;
        if ( v44 == 2 )
        {
          if ( (PacketFilters & 4) != 0 )
            goto LABEL_102;
          if ( (PacketFilters & 2) != 0 )
          {
            Multicast = ethFindMulticast(OpenList->NumAddresses, OpenList->MCastAddressBuf, 0LL, MappedSystemVa);
            ByteCount = v76;
            v19 = 0LL;
            if ( Multicast )
              goto LABEL_102;
            goto LABEL_116;
          }
        }
LABEL_117:
        MappedSystemVa = v82;
        OpenList = FilterNextOpen;
        if ( !FilterNextOpen )
        {
LABEL_118:
          EthDB = v83;
          goto LABEL_119;
        }
      }
      if ( (PacketFilters & 8) == 0 )
        goto LABEL_117;
LABEL_102:
      v77 = v9 + 1;
      *((_BYTE *)OpenList->ReceivedAPacketSlot + 4096 * v79) = 1;
      v58 = (struct NDIS_NBL_TRACKER_HANDLE__ *)a1->IndicatedPacket;
      v59 = *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset);
      v60 = KeGetPcr()->Prcb.Number;
      v61 = (_NDIS_PACKET *)*((_QWORD *)v58 + v60);
      *((_QWORD *)v58 + v60) = v11;
      if ( (_BYTE)v90 || !OpenList->ReceivePacketHandler || v56 && !v83->SingleActiveOpen )
      {
        v65 = v82;
        *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = -1073741670;
        OpenList->ReceiveHandler(
          OpenList->ProtocolBindingContext,
          v11,
          v65,
          14u,
          v65 + 14,
          v11->Private.Head->ByteCount - 14,
          ByteCount - 14);
        *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = v59;
        v64 = v84;
      }
      else
      {
        v62 = *(struct _NET_BUFFER_LIST **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset);
        if ( v62 && v59 == -1073741670 )
          ndisNblTrackerTransferOwnershipSingleNbl(v62, v58, OpenList->NblTracker, v44);
        v63 = ((__int16 (__fastcall *)(void *, struct _NDIS_PACKET *, __int64))OpenList->ReceivePacketHandler)(
                OpenList->ProtocolBindingContext,
                v11,
                v19);
        v64 = v84;
        *((_DWORD *)v84 + 3) += v63;
      }
      v19 = 0LL;
      if ( *((int *)v64 + 3) > 0 )
      {
        v66 = v90;
        if ( (OpenList->OpenFlags & 8) == 0 )
          v66 = 1;
        LOBYTE(v90) = v66;
      }
      ByteCount = v76;
      a1->IndicatedPacket[KeGetPcr()->Prcb.Number] = v61;
      v9 = v77;
LABEL_116:
      v44 = v78;
      goto LABEL_117;
    }
    if ( (v11->Private.Flags & 0x20000) == 0 && (v11->Private.NdisPacketFlags & 2) == 0 )
    {
      v29 = a1->BottomIfStats;
      if ( v29 )
      {
        v30 = &v29[KeGetPcr()->Prcb.Number];
        v30->ifHCInUcastOctets += ByteCount;
        v30->ifHCInOctets += ByteCount;
      }
      v31 = a1->BottomIfStats;
      LOBYTE(v19) = 0;
      if ( v31 )
      {
        v32 = KeGetPcr()->Prcb.Number;
        ++v31[v32].ifHCInUcastPkts;
      }
    }
    v11->Private.Flags &= ~0x20000u;
    v33 = 0;
    if ( (EthDB->CombinedPacketFilter & 0xA4) != 0
      && (*(_DWORD *)&EthDB->AdapterAddress[2] != *(_DWORD *)(MappedSystemVa + 2)
       || *(_WORD *)EthDB->AdapterAddress != *(_WORD *)MappedSystemVa) )
    {
      v33 = 1;
    }
    v34 = EthDB->OpenList;
    if ( EthDB->OpenList )
    {
      while ( 1 )
      {
        v35 = v34->PacketFilters;
        v36 = v34->FilterNextOpen;
        if ( (v35 & 0xA0) != 0 )
        {
          LOBYTE(v19) = 1;
        }
        else if ( v33 || (v35 & 1) == 0 )
        {
          goto LABEL_68;
        }
        if ( (v11->Private.Flags & 0x80u) == 0
          || *(_NDIS_OPEN_BLOCK **)&v11->MacReserved[v11->Private.NdisPacketOobOffset + 24] != v34 )
        {
          ++v77;
          *((_BYTE *)v34->ReceivedAPacketSlot + 4096 * Number) = 1;
          v37 = (struct NDIS_NBL_TRACKER_HANDLE__ *)a1->IndicatedPacket;
          v38 = *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset);
          v39 = KeGetPcr()->Prcb.Number;
          v40 = (_NDIS_PACKET *)*((_QWORD *)v37 + v39);
          *((_QWORD *)v37 + v39) = v11;
          if ( (_BYTE)v13 || !v34->ReceivePacketHandler || (_BYTE)v19 && !v83->SingleActiveOpen )
          {
            *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = -1073741670;
            v34->ReceiveHandler(
              v34->ProtocolBindingContext,
              v11,
              MappedSystemVa,
              14u,
              MappedSystemVa + 14,
              v11->Private.Head->ByteCount - 14,
              ByteCount - 14);
            *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = v38;
          }
          else
          {
            v41 = *(struct _NET_BUFFER_LIST **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset);
            if ( v41 && v38 == -1073741670 )
              ndisNblTrackerTransferOwnershipSingleNbl(v41, v37, v34->NblTracker, 0);
            *((_DWORD *)v21 + 3) += (__int16)v34->ReceivePacketHandler(v34->ProtocolBindingContext, v11);
          }
          LOBYTE(v19) = 0;
          if ( *((int *)v21 + 3) > 0 )
          {
            v42 = (unsigned __int8)v90;
            if ( (v34->OpenFlags & 8) == 0 )
              v42 = 1;
            v90 = v42;
          }
          MappedSystemVa = v82;
          ByteCount = v76;
          Number = v79;
          a1->IndicatedPacket[KeGetPcr()->Prcb.Number] = v40;
          goto LABEL_69;
        }
LABEL_68:
        LOBYTE(v19) = 0;
LABEL_69:
        LOBYTE(v13) = v90;
        v34 = v36;
        if ( !v36 )
          goto LABEL_118;
      }
    }
LABEL_119:
    v67 = *((_DWORD *)v80 + 3);
    if ( v67 )
    {
      v68 = _InterlockedExchangeAdd((volatile signed __int32 *)v80 + 2, v67 + 1) + v67 + 1;
      v69 = v68 == 0;
      if ( v68 > 0 )
      {
        if ( (a1->Flags & 0x40000) == 0 )
          *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = 259;
        v69 = v68 == 0;
      }
      if ( !v69 )
      {
        if ( (a1->Flags & 0x8000) != 0 )
          _InterlockedAdd((volatile signed __int32 *)&a1->IndicatedPacketsCount, 1u);
        goto LABEL_141;
      }
    }
    else
    {
      *((_DWORD *)v80 + 2) = 0;
    }
    v70 = v85;
    --*(_DWORD *)&v11[-1].ProtocolReserved[4];
    if ( *((_DWORD *)v70 + 8) == -1073741670 )
      goto LABEL_141;
    if ( (a1->Flags & 0x40000) != 0 )
    {
      *(_QWORD *)v80 = 0LL;
      *((_DWORD *)v70 + 8) = 259;
      if ( (v11[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v11[-1].ProtocolReserved[4] == -1 )
        goto LABEL_138;
      v71 = v11;
      if ( *(_MDL **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset) )
        goto LABEL_133;
      ((void (__fastcall *)(void *, struct _NDIS_PACKET *, _QWORD))a1->DriverHandle->MiniportDriverCharacteristics.DevicePnPEventNotifyHandler)(
        a1->MiniportAdapterContext,
        v11,
        0LL);
    }
    else
    {
      if ( *(_MDL **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset) )
      {
        *(_QWORD *)v80 = 0LL;
        *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = 259;
        if ( (v11[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v11[-1].ProtocolReserved[4] != -1 )
        {
          v71 = v11;
LABEL_133:
          ndisReturnPacketToNetBufferList(&a1->Header, v71);
          goto LABEL_141;
        }
LABEL_138:
        NDIS_FREE_XFER_DATA_PACKET(v11);
        goto LABEL_141;
      }
      *((_DWORD *)v70 + 8) = 0;
    }
LABEL_141:
    v7 = v86 + 1;
    ++v81;
    ++v86;
    if ( v81 >= v89 )
      break;
    Number = v79;
    v9 = v77;
  }
  if ( v77 )
  {
    v72 = EthDB->OpenList;
    if ( EthDB->OpenList )
    {
      v73 = v79 << 12;
      do
      {
        ReceivedAPacketSlot = v72->ReceivedAPacketSlot;
        v75 = v72->FilterNextOpen;
        if ( *((_BYTE *)ReceivedAPacketSlot + v73) )
        {
          *((_BYTE *)ReceivedAPacketSlot + v73) = 0;
          v72->ReceiveCompleteHandler(v72->ProtocolBindingContext);
        }
        v72 = v75;
      }
      while ( v75 );
    }
  }
LABEL_150:
  NdisReleaseRWLock(EthDB->BindListLock, &LockState);
}
