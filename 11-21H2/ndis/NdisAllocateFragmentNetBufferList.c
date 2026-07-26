/*
 * XREFs of NdisAllocateFragmentNetBufferList @ 0x1C00ADE60
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocateNetBufferList @ 0x1C0003CA0 (NdisAllocateNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0004090 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBuffer @ 0x1C00279F0 (NdisAllocateNetBuffer.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     NdisRetreatNetBufferListDataStart @ 0x1C003A830 (NdisRetreatNetBufferListDataStart.c)
 *     NetioCopyOpaqueNetBufferListInformation @ 0x1C003A938 (NetioCopyOpaqueNetBufferListInformation.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C005DBE0 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C00AE5C0 (NdisFreeFragmentNetBufferList.c)
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
  unsigned __int64 v8; // rbp
  ULONG v9; // r13d
  NDIS_HANDLE v10; // rbx
  _DWORD *v11; // r10
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rdi
  PNET_BUFFER NetBuffer; // rax
  _NET_BUFFER *i; // rbx
  struct _NET_BUFFER_LIST *v16; // rcx
  _NET_BUFFER *FirstNetBuffer; // r14
  ULONG v19; // r12d
  ULONG DataLength; // ecx
  struct _MDL *MdlChain; // rsi
  ULONG j; // edx
  ULONG ByteCount; // eax
  ULONG v24; // ecx
  ULONG v25; // eax
  ULONG v26; // r15d
  ULONG v27; // r13d
  char *v28; // rax
  struct _MDL *Mdl; // rax
  void *v30; // r8
  int v31; // r9d
  _MDL *v32; // rax
  int v33; // ecx
  struct _MDL *Next; // rax
  int v35; // eax
  void *v36; // rcx
  PNET_BUFFER v37; // rax
  PNET_BUFFER v38; // rax
  NDIS_STATUS v39; // eax
  unsigned __int64 v40; // r15
  const struct _EVENT_DESCRIPTOR *v41; // rdx
  __int64 v42; // rax
  unsigned __int8 FreeMdlHandler; // [rsp+20h] [rbp-60h]
  const struct _GUID *v44; // [rsp+28h] [rbp-58h]
  int v45; // [rsp+80h] [rbp+0h] BYREF

  v8 = (unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v8 + 144) = 0LL;
  v9 = StartOffset;
  *(_DWORD *)(v8 + 12) = StartOffset;
  v10 = NetBufferPool;
  LOBYTE(StartOffset) = 0;
  *(_QWORD *)(v8 + 128) = OriginalNetBufferList;
  v11 = NetBufferListPool;
  *(_DWORD *)(v8 + 4) = StartOffset;
  if ( !MaximumLength )
    return 0LL;
  if ( !NetBufferListPool )
    v11 = ndisNetBufferListPool;
  if ( !NetBufferPool )
    v10 = ndisNetBufferPool;
  *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v10;
  if ( (v11[15] & 1) != 0 )
  {
    NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(v11, 0, 0, 0LL, 0, 0LL);
    if ( !NetBufferAndNetBufferList )
      return NetBufferAndNetBufferList;
  }
  else
  {
    NetBufferAndNetBufferList = NdisAllocateNetBufferList(v11, 0, 0);
    if ( !NetBufferAndNetBufferList )
      return NetBufferAndNetBufferList;
    NetBuffer = NdisAllocateNetBuffer(v10, 0LL, 0, 0LL);
    if ( !NetBuffer )
      goto LABEL_16;
    NetBufferAndNetBufferList->Link.Region = (unsigned __int64)NetBuffer;
  }
  for ( i = OriginalNetBufferList->FirstNetBuffer; ; i = (_NET_BUFFER *)i->Link.Alignment )
  {
    if ( !i )
      goto LABEL_16;
    if ( i->DataLength > v9 )
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
        if ( DataLength > v9 )
          break;
LABEL_58:
        i = (_NET_BUFFER *)i->Link.Alignment;
        if ( !i )
          goto LABEL_59;
      }
      MdlChain = i->MdlChain;
      for ( j = v9 + i->DataOffset; ; j -= ByteCount )
      {
        *(_DWORD *)v8 = j;
        if ( !MdlChain )
          goto LABEL_58;
        ByteCount = MdlChain->ByteCount;
        if ( j < ByteCount )
          break;
        MdlChain = MdlChain->Next;
      }
      v24 = DataLength - v9;
      v25 = ByteCount - j;
      *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v24;
      v26 = v24;
      if ( v25 <= v24 )
        v26 = v25;
      while ( 1 )
      {
        if ( !v26 )
        {
          MdlChain = MdlChain->Next;
          goto LABEL_51;
        }
        v27 = v24;
        if ( v24 >= MaximumLength - v19 )
          v27 = MaximumLength - v19;
        v28 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + j;
        *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v28;
        Mdl = IoAllocateMdl(v28, v27, 0, 0, 0LL);
        *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = Mdl;
        if ( !Mdl )
          goto LABEL_16;
        v30 = *(void **)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        if ( v27 < v26 )
        {
          IoBuildPartialMdl(MdlChain, Mdl, v30, v27);
          *(_DWORD *)v8 += v27;
        }
        else
        {
          v27 = v26;
          IoBuildPartialMdl(MdlChain, Mdl, v30, v26);
        }
        v32 = *(_MDL **)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        v19 += v27;
        if ( FirstNetBuffer->MdlChain )
        {
          **(_QWORD **)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v32;
        }
        else
        {
          FirstNetBuffer->DataOffset = 0;
          FirstNetBuffer->CurrentMdlOffset = 0;
          FirstNetBuffer->Link.Region = (unsigned __int64)v32;
          FirstNetBuffer->MdlChain = v32;
        }
        v33 = *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        v26 -= v27;
        v32->Next = 0LL;
        v24 = v33 - v27;
        *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v32;
        *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v24;
        if ( !v24 )
          break;
        if ( v26 )
        {
          FirstNetBuffer->DataLength = v19;
LABEL_49:
          v36 = *(void **)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
          LOBYTE(v31) = 0;
          *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v31;
          v37 = NdisAllocateNetBuffer(v36, 0LL, 0, 0LL);
          if ( !v37 )
            goto LABEL_16;
          j = *(_DWORD *)v8;
          v19 = 0;
          v24 = *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          FirstNetBuffer->Link.Alignment = (unsigned __int64)v37;
          FirstNetBuffer = v37;
          goto LABEL_51;
        }
        Next = MdlChain->Next;
        MdlChain = Next;
        if ( !Next )
          break;
        v26 = Next->ByteCount;
        v35 = *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        if ( v19 >= MaximumLength )
        {
          FirstNetBuffer->DataLength = v19;
          if ( v26 )
            LOBYTE(v35) = 1;
        }
        j = 0;
        LOBYTE(v31) = v35;
        *(_DWORD *)v8 = 0;
        *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v31;
        if ( (_BYTE)v35 )
          goto LABEL_49;
LABEL_51:
        if ( !MdlChain )
          goto LABEL_54;
      }
      FirstNetBuffer->DataLength = v19;
LABEL_54:
      i = (_NET_BUFFER *)i->Link.Alignment;
      if ( !i )
      {
LABEL_59:
        v39 = NdisRetreatNetBufferListDataStart(
                NetBufferAndNetBufferList,
                DataOffsetDelta,
                DataBackFill,
                ndisAllocateMdlInternal,
                ndisFreeMdlInternal);
        v16 = NetBufferAndNetBufferList;
        if ( v39 )
          goto LABEL_17;
        v40 = *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
        NetioCopyOpaqueNetBufferListInformation((__int64)NetBufferAndNetBufferList, v40);
        if ( byte_1C00EC210 )
        {
          NetBufferAndNetBufferList->NetBufferListInfo[13] = *(void **)(v40 + 248);
        }
        else if ( Microsoft_Windows_Networking_CorrelationEnabled )
        {
          *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 0LL;
          *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
          *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_QWORD *)(v40 + 248) & 0x7FFFFFFFFFFFFFFFLL;
          v42 = (__int64)NetBufferAndNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
          *(_OWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_OWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x80);
          *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v42;
          LODWORD(v42) = Microsoft_Windows_Networking_CorrelationEnabled;
          *(_OWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_OWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x40);
          if ( (_DWORD)v42 )
            EtwEx_tidActivityInfoTransfer(
              0x7FFFFFFFFFFFFFFFLL,
              v41,
              (const struct _GUID *)(v8 + 144),
              (const struct _GUID *)(v8 + 128),
              FreeMdlHandler,
              v44,
              2u);
        }
        if ( *(int *)ndisNblTrackerMode >= 3 )
          ndisNblTrackerRecordEventInternal((unsigned __int64)NetBufferAndNetBufferList, 0LL, 7u, v40, 0);
        return NetBufferAndNetBufferList;
      }
      v9 = *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
      if ( i->DataLength <= v9 )
        continue;
      break;
    }
    v38 = NdisAllocateNetBuffer(*(NDIS_HANDLE *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40), 0LL, 0, 0LL);
    if ( v38 )
    {
      FirstNetBuffer->Link.Alignment = (unsigned __int64)v38;
      FirstNetBuffer = v38;
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
