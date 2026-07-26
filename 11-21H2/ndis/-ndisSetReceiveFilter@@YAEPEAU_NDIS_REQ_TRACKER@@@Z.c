/*
 * XREFs of ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0080514
 * Callers:
 *     ?ndisOidPreRcvFilterSetFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0080290 (-ndisOidPreRcvFilterSetFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0022160 (NdisConvertNtStatusToNdisStatus.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0025C84 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0026928 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002F194 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C0056858 (WPP_RECORDER_SF_qdL_ea_1C0056858.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0070B7C (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisAddReceiveFilterToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1C007DE78 (-ndisAddReceiveFilterToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z.c)
 *     ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C007E87C (-ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C007EA60 (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008D994 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisSetReceiveFilter(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_OID_REQUEST *v1; // rbp
  struct _NDIS_MINIPORT_BLOCK *v2; // rdi
  char v4; // si
  __int64 v5; // r13
  unsigned int *InformationBuffer; // r14
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // r15
  struct _NDIS_VPORT_BLOCK *v8; // r12
  struct _NDIS_OID_REQUEST *v9; // rcx
  bool v10; // cf
  int v11; // edx
  __int64 v12; // rbp
  char v13; // r14
  char v14; // al
  _NDIS_OPEN_BLOCK *OidSourceHandle; // rax
  struct _NDIS_MINIPORT_BLOCK *v16; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // rax
  __int64 v19; // rax
  unsigned int v20; // ebp
  __int64 v21; // rcx
  unsigned int v22; // r14d
  unsigned __int64 v23; // rcx
  __int64 Pool2; // rax
  unsigned int *v25; // rbp
  size_t v26; // r8
  char *v27; // rdx
  __int64 v28; // r8
  unsigned int *v29; // r9
  unsigned int v30; // edx
  KIRQL v31; // dl
  KSPIN_LOCK *p_Lock; // r14
  unsigned int v33; // eax
  unsigned __int8 *AllocatedReceiveFilterIndices; // rbp
  size_t AllocatedReceiveFilterIndicesLength; // r13
  __int64 v36; // rcx
  unsigned __int8 *v37; // rax
  int v38; // r9d
  __int64 v39; // rax
  _BYTE *v40; // r14
  __int64 v41; // r8
  int v42; // eax
  int v43; // ecx
  int v44; // edx
  int v45; // r9d
  size_t v46; // r12
  _BYTE *v47; // r13
  unsigned int v48; // eax
  int v49; // eax
  KIRQL v50; // dl
  $3484372124D9A3F19503CD0C8B2AC869 *v51; // rcx
  __int64 v52; // rdx
  _LIST_ENTRY *p_QueueLink; // rax
  _LIST_ENTRY *p_FilterList; // rax
  _LIST_ENTRY *Flink; // rcx
  struct _NDIS_NIC_SWITCH_BLOCK *NicSwitch; // rax
  KIRQL v57; // dl
  int v59; // [rsp+40h] [rbp-78h]
  unsigned int v60; // [rsp+44h] [rbp-74h]
  unsigned int Size; // [rsp+48h] [rbp-70h]
  _NDIS_OPEN_BLOCK *v62; // [rsp+50h] [rbp-68h]
  struct _NDIS_VPORT_BLOCK *v63; // [rsp+58h] [rbp-60h]
  unsigned int *Src; // [rsp+60h] [rbp-58h]
  struct _NDIS_RECEIVE_FILTER_BLOCK *v65; // [rsp+68h] [rbp-50h]
  char v66; // [rsp+C0h] [rbp+8h]
  char v67; // [rsp+C8h] [rbp+10h]
  KIRQL NewIrql; // [rsp+D8h] [rbp+20h] BYREF

  v1 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = 1;
  v62 = 0LL;
  v5 = 0LL;
  v59 = 0;
  InformationBuffer = (unsigned int *)v1->DATA.QUERY_INFORMATION.InformationBuffer;
  ReceiveQueueByQueueId = 0LL;
  Src = InformationBuffer;
  v8 = 0LL;
  NewIrql = 0;
  v66 = 0;
  v67 = 0;
  v63 = 0LL;
  v60 = 0;
  v9 = v1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x14u,
      (struct _GUID *)&WPP_a095d03b818b3b9702993c77529453c6_Traceguids,
      v2);
    v9 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  }
  v10 = *((_BYTE *)InformationBuffer + 1) < 2u;
  if ( *((_BYTE *)InformationBuffer + 1) >= 2u )
    v60 = InformationBuffer[10];
  *((_DWORD *)a1 + 10) = -1073741637;
  v9->DATA.METHOD_INFORMATION.BytesRead = v10 ? 36 : 44;
  Size = v10 ? 36 : 44;
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
  if ( !ndisReferenceMiniport(v2, 0x46u) )
  {
    *((_DWORD *)a1 + 10) = -1073676286;
    v12 = 0LL;
    v13 = 0;
    v14 = 0;
    goto LABEL_24;
  }
  OidSourceHandle = (_NDIS_OPEN_BLOCK *)ndisGetOidSourceHandle(v1);
  if ( OidSourceHandle && OidSourceHandle->Header.Type == 18 )
  {
    v62 = OidSourceHandle;
    if ( !ndisReferenceOpenByHandle((__int64)OidSourceHandle, 0xBu) )
    {
      *((_DWORD *)a1 + 10) = -1073676286;
      v13 = 0;
      v14 = 0;
LABEL_22:
      v12 = (__int64)v62;
LABEL_23:
      LOBYTE(v8) = 1;
      goto LABEL_24;
    }
    v66 = 1;
  }
  if ( v2->PFBlock
    && (ndisIovNicSwitchWithoutIovSupported(v2)
     || (SriovCurrentCapabilities = v2->SriovCurrentCapabilities) != 0LL
     && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3) )
  {
    if ( InformationBuffer[3] )
    {
LABEL_17:
      *((_DWORD *)a1 + 10) = -1073741811;
      v14 = 0;
LABEL_21:
      v13 = v66;
      goto LABEL_22;
    }
    VPortByVPortId = ndisIovFindVPortByVPortId(v16, v60);
    v63 = VPortByVPortId;
    v8 = VPortByVPortId;
    if ( !VPortByVPortId )
    {
      *((_DWORD *)a1 + 10) = -1073741811;
LABEL_20:
      v14 = 0;
      goto LABEL_21;
    }
    if ( v60 )
    {
      v12 = (__int64)v62;
      if ( VPortByVPortId->Open != v62 )
      {
        v13 = v66;
        v14 = 0;
        *((_DWORD *)a1 + 10) = -1073741811;
        goto LABEL_23;
      }
    }
  }
  else if ( v60 )
  {
    goto LABEL_17;
  }
  v19 = InformationBuffer[6];
  v20 = -1;
  v21 = InformationBuffer[7];
  v22 = -1;
  v23 = v19 * v21;
  if ( v23 <= 0xFFFFFFFF )
    v22 = v23;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v23 > 0xFFFFFFFF ? 0xC0000095 : 0) )
    goto LABEL_20;
  if ( v22 + 184 >= 0xB8 )
    v20 = v22 + 184;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v22 >= 0xFFFFFF48 ? 0xC0000095 : 0) )
    goto LABEL_20;
  Pool2 = ExAllocatePool2(64LL, v20, 1718764622);
  v65 = (struct _NDIS_RECEIVE_FILTER_BLOCK *)Pool2;
  v5 = Pool2;
  if ( !Pool2 )
  {
    v14 = 0;
    goto LABEL_21;
  }
  *(_DWORD *)(Pool2 + 48) = 0;
  v25 = Src;
  *(_DWORD *)(Pool2 + 80) = 1;
  *(_QWORD *)(Pool2 + 56) = v2;
  *(_QWORD *)(Pool2 + 64) = v62;
  memmove((void *)(Pool2 + 132), Src, Size);
  v26 = v25[6] * v25[7];
  v27 = (char *)v25 + v25[5];
  *(_DWORD *)(v5 + 152) = 184;
  memmove((void *)(v5 + 184), v27, v26);
  *(_QWORD *)(v5 + 176) = v8;
  *(_QWORD *)(v5 + 40) = v5 + 32;
  *(_QWORD *)(v5 + 32) = v5 + 32;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v2, &NewIrql);
  v30 = Src[3];
  if ( v30 )
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v2, v30, v28, v29);
  else
    ReceiveQueueByQueueId = (struct _NDIS_MINIPORT_BLOCK *)v2->DefaultReceiveQueue;
  if ( ReceiveQueueByQueueId )
  {
    ++ReceiveQueueByQueueId->PcwDatapathCycleMask;
    v67 = 1;
  }
  v31 = NewIrql;
  p_Lock = &v2->Lock;
  v2->MiniportThread = 0LL;
  KeReleaseSpinLock(&v2->Lock, v31);
  if ( !ReceiveQueueByQueueId )
  {
    *((_DWORD *)a1 + 10) = -1073741811;
LABEL_51:
    v14 = v67;
    goto LABEL_21;
  }
  v12 = (__int64)v62;
  if ( Src[3] )
  {
    if ( v62 )
    {
      if ( v62 != *(_NDIS_OPEN_BLOCK **)&ReceiveQueueByQueueId->ShortRef.ReferenceCount )
      {
        *((_DWORD *)a1 + 10) = -1073741811;
LABEL_56:
        v13 = v66;
        v14 = v67;
        goto LABEL_23;
      }
    }
    else if ( LODWORD(ReceiveQueueByQueueId->PacketList.Blink) == 1 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
      goto LABEL_56;
    }
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v2, &NewIrql);
  v33 = v2->NumReceiveFilters + 1;
  *(_QWORD *)(v5 + 72) = ReceiveQueueByQueueId;
  if ( v33 > 0x5555555 )
  {
    v2->MiniportThread = 0LL;
    KeReleaseSpinLock(&v2->Lock, NewIrql);
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_56;
  }
  AllocatedReceiveFilterIndices = v2->AllocatedReceiveFilterIndices;
  AllocatedReceiveFilterIndicesLength = v2->AllocatedReceiveFilterIndicesLength;
  if ( AllocatedReceiveFilterIndices && (v36 = 0LL, (_DWORD)AllocatedReceiveFilterIndicesLength) )
  {
    v37 = v2->AllocatedReceiveFilterIndices;
    v38 = 0;
    while ( *v37 == 0xFF )
    {
      v38 += 8;
      v36 = (unsigned int)(v36 + 1);
      ++v37;
      v59 = v38;
      if ( (unsigned int)v36 >= (unsigned int)AllocatedReceiveFilterIndicesLength )
        goto LABEL_66;
    }
    v41 = (unsigned int)v36;
    v42 = 1;
    v43 = AllocatedReceiveFilterIndices[v36];
    v44 = 0;
    while ( (v43 & v42) != 0 )
    {
      v42 *= 2;
      if ( (unsigned int)++v44 >= 8 )
        goto LABEL_66;
    }
    v45 = v44 + v38;
    AllocatedReceiveFilterIndices[v41] = v43 | v42;
    v59 = v45;
  }
  else
  {
LABEL_66:
    v39 = ExAllocatePool2(66LL, (unsigned int)(AllocatedReceiveFilterIndicesLength + 64), 1970357326);
    v40 = (_BYTE *)v39;
    if ( !v39 )
    {
      v2->MiniportThread = 0LL;
      KeReleaseSpinLock(&v2->Lock, NewIrql);
      v5 = (__int64)v65;
      *((_DWORD *)a1 + 10) = -1073741670;
      goto LABEL_51;
    }
    v46 = AllocatedReceiveFilterIndicesLength;
    v47 = (_BYTE *)(v39 + AllocatedReceiveFilterIndicesLength);
    memset(v47, 0, 0x40uLL);
    if ( AllocatedReceiveFilterIndices )
    {
      memmove(v40, AllocatedReceiveFilterIndices, v46);
      *v47 = 1;
      ExFreePoolWithTag(AllocatedReceiveFilterIndices, 0);
      v45 = v59;
    }
    else
    {
      *v40 = 3;
      v45 = 1;
      v59 = 1;
    }
    v48 = v46 + 64;
    v2->AllocatedReceiveFilterIndices = v40;
    v8 = v63;
    p_Lock = &v2->Lock;
    v2->AllocatedReceiveFilterIndicesLength = v48;
  }
  v5 = (__int64)v65;
  v65->FilterParameters.FilterId = v45;
  Src[4] = v45;
  v65->FilterId = v45;
  v49 = ndisAddReceiveFilterToList(v2, v65);
  *((_DWORD *)a1 + 10) = v49;
  if ( v49 )
  {
    v50 = NewIrql;
    v2->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v50);
    goto LABEL_51;
  }
  ++HIDWORD(ReceiveQueueByQueueId->Reserved29);
  v51 = &ReceiveQueueByQueueId->32;
  v52 = *(_QWORD *)&ReceiveQueueByQueueId->Reserved4.Length;
  p_QueueLink = &v65->QueueLink;
  if ( *(struct _NDIS_MINIPORT_BLOCK **)(v52 + 8) != (struct _NDIS_MINIPORT_BLOCK *)&ReceiveQueueByQueueId->32 )
    goto LABEL_86;
  p_QueueLink->Flink = (_LIST_ENTRY *)v52;
  v65->QueueLink.Blink = (_LIST_ENTRY *)v51;
  *(_QWORD *)(v52 + 8) = p_QueueLink;
  *(_QWORD *)&v51->Reserved4.Length = p_QueueLink;
  if ( v8 )
  {
    ++v8->NumFilters;
    p_FilterList = &v8->FilterList;
    Flink = v8->FilterList.Flink;
    if ( Flink->Blink == &v8->FilterList )
    {
      v65->VPortLink.Blink = p_FilterList;
      v65->VPortLink.Flink = Flink;
      Flink->Blink = &v65->VPortLink;
      p_FilterList->Flink = &v65->VPortLink;
      NicSwitch = v8->NicSwitch;
      if ( v60 )
        ++*((_DWORD *)NicSwitch + 164);
      else
        ++*((_DWORD *)NicSwitch + 163);
      goto LABEL_85;
    }
LABEL_86:
    __fastfail(3u);
  }
LABEL_85:
  v57 = NewIrql;
  v2->MiniportThread = 0LL;
  KeReleaseSpinLock(p_Lock, v57);
  v14 = 0;
  LOBYTE(v8) = 0;
  v13 = 0;
  v4 = 0;
  v12 = (__int64)v62;
LABEL_24:
  if ( *((_DWORD *)a1 + 10) )
  {
    if ( v14 )
      ndisDereferenceReceiveQueue(ReceiveQueueByQueueId);
    if ( v13 )
      ndisMDereferenceOpenUnlocked(v12, 0xBu);
    if ( (_BYTE)v8 )
      ndisDereferenceMiniport(v2, 0x46u);
    if ( v5 )
      ExFreePoolWithTag((PVOID)v5, 0);
  }
  else
  {
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = Size;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      0x19u,
      0x15u,
      (struct _GUID *)&WPP_a095d03b818b3b9702993c77529453c6_Traceguids,
      (char)v2,
      *((_DWORD *)a1 + 10),
      v59);
  return v4;
}
