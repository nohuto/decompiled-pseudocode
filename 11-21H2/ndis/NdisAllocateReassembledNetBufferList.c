/*
 * XREFs of NdisAllocateReassembledNetBufferList @ 0x1C00AE280
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0004090 (NdisAllocateNetBufferAndNetBufferList.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     NdisRetreatNetBufferListDataStart @ 0x1C003A830 (NdisRetreatNetBufferListDataStart.c)
 *     NetioCopyOpaqueNetBufferListInformation @ 0x1C003A938 (NetioCopyOpaqueNetBufferListInformation.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C005DBE0 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisFreeReassembledNetBufferList @ 0x1C00AE690 (NdisFreeReassembledNetBufferList.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateReassembledNetBufferList(
        PNET_BUFFER_LIST FragmentNetBufferList,
        NDIS_HANDLE NetBufferAndNetBufferListPoolHandle,
        ULONG StartOffset,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        ULONG AllocateReassembleFlags)
{
  ULONG v6; // r14d
  NDIS_HANDLE v7; // r10
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  struct _NET_BUFFER_LIST *v10; // rdi
  _NET_BUFFER *i; // rbx
  struct _NET_BUFFER_LIST *v12; // rcx
  _NET_BUFFER *FirstNetBuffer; // rsi
  unsigned int DataLength; // r15d
  ULONG v16; // r15d
  ULONG v17; // edx
  struct _MDL *MdlChain; // r14
  ULONG ByteCount; // eax
  ULONG v20; // eax
  ULONG v21; // r10d
  char *v22; // rax
  struct _MDL *Mdl; // rax
  struct _MDL *v24; // r12
  ULONG v25; // eax
  bool v26; // zf
  ULONG v27; // r15d
  ULONG v28; // eax
  ULONG v29; // r12d
  char *v30; // rcx
  struct _MDL *v31; // rax
  struct _MDL *v32; // rax
  struct _MDL *v33; // rcx
  unsigned int v34; // eax
  NDIS_STATUS v35; // eax
  const struct _EVENT_DESCRIPTOR *v36; // rdx
  __int64 v37; // rax
  unsigned __int8 FreeMdlHandler; // [rsp+20h] [rbp-A8h]
  const struct _GUID *v39; // [rsp+28h] [rbp-A0h]
  struct _MDL *v42; // [rsp+50h] [rbp-78h]
  PVOID VirtualAddress[2]; // [rsp+60h] [rbp-68h] BYREF
  ULONG Length[4]; // [rsp+70h] [rbp-58h] BYREF

  v6 = StartOffset;
  v7 = NetBufferAndNetBufferListPoolHandle;
  if ( !NetBufferAndNetBufferListPoolHandle || (*((_DWORD *)NetBufferAndNetBufferListPoolHandle + 15) & 1) == 0 )
    v7 = ndisNetBufferListPool;
  NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(v7, 0, 0, 0LL, 0, 0LL);
  v10 = NetBufferAndNetBufferList;
  if ( NetBufferAndNetBufferList )
  {
    for ( i = FragmentNetBufferList->FirstNetBuffer; ; i = (_NET_BUFFER *)i->Link.Alignment )
    {
      if ( !i )
      {
LABEL_9:
        v12 = v10;
LABEL_10:
        NdisFreeReassembledNetBufferList(v12, 0, 0);
        return 0LL;
      }
      if ( i->DataLength > v6 )
        break;
    }
    FirstNetBuffer = NetBufferAndNetBufferList->FirstNetBuffer;
    v42 = 0LL;
    do
    {
      DataLength = i->DataLength;
      if ( DataLength > v6 )
      {
        v16 = DataLength - v6;
        v17 = v6 + i->DataOffset;
        MdlChain = i->MdlChain;
        while ( 1 )
        {
          if ( !MdlChain )
            goto LABEL_32;
          ByteCount = MdlChain->ByteCount;
          if ( v17 < ByteCount )
            break;
          MdlChain = MdlChain->Next;
          v17 -= ByteCount;
        }
        v20 = ByteCount - v17;
        v21 = v16;
        if ( v16 >= v20 )
          v21 = v20;
        v22 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + v17;
        Length[0] = v21;
        VirtualAddress[0] = v22;
        Mdl = IoAllocateMdl(v22, v21, 0, 0, 0LL);
        v24 = Mdl;
        if ( Mdl )
        {
          IoBuildPartialMdl(MdlChain, Mdl, VirtualAddress[0], Length[0]);
          v24->Next = 0LL;
          if ( FirstNetBuffer->MdlChain )
          {
            v42->Next = v24;
          }
          else
          {
            FirstNetBuffer->Link.Region = (unsigned __int64)v24;
            FirstNetBuffer->MdlChain = v24;
            FirstNetBuffer->CurrentMdlOffset = 0;
            FirstNetBuffer->DataOffset = 0;
          }
          v25 = Length[0];
          FirstNetBuffer->DataLength += Length[0];
          v27 = v16 - v25;
          v26 = v27 == 0;
          v42 = v24;
          while ( !v26 )
          {
            MdlChain = MdlChain->Next;
            if ( !MdlChain )
              break;
            v28 = MdlChain->ByteCount;
            v29 = v27;
            v30 = (char *)MdlChain->StartVa + MdlChain->ByteOffset;
            VirtualAddress[0] = v30;
            if ( v27 >= v28 )
              v29 = v28;
            v31 = IoAllocateMdl(v30, v29, 0, 0, 0LL);
            *(_QWORD *)Length = v31;
            if ( !v31 )
              goto LABEL_9;
            IoBuildPartialMdl(MdlChain, v31, VirtualAddress[0], v29);
            v32 = *(struct _MDL **)Length;
            v33 = v42;
            v42 = *(struct _MDL **)Length;
            **(_QWORD **)Length = 0LL;
            v33->Next = v32;
            v34 = FirstNetBuffer->DataLength;
            if ( v29 + v34 < v34 )
            {
              FirstNetBuffer->DataLength = -1;
              goto LABEL_9;
            }
            FirstNetBuffer->DataLength = v29 + v34;
            v27 -= v29;
            v26 = v27 == 0;
          }
LABEL_32:
          v6 = StartOffset;
          goto LABEL_33;
        }
        goto LABEL_9;
      }
LABEL_33:
      i = (_NET_BUFFER *)i->Link.Alignment;
    }
    while ( i );
    v35 = NdisRetreatNetBufferListDataStart(
            v10,
            DataOffsetDelta,
            DataBackFill,
            ndisAllocateMdlInternal,
            ndisFreeMdlInternal);
    v12 = v10;
    if ( v35 )
      goto LABEL_10;
    NetioCopyOpaqueNetBufferListInformation((__int64)v10, (__int64)FragmentNetBufferList);
    if ( byte_1C00EC210 )
    {
      v10->NetBufferListInfo[13] = FragmentNetBufferList->NetBufferListInfo[13];
    }
    else if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      VirtualAddress[1] = 0LL;
      VirtualAddress[0] = (PVOID)((__int64)FragmentNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL);
      v37 = (__int64)v10->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      *(_OWORD *)Length = (unsigned __int64)VirtualAddress[0];
      *(_OWORD *)VirtualAddress = (unsigned __int64)v37;
      EtwEx_tidActivityInfoTransfer(
        0x7FFFFFFFFFFFFFFFLL,
        v36,
        (const struct _GUID *)Length,
        (const struct _GUID *)VirtualAddress,
        FreeMdlHandler,
        v39,
        3u);
    }
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal((unsigned __int64)v10, 0LL, 9u, (unsigned __int64)FragmentNetBufferList, 0);
  }
  return v10;
}
