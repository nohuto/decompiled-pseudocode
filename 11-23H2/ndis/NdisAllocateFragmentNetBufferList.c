/*
 * XREFs of NdisAllocateFragmentNetBufferList @ 0x1C00B3D50
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocateNetBuffer @ 0x1C0001740 (NdisAllocateNetBuffer.c)
 *     NdisAllocateNetBufferList @ 0x1C0001D40 (NdisAllocateNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0002160 (NdisAllocateNetBufferAndNetBufferList.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     NdisRetreatNetBufferListDataStart @ 0x1C00402D0 (NdisRetreatNetBufferListDataStart.c)
 *     NetioCopyOpaqueNetBufferListInformation @ 0x1C00403D4 (NetioCopyOpaqueNetBufferListInformation.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0062FFC (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D68 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C00B44C0 (NdisFreeFragmentNetBufferList.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateFragmentNetBufferList(
        PNET_BUFFER_LIST OriginalNetBufferList,
        NDIS_HANDLE NetBufferListPool,
        NDIS_HANDLE NetBufferPool,
        ULONG StartOffset,
        ULONG MaximumLength,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        ULONG AllocateFragmentFlags)
{
  struct _GUID *v8; // rbp
  _DWORD *v9; // r10
  ULONG v10; // r13d
  NDIS_HANDLE v11; // rbx
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rdi
  PNET_BUFFER NetBuffer; // rax
  _NET_BUFFER *i; // rbx
  struct _NET_BUFFER_LIST *v16; // rcx
  _NET_BUFFER *FirstNetBuffer; // r14
  ULONG v19; // r12d
  ULONG DataLength; // ecx
  struct _MDL *MdlChain; // rsi
  ULONG j; // r8d
  ULONG ByteCount; // eax
  ULONG v24; // ecx
  ULONG v25; // eax
  ULONG v26; // r15d
  ULONG v27; // edx
  char *v28; // rax
  struct _MDL *Mdl; // rax
  struct _MDL *v30; // r13
  ULONG v31; // r9d
  void *v32; // r8
  int v33; // edx
  ULONG v34; // eax
  int v35; // ecx
  struct _MDL *Next; // rax
  unsigned int Data1; // eax
  void *v38; // rcx
  PNET_BUFFER v39; // rax
  PNET_BUFFER v40; // rax
  NDIS_STATUS v41; // eax
  unsigned __int64 v42; // r15
  const struct _EVENT_DESCRIPTOR *v43; // rdx
  __int64 v44; // rax
  unsigned __int8 FreeMdlHandler; // [rsp+20h] [rbp-60h]
  const struct _GUID *v46; // [rsp+28h] [rbp-58h]
  int v47; // [rsp+80h] [rbp+0h] BYREF

  v8 = (struct _GUID *)((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL);
  *(_QWORD *)&v8[9].Data1 = 0LL;
  v9 = NetBufferListPool;
  LOBYTE(NetBufferListPool) = 0;
  v8[1].Data1 = StartOffset;
  v10 = StartOffset;
  v11 = NetBufferPool;
  *(_QWORD *)&v8[8].Data1 = OriginalNetBufferList;
  v8->Data1 = (unsigned int)NetBufferListPool;
  if ( !MaximumLength )
    return 0LL;
  if ( !v9 )
    v9 = ndisNetBufferListPool;
  if ( !NetBufferPool )
    v11 = ndisNetBufferPool;
  *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v11;
  if ( (v9[11] & 1) != 0 )
  {
    NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(v9, 0, 0, 0LL, 0, 0LL);
    if ( !NetBufferAndNetBufferList )
      return NetBufferAndNetBufferList;
  }
  else
  {
    NetBufferAndNetBufferList = NdisAllocateNetBufferList(v9, 0, 0);
    if ( !NetBufferAndNetBufferList )
      return NetBufferAndNetBufferList;
    NetBuffer = NdisAllocateNetBuffer(v11, 0LL, 0, 0LL);
    if ( !NetBuffer )
      goto LABEL_16;
    NetBufferAndNetBufferList->Link.Region = (unsigned __int64)NetBuffer;
  }
  for ( i = OriginalNetBufferList->FirstNetBuffer; ; i = (_NET_BUFFER *)i->Link.Alignment )
  {
    if ( !i )
      goto LABEL_16;
    if ( i->DataLength > v10 )
      break;
  }
  FirstNetBuffer = NetBufferAndNetBufferList->FirstNetBuffer;
  while ( 2 )
  {
    v19 = 0;
    while ( 2 )
    {
      while ( 1 )
      {
        DataLength = i->DataLength;
        if ( DataLength > v10 )
          break;
LABEL_58:
        i = (_NET_BUFFER *)i->Link.Alignment;
        if ( !i )
          goto LABEL_59;
      }
      MdlChain = i->MdlChain;
      for ( j = v10 + i->DataOffset; ; j -= ByteCount )
      {
        *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = j;
        if ( !MdlChain )
          goto LABEL_58;
        ByteCount = MdlChain->ByteCount;
        if ( j < ByteCount )
          break;
        MdlChain = MdlChain->Next;
      }
      v24 = DataLength - v10;
      v25 = ByteCount - j;
      *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = v24;
      v26 = v24;
      if ( v25 <= v24 )
        v26 = v25;
      while ( 1 )
      {
        while ( !v26 )
        {
          MdlChain = MdlChain->Next;
LABEL_51:
          if ( !MdlChain )
            goto LABEL_54;
        }
        v27 = v24;
        if ( v24 >= MaximumLength - v19 )
          v27 = MaximumLength - v19;
        v28 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + j;
        *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v27;
        *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v28;
        Mdl = IoAllocateMdl(v28, v27, 0, 0, 0LL);
        v30 = Mdl;
        if ( !Mdl )
          goto LABEL_16;
        v31 = *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        v32 = *(void **)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        if ( v31 < v26 )
        {
          IoBuildPartialMdl(MdlChain, Mdl, v32, v31);
          v34 = *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 4) += v34;
        }
        else
        {
          IoBuildPartialMdl(MdlChain, Mdl, v32, v26);
          v34 = v26;
        }
        v19 += v34;
        if ( FirstNetBuffer->MdlChain )
        {
          **(_QWORD **)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v30;
        }
        else
        {
          FirstNetBuffer->DataOffset = 0;
          FirstNetBuffer->CurrentMdlOffset = 0;
          FirstNetBuffer->Link.Region = (unsigned __int64)v30;
          FirstNetBuffer->MdlChain = v30;
        }
        v35 = *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
        v26 -= v34;
        v30->Next = 0LL;
        v24 = v35 - v34;
        *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v30;
        *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = v24;
        if ( !v24 )
          break;
        if ( v26 )
        {
          FirstNetBuffer->DataLength = v19;
LABEL_49:
          v38 = *(void **)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
          LOBYTE(v33) = 0;
          v8->Data1 = v33;
          v39 = NdisAllocateNetBuffer(v38, 0LL, 0, 0LL);
          if ( !v39 )
            goto LABEL_16;
          j = *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
          v19 = 0;
          v24 = *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
          FirstNetBuffer->Link.Alignment = (unsigned __int64)v39;
          FirstNetBuffer = v39;
          goto LABEL_51;
        }
        Next = MdlChain->Next;
        MdlChain = Next;
        if ( !Next )
          break;
        v26 = Next->ByteCount;
        Data1 = v8->Data1;
        if ( v19 >= MaximumLength )
        {
          v33 = 1;
          FirstNetBuffer->DataLength = v19;
          if ( v26 )
            LOBYTE(Data1) = 1;
        }
        j = 0;
        LOBYTE(v33) = Data1;
        *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
        v8->Data1 = v33;
        if ( (_BYTE)Data1 )
          goto LABEL_49;
      }
      FirstNetBuffer->DataLength = v19;
LABEL_54:
      i = (_NET_BUFFER *)i->Link.Alignment;
      if ( !i )
      {
LABEL_59:
        v41 = NdisRetreatNetBufferListDataStart(
                NetBufferAndNetBufferList,
                DataOffsetDelta,
                DataBackFill,
                (NET_BUFFER_ALLOCATE_MDL_HANDLER)ndisAllocateMdlInternal,
                (NET_BUFFER_FREE_MDL_HANDLER)ndisFreeMdlInternal);
        v16 = NetBufferAndNetBufferList;
        if ( v41 )
          goto LABEL_17;
        v42 = *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
        NetioCopyOpaqueNetBufferListInformation((__int64)NetBufferAndNetBufferList, v42);
        if ( byte_1C00F5390 )
        {
          NetBufferAndNetBufferList->NetBufferListInfo[13] = *(void **)(v42 + 248);
        }
        else if ( Microsoft_Windows_Networking_CorrelationEnabled )
        {
          *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 0LL;
          *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
          *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_QWORD *)(v42 + 248) & 0x7FFFFFFFFFFFFFFFLL;
          v44 = (__int64)NetBufferAndNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
          *(_OWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_OWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x80);
          *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v44;
          LODWORD(v44) = Microsoft_Windows_Networking_CorrelationEnabled;
          *(_OWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_OWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x40);
          if ( (_DWORD)v44 )
            EtwEx_tidActivityInfoTransfer(0x7FFFFFFFFFFFFFFFLL, v43, v8 + 9, v8 + 8, FreeMdlHandler, v46, 2u);
        }
        if ( *(int *)ndisNblTrackerMode >= 3 )
          ndisNblTrackerRecordEventInternal((unsigned __int64)NetBufferAndNetBufferList, 0LL, 7u, v42, 0);
        return NetBufferAndNetBufferList;
      }
      v10 = *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      if ( i->DataLength <= v10 )
        continue;
      break;
    }
    v40 = NdisAllocateNetBuffer(*(NDIS_HANDLE *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40), 0LL, 0, 0LL);
    if ( v40 )
    {
      FirstNetBuffer->Link.Alignment = (unsigned __int64)v40;
      FirstNetBuffer = v40;
      continue;
    }
    break;
  }
LABEL_16:
  v16 = NetBufferAndNetBufferList;
LABEL_17:
  NdisFreeFragmentNetBufferList(v16, 0, 0);
  return 0LL;
}
