/*
 * XREFs of NdisAllocateCloneNetBufferList @ 0x1C0001180
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocateNetBuffer @ 0x1C0001740 (NdisAllocateNetBuffer.c)
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0001A30 (--1KAcquireSpinLock@@QEAA@XZ.c)
 *     NdisAllocateNetBufferList @ 0x1C0001D40 (NdisAllocateNetBufferList.c)
 *     ndisPplLazyInitializeLookaside @ 0x1C00024CC (ndisPplLazyInitializeLookaside.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0011D20 (NdisFreeCloneNetBufferList.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0062FFC (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D68 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00B47D8 (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z @ 0x1C00B4CA4 (-ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z.c)
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
  unsigned int Number; // r13d
  unsigned int v10; // ebx
  bool v11; // zf
  unsigned __int64 v12; // rax
  char *v13; // r15
  _SLIST_HEADER *v14; // rcx
  const struct _EVENT_DESCRIPTOR *DataOffset; // rdx
  struct _NET_BUFFER_LIST *NetBufferList; // rdi
  __int16 v17; // r15
  int v18; // ecx
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
  __int64 v31; // rax
  _NET_BUFFER_LIST_CONTEXT *v32; // rax
  unsigned __int64 v33; // rax
  char **Pool2; // rax
  KIRQL v35; // al
  char **v36; // r8
  void ***v37; // rdx
  void **v38; // rcx
  struct _MDL *Next; // r15
  ULONG v40; // eax
  ULONG v41; // ecx
  char *v42; // r10
  struct _MDL *v43; // rax
  struct _MDL *v44; // rsi
  KIRQL v45; // al
  __int64 v46; // r8
  _SLIST_HEADER *v47; // rcx
  PNET_BUFFER NetBuffer; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int8 Irp; // [rsp+20h] [rbp-60h]
  const struct _GUID *v52; // [rsp+28h] [rbp-58h]
  char v53; // [rsp+80h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL;
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
    *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ndisNetBufferPool;
  }
  v8 = *((_DWORD *)v6 + 11);
  if ( (v8 & 1) != 0 )
  {
    if ( (v8 & 5) != 1 )
    {
      DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", v6);
      return 0LL;
    }
    if ( (*((_DWORD *)v6 + 1) & 1) != 0 )
    {
      v10 = 0;
      NetBufferList = (struct _NET_BUFFER_LIST *)ndisPplAllocateFromSpecialPool((const struct _NDIS_POOL_HEADER *)v6);
      goto LABEL_14;
    }
    Number = KeGetPcr()->Prcb.Number;
    v10 = 1;
    v11 = ndisMaxNumberOfProcessors == 1;
    *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
    if ( !v11 )
    {
      v12 = (unsigned __int64)Number << 8;
      v13 = &v6[v12 + 384];
      if ( !v13[216] )
        ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)&v6[v12 + 384]);
      v14 = (_SLIST_HEADER *)*((_QWORD *)v13 + 24);
      ++*((_DWORD *)v13 + 5);
      NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(v14);
      if ( NetBufferList )
      {
LABEL_14:
        if ( !NetBufferList )
        {
          NetBufferList = 0LL;
LABEL_22:
          if ( !NetBufferList )
            return NetBufferList;
          FirstNetBuffer = NetBufferList->FirstNetBuffer;
          goto LABEL_24;
        }
LABEL_15:
        v17 = WORD1(NetBufferList->NdisReserved[1]);
        memset(NetBufferList, 0, 8 * (v10 ^ 1LL) + 368);
        NetBufferList->NdisPoolHandle = v6;
        NetBufferList->Flags = 256;
        if ( v10 )
          WORD1(NetBufferList->NdisReserved[1]) = v17;
        if ( Microsoft_Windows_Networking_CorrelationEnabled )
          ndisGenerateNetBufferListCorrelationIds(NetBufferList, 1u);
        LOBYTE(NetBufferList->NetBufferListInfo[7]) = v6[40];
        v18 = *((_DWORD *)v6 + 11);
        if ( (v18 & 2) != 0 )
        {
          v31 = 384LL;
          if ( (v18 & 1) != 0 )
            v31 = 560LL;
          v32 = (_NET_BUFFER_LIST_CONTEXT *)((char *)NetBufferList + v31);
          NetBufferList->Context = v32;
          v32->Next = 0LL;
          NetBufferList->Context->Size = *((_WORD *)v6 + 21);
          NetBufferList->Context->Offset = *((_WORD *)v6 + 21);
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
        goto LABEL_22;
      }
      if ( ExQueryDepthSList(*((PSLIST_HEADER *)v13 + 25)) >= 0xAu )
      {
        *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = v13 + 208;
        v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13 + 26);
        v46 = *((_QWORD *)v13 + 24);
        *((_QWORD *)v13 + 24) = *((_QWORD *)v13 + 25);
        *((_QWORD *)v13 + 25) = v46;
        KeReleaseSpinLock((PKSPIN_LOCK)v13 + 26, v45);
        v47 = (_SLIST_HEADER *)*((_QWORD *)v13 + 24);
        *(_BYTE *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = -1;
        NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(v47);
        KAcquireSpinLock::~KAcquireSpinLock((KAcquireSpinLock *)(v4 + 144));
        v10 = *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        if ( NetBufferList )
          goto LABEL_15;
      }
      ++*((_DWORD *)v13 + 6);
    }
    ++*((_DWORD *)v6 + 37);
    NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v6 + 8);
    if ( !NetBufferList )
    {
      v33 = *((unsigned int *)v6 + 43);
      ++*((_DWORD *)v6 + 38);
      DataOffset = (const struct _EVENT_DESCRIPTOR *)(v33 + 32);
      if ( v33 + 32 >= v33 && (Pool2 = (char **)ExAllocatePool2(66LL, DataOffset, *((unsigned int *)v6 + 42))) != 0LL )
      {
        NetBufferList = (struct _NET_BUFFER_LIST *)(Pool2 + 4);
        *Pool2 = 0LL;
        if ( Pool2 != (char **)-32LL )
        {
          *Pool2 = v6;
          v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 1);
          v36 = (char **)*((_QWORD *)v6 + 2);
          v37 = (void ***)(v6 + 16);
          v38 = &NetBufferList[-1].NetBufferListInfo[27];
          if ( v36[1] != v6 + 16 )
            __fastfail(3u);
          v38[1] = v37;
          *v38 = v36;
          v36[1] = (char *)v38;
          *v37 = v38;
          KeReleaseSpinLock((PKSPIN_LOCK)v6 + 1, v35);
          v10 = 0;
          goto LABEL_55;
        }
      }
      else
      {
        NetBufferList = 0LL;
      }
      v10 = 0;
      goto LABEL_14;
    }
LABEL_55:
    LODWORD(NetBufferList[-1].NetBufferListInfo[29]) = Number;
    goto LABEL_14;
  }
  NetBufferList = NdisAllocateNetBufferList(v6, 0, 0);
  if ( !NetBufferList )
    return NetBufferList;
  NetBuffer = NdisAllocateNetBuffer(v5, 0LL, 0, 0LL);
  FirstNetBuffer = NetBuffer;
  if ( !NetBuffer )
    goto LABEL_80;
  NetBufferList->Link.Region = (unsigned __int64)NetBuffer;
LABEL_24:
  Alignment = v7->FirstNetBuffer;
  if ( !Alignment )
  {
LABEL_37:
    NetBufferList->SourceHandle = v7->SourceHandle;
    NetBufferList->NetBufferListInfo[16] = v7->NetBufferListInfo[16];
    if ( ((unsigned __int64)v7->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0
      && ((__int64)v7->NetBufferListInfo[10] & 1) == 0 )
    {
      Irp = 1;
      WfpNblInfoClone(v7, NetBufferList, 0LL, 0LL);
    }
    if ( byte_1C00F5390 )
    {
      NetBufferList->NetBufferListInfo[13] = v7->NetBufferListInfo[13];
    }
    else if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      v49 = (__int64)v7->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v49;
      v50 = (__int64)NetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      *(_OWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *(_OWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                       + 0x80);
      *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v50;
      LODWORD(v50) = Microsoft_Windows_Networking_CorrelationEnabled;
      *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
      *(_OWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_OWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                       + 0x40);
      if ( (_DWORD)v50 )
        EtwEx_tidActivityInfoTransfer(
          0x7FFFFFFFFFFFFFFFuLL,
          DataOffset,
          (const struct _GUID *)(v4 + 160),
          (const struct _GUID *)(v4 + 144),
          Irp,
          v52,
          1u);
    }
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(NetBufferList, 0LL, 5u, v7, 0);
    return NetBufferList;
  }
  v21 = *(void **)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  while ( 1 )
  {
    MdlChain = Alignment->MdlChain;
    DataLength = Alignment->DataLength;
    DataOffset = (const struct _EVENT_DESCRIPTOR *)Alignment->DataOffset;
    *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MdlChain;
    *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = FirstNetBuffer;
    if ( *(_BYTE *)v4 )
    {
      FirstNetBuffer->MdlChain = MdlChain;
      FirstNetBuffer->Link.Region = Alignment->Link.Region;
      FirstNetBuffer->DataLength = Alignment->DataLength;
      FirstNetBuffer->DataOffset = (unsigned int)DataOffset;
      FirstNetBuffer->CurrentMdlOffset = Alignment->CurrentMdlOffset;
      Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
      if ( !Alignment )
        goto LABEL_36;
      FirstNetBuffer = NdisAllocateNetBuffer(v21, 0LL, 0, 0LL);
      if ( !FirstNetBuffer )
        goto LABEL_80;
      goto LABEL_84;
    }
    if ( MdlChain )
      break;
LABEL_82:
    Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
    if ( !Alignment )
    {
LABEL_36:
      v7 = *(PNET_BUFFER_LIST *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
      goto LABEL_37;
    }
    FirstNetBuffer = NdisAllocateNetBuffer(v21, 0LL, 0, 0LL);
    if ( !FirstNetBuffer )
      goto LABEL_80;
LABEL_84:
    **(_QWORD **)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = FirstNetBuffer;
  }
  while ( 1 )
  {
    ByteCount = MdlChain->ByteCount;
    if ( (unsigned int)DataOffset < ByteCount )
      break;
    MdlChain = MdlChain->Next;
    DataOffset = (const struct _EVENT_DESCRIPTOR *)((unsigned int)DataOffset - ByteCount);
    *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MdlChain;
    if ( !MdlChain )
    {
      v21 = *(void **)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      goto LABEL_82;
    }
  }
  v25 = ByteCount - (_DWORD)DataOffset;
  if ( v25 >= DataLength )
    v25 = DataLength;
  v26 = 0LL;
  if ( v25 )
  {
    v27 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + (unsigned int)DataOffset;
    *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v27;
    Mdl = IoAllocateMdl(v27, v25, 0, 0, 0LL);
    v26 = Mdl;
    if ( !Mdl )
      goto LABEL_80;
    IoBuildPartialMdl(
      *(PMDL *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
      Mdl,
      *(PVOID *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0),
      v25);
    MdlChain = *(_MDL **)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
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
LABEL_35:
    Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
    if ( !Alignment )
      goto LABEL_36;
    v21 = *(void **)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    FirstNetBuffer = NdisAllocateNetBuffer(v21, 0LL, 0, 0LL);
    if ( !FirstNetBuffer )
      goto LABEL_80;
    goto LABEL_84;
  }
  while ( 1 )
  {
    v40 = Next->ByteCount;
    v41 = v29;
    v42 = (char *)Next->StartVa + Next->ByteOffset;
    *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v42;
    if ( v40 <= v29 )
      v41 = v40;
    *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v41;
    v43 = IoAllocateMdl(v42, v41, 0, 0, 0LL);
    v44 = v43;
    if ( !v43 )
      break;
    IoBuildPartialMdl(
      Next,
      v43,
      *(PVOID *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0),
      *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    v26->Next = v44;
    v26 = v44;
    v44->Next = 0LL;
    v29 -= *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v29 )
    {
      Next = Next->Next;
      if ( Next )
        continue;
    }
    goto LABEL_35;
  }
LABEL_80:
  NdisFreeCloneNetBufferList(NetBufferList, *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
  return 0LL;
}
