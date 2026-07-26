/*
 * XREFs of NdisAllocateCloneNetBufferList @ 0x1C0004450
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocateNetBufferList @ 0x1C0003CA0 (NdisAllocateNetBufferList.c)
 *     ndisPplLazyInitializeLookaside @ 0x1C000439C (ndisPplLazyInitializeLookaside.c)
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0004980 (--1KAcquireSpinLock@@QEAA@XZ.c)
 *     ndisAllocateFromNPagedPool @ 0x1C00049B0 (ndisAllocateFromNPagedPool.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0013560 (NdisFreeCloneNetBufferList.c)
 *     NdisAllocateNetBuffer @ 0x1C00279F0 (NdisAllocateNetBuffer.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C005DBE0 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00AE8FC (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateCloneNetBufferList(
        PNET_BUFFER_LIST OriginalNetBufferList,
        NDIS_HANDLE NetBufferListPoolHandle,
        NDIS_HANDLE NetBufferPoolHandle,
        ULONG AllocateCloneFlags)
{
  unsigned __int64 v4; // rbp
  NDIS_HANDLE v5; // rbx
  char *v6; // rsi
  PNET_BUFFER_LIST v7; // r12
  int v8; // eax
  unsigned int Number; // ebx
  unsigned int v10; // r13d
  bool v11; // zf
  unsigned __int64 v12; // rax
  char *v13; // r15
  _SLIST_HEADER *v14; // rcx
  struct _NET_BUFFER_LIST *NetBufferList; // rdi
  __int16 v16; // bx
  int v17; // eax
  const struct _EVENT_DESCRIPTOR *DataOffset; // rdx
  PNET_BUFFER FirstNetBuffer; // r15
  _NET_BUFFER *Alignment; // rbx
  void *v21; // rsi
  _MDL *MdlChain; // rax
  ULONG DataLength; // r13d
  unsigned int ByteCount; // esi
  ULONG v25; // esi
  _MDL *v26; // r12
  char *v27; // rcx
  struct _MDL *Mdl; // rax
  ULONG v29; // r13d
  unsigned __int64 v30; // rax
  struct _MDL *Next; // rsi
  ULONG v33; // eax
  ULONG v34; // ecx
  char *v35; // r10
  struct _MDL *v36; // rax
  struct _MDL *v37; // r15
  PSLIST_ENTRY v38; // rax
  SIZE_T v39; // rdx
  ULONG v40; // r8d
  POOL_TYPE v41; // ecx
  struct _NET_BUFFER_LIST *v42; // rax
  KIRQL v43; // al
  char **v44; // r8
  void ***v45; // rcx
  void **v46; // rdx
  KIRQL v47; // al
  __int64 v48; // r8
  _SLIST_HEADER *v49; // rcx
  __int64 v50; // rax
  PNET_BUFFER NetBuffer; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int8 Irp; // [rsp+20h] [rbp-60h]
  const struct _GUID *v55; // [rsp+28h] [rbp-58h]
  char v56; // [rsp+80h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(v4 + 16) = AllocateCloneFlags;
  v5 = NetBufferPoolHandle;
  *(_QWORD *)(v4 + 64) = NetBufferPoolHandle;
  v6 = (char *)NetBufferListPoolHandle;
  *(_QWORD *)(v4 + 128) = OriginalNetBufferList;
  v7 = OriginalNetBufferList;
  *(_BYTE *)v4 = (AllocateCloneFlags & 2) != 0;
  if ( !NetBufferListPoolHandle )
    v6 = (char *)ndisNetBufferListPool;
  if ( !NetBufferPoolHandle )
  {
    v5 = ndisNetBufferPool;
    *(_QWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ndisNetBufferPool;
  }
  v8 = *((_DWORD *)v6 + 15);
  if ( (v8 & 1) != 0 )
  {
    if ( (v8 & 5) != 1 )
    {
      DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", v6);
      return 0LL;
    }
    Number = KeGetPcr()->Prcb.Number;
    v10 = 1;
    v11 = ndisMaxNumberOfProcessors == 1;
    *(_DWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = Number;
    if ( !v11 )
    {
      v12 = (unsigned __int64)Number << 8;
      v13 = &v6[v12 + 384];
      if ( !v13[216] )
        ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)&v6[v12 + 384], (__int64)(v6 + 128));
      v14 = (_SLIST_HEADER *)*((_QWORD *)v13 + 24);
      ++*((_DWORD *)v13 + 5);
      NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(v14);
      if ( NetBufferList )
        goto LABEL_13;
      if ( ExQueryDepthSList(*((PSLIST_HEADER *)v13 + 25)) >= 0xAu )
      {
        *(_QWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = v13 + 208;
        v47 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13 + 26);
        v48 = *((_QWORD *)v13 + 24);
        *((_QWORD *)v13 + 24) = *((_QWORD *)v13 + 25);
        *((_QWORD *)v13 + 25) = v48;
        KeReleaseSpinLock((PKSPIN_LOCK)v13 + 26, v47);
        v49 = (_SLIST_HEADER *)*((_QWORD *)v13 + 24);
        *(_BYTE *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = -1;
        NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(v49);
        KAcquireSpinLock::~KAcquireSpinLock((KAcquireSpinLock *)(v4 + 160));
        if ( NetBufferList )
          goto LABEL_13;
        Number = *(_DWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      }
      ++*((_DWORD *)v13 + 6);
    }
    ++*((_DWORD *)v6 + 37);
    v38 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v6 + 8);
    NetBufferList = (struct _NET_BUFFER_LIST *)v38;
    if ( v38 )
    {
      *((_DWORD *)&v38[-1].Next + 2) = Number;
    }
    else
    {
      v39 = *((unsigned int *)v6 + 43);
      v40 = *((_DWORD *)v6 + 42);
      v41 = *((_DWORD *)v6 + 41);
      ++*((_DWORD *)v6 + 38);
      v42 = (struct _NET_BUFFER_LIST *)ndisAllocateFromNPagedPool(v41, v39, v40, (PLOOKASIDE_LIST_EX)(v6 + 128));
      NetBufferList = v42;
      if ( !v42 )
      {
        NetBufferList = 0LL;
LABEL_20:
        if ( !NetBufferList )
          return NetBufferList;
        FirstNetBuffer = NetBufferList->FirstNetBuffer;
        goto LABEL_22;
      }
      v42[-1].NetBufferListInfo[26] = v6;
      *(_QWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = v6 + 8;
      v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 1);
      v44 = (char **)*((_QWORD *)v6 + 2);
      v45 = (void ***)(v6 + 16);
      v46 = &NetBufferList[-1].NetBufferListInfo[27];
      if ( v44[1] != v6 + 16 )
        __fastfail(3u);
      v46[1] = v45;
      *v46 = v44;
      v44[1] = (char *)v46;
      *v45 = v46;
      KeReleaseSpinLock((PKSPIN_LOCK)v6 + 1, v43);
      *(_BYTE *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = -1;
      KAcquireSpinLock::~KAcquireSpinLock((KAcquireSpinLock *)(v4 + 144));
      v10 = 0;
      LODWORD(NetBufferList[-1].NetBufferListInfo[29]) = Number;
    }
LABEL_13:
    v16 = WORD1(NetBufferList->NdisReserved[1]);
    memset(NetBufferList, 0, 8 * (v10 ^ 1LL) + 368);
    NetBufferList->NdisPoolHandle = v6;
    NetBufferList->Flags = 256;
    if ( v10 )
      WORD1(NetBufferList->NdisReserved[1]) = v16;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      ndisGenerateNetBufferListCorrelationIds(NetBufferList, 1u);
    LOBYTE(NetBufferList->NetBufferListInfo[7]) = v6[32];
    v17 = *((_DWORD *)v6 + 15);
    if ( (v17 & 2) != 0 )
    {
      v11 = (v17 & 1) == 0;
      v50 = 560LL;
      if ( v11 )
        v50 = 384LL;
      NetBufferList->Context = (_NET_BUFFER_LIST_CONTEXT *)((char *)NetBufferList + v50);
      *(unsigned __int64 *)((char *)&NetBufferList->Link.Alignment + v50) = 0LL;
      NetBufferList->Context->Size = *((_WORD *)v6 + 17);
      NetBufferList->Context->Offset = *((_WORD *)v6 + 17);
    }
    memset(&NetBufferList[1], 0, 0xB0uLL);
    NetBufferList[1].NdisPoolHandle = 0LL;
    *((_DWORD *)&NetBufferList[1].NdisPoolHandle + 2) = 0;
    LODWORD(NetBufferList[1].ParentNetBufferList) = 0;
    NetBufferList[1].NdisReserved[1] = v6;
    NetBufferList[1].Link.Region = 0LL;
    LODWORD(NetBufferList[1].Context) = 0;
    NetBufferList->Link.Region = (unsigned __int64)&NetBufferList[1];
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(NetBufferList, 0LL, 3u, 0LL, 0);
    goto LABEL_20;
  }
  NetBufferList = NdisAllocateNetBufferList(v6, 0, 0);
  if ( !NetBufferList )
    return NetBufferList;
  NetBuffer = NdisAllocateNetBuffer(v5, 0LL, 0, 0LL);
  FirstNetBuffer = NetBuffer;
  if ( !NetBuffer )
    goto LABEL_71;
  NetBufferList->Link.Region = (unsigned __int64)NetBuffer;
LABEL_22:
  Alignment = v7->FirstNetBuffer;
  if ( !Alignment )
  {
LABEL_35:
    NetBufferList->SourceHandle = v7->SourceHandle;
    NetBufferList->NetBufferListInfo[16] = v7->NetBufferListInfo[16];
    v30 = (unsigned __int64)v7->NetBufferListInfo[10];
    if ( (v30 & 1) == 0 && (v30 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      Irp = 1;
      WfpNblInfoClone(v7, NetBufferList, 0LL, 0LL);
    }
    if ( byte_1C00EC210 )
    {
      NetBufferList->NetBufferListInfo[13] = v7->NetBufferListInfo[13];
    }
    else if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      v52 = (__int64)v7->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v52;
      v53 = (__int64)NetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      *(_OWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_OWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                       + 0x80);
      *(_QWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v53;
      LODWORD(v53) = Microsoft_Windows_Networking_CorrelationEnabled;
      *(_QWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
      *(_OWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *(_OWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                       + 0x40);
      if ( (_DWORD)v53 )
        EtwEx_tidActivityInfoTransfer(
          0x7FFFFFFFFFFFFFFFuLL,
          DataOffset,
          (const struct _GUID *)(v4 + 144),
          (const struct _GUID *)(v4 + 160),
          Irp,
          v55,
          1u);
    }
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(NetBufferList, 0LL, 5u, v7, 0);
    return NetBufferList;
  }
  v21 = *(void **)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  while ( 1 )
  {
    MdlChain = Alignment->MdlChain;
    DataLength = Alignment->DataLength;
    DataOffset = (const struct _EVENT_DESCRIPTOR *)Alignment->DataOffset;
    *(_QWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MdlChain;
    *(_QWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = FirstNetBuffer;
    if ( *(_BYTE *)v4 )
    {
      FirstNetBuffer->MdlChain = MdlChain;
      FirstNetBuffer->Link.Region = Alignment->Link.Region;
      FirstNetBuffer->DataLength = Alignment->DataLength;
      FirstNetBuffer->DataOffset = (unsigned int)DataOffset;
      FirstNetBuffer->CurrentMdlOffset = Alignment->CurrentMdlOffset;
      Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
      if ( !Alignment )
        goto LABEL_34;
      FirstNetBuffer = NdisAllocateNetBuffer(v21, 0LL, 0, 0LL);
      if ( !FirstNetBuffer )
        goto LABEL_71;
      goto LABEL_75;
    }
    if ( MdlChain )
      break;
LABEL_73:
    Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
    if ( !Alignment )
    {
LABEL_34:
      v7 = *(PNET_BUFFER_LIST *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
      goto LABEL_35;
    }
    FirstNetBuffer = NdisAllocateNetBuffer(v21, 0LL, 0, 0LL);
    if ( !FirstNetBuffer )
      goto LABEL_71;
LABEL_75:
    **(_QWORD **)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = FirstNetBuffer;
  }
  while ( 1 )
  {
    ByteCount = MdlChain->ByteCount;
    if ( (unsigned int)DataOffset < ByteCount )
      break;
    MdlChain = MdlChain->Next;
    DataOffset = (const struct _EVENT_DESCRIPTOR *)((unsigned int)DataOffset - ByteCount);
    *(_QWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MdlChain;
    if ( !MdlChain )
    {
      v21 = *(void **)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      goto LABEL_73;
    }
  }
  v25 = ByteCount - (_DWORD)DataOffset;
  if ( v25 >= DataLength )
    v25 = DataLength;
  v26 = 0LL;
  if ( v25 )
  {
    v27 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + (unsigned int)DataOffset;
    *(_QWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v27;
    Mdl = IoAllocateMdl(v27, v25, 0, 0, 0LL);
    v26 = Mdl;
    if ( !Mdl )
      goto LABEL_71;
    IoBuildPartialMdl(
      *(PMDL *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
      Mdl,
      *(PVOID *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90),
      v25);
    MdlChain = *(_MDL **)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v26->Next = 0LL;
  }
  FirstNetBuffer->Link.Region = (unsigned __int64)v26;
  FirstNetBuffer->MdlChain = v26;
  FirstNetBuffer->DataLength = Alignment->DataLength;
  FirstNetBuffer->CurrentMdlOffset = 0;
  FirstNetBuffer->DataOffset = 0;
  v29 = DataLength - v25;
  if ( !v29 || (Next = MdlChain->Next) == 0LL )
  {
LABEL_33:
    Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
    if ( !Alignment )
      goto LABEL_34;
    v21 = *(void **)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    FirstNetBuffer = NdisAllocateNetBuffer(v21, 0LL, 0, 0LL);
    if ( !FirstNetBuffer )
      goto LABEL_71;
    goto LABEL_75;
  }
  while ( 1 )
  {
    v33 = Next->ByteCount;
    v34 = v29;
    v35 = (char *)Next->StartVa + Next->ByteOffset;
    *(_QWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v35;
    if ( v33 <= v29 )
      v34 = v33;
    *(_DWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v34;
    v36 = IoAllocateMdl(v35, v34, 0, 0, 0LL);
    v37 = v36;
    if ( !v36 )
      break;
    IoBuildPartialMdl(
      Next,
      v36,
      *(PVOID *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90),
      *(_DWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    v26->Next = v37;
    v26 = v37;
    v37->Next = 0LL;
    v29 -= *(_DWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v29 )
    {
      Next = Next->Next;
      if ( Next )
        continue;
    }
    goto LABEL_33;
  }
LABEL_71:
  NdisFreeCloneNetBufferList(NetBufferList, *(_DWORD *)(((unsigned __int64)&v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
  return 0LL;
}
