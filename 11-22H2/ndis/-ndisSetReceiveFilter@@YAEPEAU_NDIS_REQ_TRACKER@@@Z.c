/*
 * XREFs of ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0085A5C
 * Callers:
 *     ?ndisOidPreRcvFilterSetFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00857D0 (-ndisOidPreRcvFilterSetFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C001C000 (NdisConvertNtStatusToNdisStatus.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00237F0 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0024C34 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002BFC4 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DC0A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C005BB74 (WPP_RECORDER_SF_qdL_ea_1C005BB74.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075FA0 (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisAddReceiveFilterToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1C00833B8 (-ndisAddReceiveFilterToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z.c)
 *     ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C0083DA8 (-ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C0083F8C (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 */

char __fastcall ndisSetReceiveFilter(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_OID_REQUEST *v1; // r14
  struct _NDIS_MINIPORT_BLOCK *v2; // rdi
  char v4; // si
  struct _NDIS_RECEIVE_FILTER_BLOCK *v5; // r13
  unsigned int *InformationBuffer; // r15
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // rbp
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // r12
  struct _NDIS_OID_REQUEST *v9; // rcx
  bool v10; // cf
  int v11; // edx
  char v12; // r14
  char v13; // r15
  _BYTE *OidSourceHandle; // rax
  struct _NDIS_MINIPORT_BLOCK *v15; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  char v17; // al
  bool v18; // zf
  __int64 v19; // rax
  unsigned int v20; // r14d
  __int64 v21; // rcx
  unsigned int v22; // r15d
  unsigned __int64 v23; // rcx
  __int64 Pool2; // rax
  unsigned int *v25; // r15
  size_t v26; // r8
  char *v27; // rdx
  __int64 v28; // r8
  unsigned int *v29; // r9
  unsigned int v30; // edx
  KIRQL v31; // dl
  KSPIN_LOCK *p_Lock; // r14
  unsigned int v33; // eax
  KSPIN_LOCK *v34; // rcx
  KIRQL v35; // dl
  unsigned __int8 *AllocatedReceiveFilterIndices; // r15
  unsigned int AllocatedReceiveFilterIndicesLength; // r8d
  __int64 v38; // rcx
  unsigned __int8 *v39; // rax
  int v40; // r10d
  _BYTE *v41; // r14
  __int64 v42; // r9
  int v43; // eax
  int v44; // ecx
  int v45; // edx
  int v46; // r10d
  int v47; // eax
  KIRQL v48; // dl
  $2FD635346711C53BB9C66C447095EC18 *v49; // rcx
  __int64 v50; // rdx
  _LIST_ENTRY *p_QueueLink; // rax
  _LIST_ENTRY *p_FilterList; // rax
  _LIST_ENTRY *Flink; // rcx
  struct _NDIS_NIC_SWITCH_BLOCK *NicSwitch; // rax
  KIRQL v55; // dl
  int v57; // [rsp+40h] [rbp-78h]
  unsigned int v58; // [rsp+44h] [rbp-74h]
  unsigned int Size; // [rsp+48h] [rbp-70h]
  unsigned int Size_4; // [rsp+4Ch] [rbp-6Ch]
  __int64 v61; // [rsp+50h] [rbp-68h]
  unsigned int *Src; // [rsp+58h] [rbp-60h]
  char v63; // [rsp+C0h] [rbp+8h]
  char v64; // [rsp+D0h] [rbp+18h]
  KIRQL NewIrql; // [rsp+D8h] [rbp+20h] BYREF

  v1 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = 1;
  v61 = 0LL;
  v5 = 0LL;
  v57 = 0;
  InformationBuffer = (unsigned int *)v1->DATA.QUERY_INFORMATION.InformationBuffer;
  ReceiveQueueByQueueId = 0LL;
  Src = InformationBuffer;
  VPortByVPortId = 0LL;
  NewIrql = 0;
  v63 = 0;
  v64 = 0;
  v58 = 0;
  v9 = v1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x14u,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      v2);
    v9 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  }
  v10 = *((_BYTE *)InformationBuffer + 1) < 2u;
  if ( *((_BYTE *)InformationBuffer + 1) >= 2u )
    v58 = InformationBuffer[10];
  *((_DWORD *)a1 + 10) = -1073741637;
  v9->DATA.METHOD_INFORMATION.BytesRead = v10 ? 36 : 44;
  Size_4 = v10 ? 36 : 44;
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
  if ( !ndisReferenceMiniport(v2, 0x46u) )
  {
    *((_DWORD *)a1 + 10) = -1073676286;
    v12 = 0;
    v13 = 0;
LABEL_20:
    v17 = 0;
    goto LABEL_21;
  }
  OidSourceHandle = ndisGetOidSourceHandle(v1);
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v61 = (__int64)OidSourceHandle;
    if ( !ndisReferenceOpenByHandle((__int64)OidSourceHandle, 0xBu) )
    {
      *((_DWORD *)a1 + 10) = -1073676286;
      v12 = 0;
LABEL_19:
      v13 = 1;
      goto LABEL_20;
    }
    v63 = 1;
  }
  if ( v2->PFBlock
    && (ndisIovNicSwitchWithoutIovSupported(v2)
     || (SriovCurrentCapabilities = v2->SriovCurrentCapabilities) != 0LL
     && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3) )
  {
    if ( InformationBuffer[3] )
      goto LABEL_17;
    VPortByVPortId = ndisIovFindVPortByVPortId(v15, v58);
    if ( !VPortByVPortId )
      goto LABEL_17;
    if ( !v58 )
      goto LABEL_34;
    v18 = VPortByVPortId->Open == (_NDIS_OPEN_BLOCK *)v61;
  }
  else
  {
    v18 = v58 == 0;
  }
  if ( !v18 )
  {
LABEL_17:
    *((_DWORD *)a1 + 10) = -1073741811;
LABEL_18:
    v12 = v63;
    goto LABEL_19;
  }
LABEL_34:
  v19 = InformationBuffer[6];
  v20 = -1;
  v21 = InformationBuffer[7];
  v22 = -1;
  v23 = v19 * v21;
  if ( v23 <= 0xFFFFFFFF )
    v22 = v23;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v23 > 0xFFFFFFFF ? 0xC0000095 : 0) )
    goto LABEL_18;
  if ( v22 < 0xFFFFFF48 )
    v20 = v22 + 184;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v22 >= 0xFFFFFF48 ? 0xC0000095 : 0) )
    goto LABEL_18;
  Pool2 = ExAllocatePool2(64LL, v20, 1718764622);
  v5 = (struct _NDIS_RECEIVE_FILTER_BLOCK *)Pool2;
  if ( !Pool2 )
    goto LABEL_18;
  *(_DWORD *)(Pool2 + 48) = 0;
  v25 = Src;
  *(_DWORD *)(Pool2 + 80) = 1;
  *(_QWORD *)(Pool2 + 56) = v2;
  *(_QWORD *)(Pool2 + 64) = v61;
  memmove((void *)(Pool2 + 132), Src, Size_4);
  v26 = v25[7] * v25[6];
  v27 = (char *)v25 + v25[5];
  v5->FilterParameters.FieldParametersArrayOffset = 184;
  memmove(&v5[1], v27, v26);
  v5->VPortBlock = VPortByVPortId;
  v5->VPortLink.Blink = &v5->VPortLink;
  v5->VPortLink.Flink = &v5->VPortLink;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v2, &NewIrql);
  v30 = Src[3];
  if ( v30 )
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v2, v30, v28, v29);
  else
    ReceiveQueueByQueueId = (struct _NDIS_MINIPORT_BLOCK *)v2->DefaultReceiveQueue;
  if ( ReceiveQueueByQueueId )
  {
    ++ReceiveQueueByQueueId->PcwDatapathCycleMask;
    v64 = 1;
  }
  v31 = NewIrql;
  p_Lock = &v2->Lock;
  v2->MiniportThread = 0LL;
  KeReleaseSpinLock(&v2->Lock, v31);
  if ( !ReceiveQueueByQueueId )
    goto LABEL_48;
  if ( Src[3] )
  {
    if ( v61 )
    {
      if ( v61 != *(_QWORD *)&ReceiveQueueByQueueId->ShortRef.ReferenceCount )
      {
LABEL_48:
        *((_DWORD *)a1 + 10) = -1073741811;
LABEL_49:
        v12 = v63;
        v13 = 1;
        v17 = v64;
        goto LABEL_21;
      }
    }
    else if ( LODWORD(ReceiveQueueByQueueId->PacketList.Blink) == 1 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
      goto LABEL_49;
    }
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v2, &NewIrql);
  v33 = v2->NumReceiveFilters + 1;
  v5->ReceiveQueue = (_NDIS_RECEIVE_QUEUE_BLOCK *)ReceiveQueueByQueueId;
  if ( v33 > 0x5555555 )
  {
    v34 = &v2->Lock;
LABEL_55:
    v35 = NewIrql;
    v2->MiniportThread = 0LL;
    KeReleaseSpinLock(v34, v35);
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_49;
  }
  AllocatedReceiveFilterIndices = v2->AllocatedReceiveFilterIndices;
  AllocatedReceiveFilterIndicesLength = v2->AllocatedReceiveFilterIndicesLength;
  Size = AllocatedReceiveFilterIndicesLength;
  if ( AllocatedReceiveFilterIndices && (v38 = 0LL, AllocatedReceiveFilterIndicesLength) )
  {
    v39 = v2->AllocatedReceiveFilterIndices;
    v40 = 0;
    while ( *v39 == 0xFF )
    {
      v40 += 8;
      v38 = (unsigned int)(v38 + 1);
      ++v39;
      v57 = v40;
      if ( (unsigned int)v38 >= AllocatedReceiveFilterIndicesLength )
        goto LABEL_63;
    }
    v42 = (unsigned int)v38;
    v43 = 1;
    v44 = AllocatedReceiveFilterIndices[v38];
    v45 = 0;
    while ( (v44 & v43) != 0 )
    {
      v43 *= 2;
      if ( (unsigned int)++v45 >= 8 )
        goto LABEL_63;
    }
    v46 = v45 + v40;
    AllocatedReceiveFilterIndices[v42] = v44 | v43;
    v57 = v46;
  }
  else
  {
LABEL_63:
    v41 = (_BYTE *)ExAllocatePool2(66LL, AllocatedReceiveFilterIndicesLength + 64, 1970357326);
    if ( !v41 )
    {
      v34 = &v2->Lock;
      goto LABEL_55;
    }
    memset(&v41[Size], 0, 0x40uLL);
    if ( AllocatedReceiveFilterIndices )
    {
      memmove(v41, AllocatedReceiveFilterIndices, Size);
      v41[Size] = 1;
      ExFreePoolWithTag(AllocatedReceiveFilterIndices, 0);
      v46 = v57;
    }
    else
    {
      *v41 = 3;
      v46 = 1;
      v57 = 1;
    }
    v2->AllocatedReceiveFilterIndices = v41;
    v2->AllocatedReceiveFilterIndicesLength = Size + 64;
    p_Lock = &v2->Lock;
  }
  v5->FilterParameters.FilterId = v46;
  v5->FilterId = v46;
  Src[4] = v46;
  v47 = ndisAddReceiveFilterToList(v2, v5);
  v13 = 0;
  *((_DWORD *)a1 + 10) = v47;
  if ( v47 )
  {
    v48 = NewIrql;
    v2->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v48);
    goto LABEL_49;
  }
  ++HIDWORD(ReceiveQueueByQueueId->Reserved29);
  v49 = &ReceiveQueueByQueueId->32;
  v50 = *(_QWORD *)&ReceiveQueueByQueueId->Reserved4.Length;
  p_QueueLink = &v5->QueueLink;
  if ( *(struct _NDIS_MINIPORT_BLOCK **)(v50 + 8) != (struct _NDIS_MINIPORT_BLOCK *)&ReceiveQueueByQueueId->32 )
    goto LABEL_83;
  p_QueueLink->Flink = (_LIST_ENTRY *)v50;
  v5->QueueLink.Blink = (_LIST_ENTRY *)v49;
  *(_QWORD *)(v50 + 8) = p_QueueLink;
  *(_QWORD *)&v49->Reserved4.Length = p_QueueLink;
  if ( VPortByVPortId )
  {
    ++VPortByVPortId->NumFilters;
    p_FilterList = &VPortByVPortId->FilterList;
    Flink = VPortByVPortId->FilterList.Flink;
    if ( Flink->Blink == &VPortByVPortId->FilterList )
    {
      v5->VPortLink.Blink = p_FilterList;
      v5->VPortLink.Flink = Flink;
      Flink->Blink = &v5->VPortLink;
      p_FilterList->Flink = &v5->VPortLink;
      NicSwitch = VPortByVPortId->NicSwitch;
      if ( v58 )
        ++*((_DWORD *)NicSwitch + 164);
      else
        ++*((_DWORD *)NicSwitch + 163);
      goto LABEL_82;
    }
LABEL_83:
    __fastfail(3u);
  }
LABEL_82:
  v55 = NewIrql;
  v2->MiniportThread = 0LL;
  KeReleaseSpinLock(p_Lock, v55);
  v17 = 0;
  v12 = 0;
  v4 = 0;
LABEL_21:
  if ( *((_DWORD *)a1 + 10) )
  {
    if ( v17 )
      ndisDereferenceReceiveQueue(ReceiveQueueByQueueId);
    if ( v12 )
      ndisMDereferenceOpenUnlocked(v61, 0xBu);
    if ( v13 )
      ndisDereferenceMiniport(v2, 0x46u);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
  else
  {
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = Size_4;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      0x19u,
      0x15u,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      (char)v2,
      *((_DWORD *)a1 + 10),
      v57);
  return v4;
}
