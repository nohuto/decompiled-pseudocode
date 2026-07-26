/*
 * XREFs of NdisFreeCloneNetBufferList @ 0x1C0011D20
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0001180 (NdisAllocateCloneNetBufferList.c)
 * Callees:
 *     ndisPplLazyInitializeLookaside @ 0x1C00024CC (ndisPplLazyInitializeLookaside.c)
 *     NdisFreeNetBuffer @ 0x1C0005E20 (NdisFreeNetBuffer.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0013834 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     NdisFreeNetBufferListContext @ 0x1C0028140 (NdisFreeNetBufferListContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D68 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFreeCloneNetBufferList(PNET_BUFFER_LIST CloneNetBufferList, ULONG FreeCloneFlags)
{
  _BYTE *v2; // rbp
  bool v4; // r15
  _DWORD *NdisPoolHandle; // rsi
  int v6; // eax
  bool v7; // r14
  _NET_BUFFER *FirstNetBuffer; // rsi
  struct _MDL *MdlChain; // rcx
  struct _MDL *Next; // rbx
  _NET_BUFFER *v11; // rbx
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  _DWORD *v13; // r14
  unsigned __int64 v14; // rax
  char *v15; // rbx
  _SLIST_HEADER *v16; // rsi
  _SLIST_HEADER *v17; // rcx
  __int64 v18; // r12
  __int64 v19; // r13
  PNET_BUFFER_LIST Alignment; // r14
  void *v21; // rbx
  unsigned __int8 *SourceHandle; // rcx
  __int64 v23; // rax
  char *v24; // r14
  __int64 v25; // [rsp+30h] [rbp-50h]
  char v26; // [rsp+80h] [rbp+0h] BYREF

  v2 = (_BYTE *)((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (FreeCloneFlags & 2) != 0;
  NdisPoolHandle = CloneNetBufferList->NdisPoolHandle;
  CloneNetBufferList->Link.Alignment = 0LL;
  v6 = *(_DWORD *)ndisNblTrackerMode;
  *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = NdisPoolHandle;
  if ( v6 )
  {
    v18 = 0LL;
    v19 = 0LL;
    *(_BYTE *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 0;
    *v2 = 0;
    if ( v6 >= 3 )
      ndisNblTrackerRecordEventInternal(CloneNetBufferList, 0LL, 6u, (void *)0x88, 0);
    Alignment = CloneNetBufferList;
    while ( 1 )
    {
      v21 = Alignment->NetBufferListInfo[27];
      while ( Alignment->NetBufferListInfo[27] == v21 )
      {
        if ( v21 )
        {
          if ( ((unsigned __int8)v21 & 4) != 0 )
            goto LABEL_49;
        }
        else if ( !Alignment->SourceHandle )
        {
          Alignment->SourceHandle = 0LL;
        }
        SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
        if ( SourceHandle )
        {
          *(_QWORD *)&FreeCloneFlags = *SourceHandle;
          if ( (unsigned __int8)(FreeCloneFlags - 17) <= 1u || (_BYTE)FreeCloneFlags == 5 )
          {
            if ( SourceHandle != (unsigned __int8 *)136 || Alignment->ParentNetBufferList )
            {
              ++v18;
              v23 = 136LL;
            }
            else
            {
              ++v18;
              v23 = 24LL;
            }
            goto LABEL_38;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v25) = *SourceHandle;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0x1Bu,
              0xCu,
              (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
              (char)Alignment,
              v25);
          }
        }
        else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xBu,
            (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
            Alignment);
        }
LABEL_49:
        v23 = 140LL;
LABEL_38:
        Alignment->NetBufferListInfo[27] = (void *)v23;
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
        if ( !Alignment )
          break;
      }
      if ( ((unsigned __int8)v21 & 1) != 0 )
        ndisNblTrackerUpdateOwnershipCount(v21, v19 - v18, v2 + 1, (unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL);
      v19 = v18;
      if ( !Alignment )
      {
        NdisPoolHandle = *(_DWORD **)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
        break;
      }
    }
  }
  v7 = (NdisPoolHandle[11] & 1) == 0;
  FirstNetBuffer = CloneNetBufferList->FirstNetBuffer;
  if ( FirstNetBuffer )
  {
    do
    {
      if ( !v4 )
      {
        MdlChain = FirstNetBuffer->MdlChain;
        if ( MdlChain )
        {
          do
          {
            Next = MdlChain->Next;
            IoFreeMdl(MdlChain);
            MdlChain = Next;
          }
          while ( Next );
        }
      }
      v11 = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      if ( FirstNetBuffer != CloneNetBufferList->FirstNetBuffer || v7 )
        NdisFreeNetBuffer(FirstNetBuffer);
      FirstNetBuffer = v11;
    }
    while ( v11 );
  }
  Context = CloneNetBufferList->Context;
  v13 = CloneNetBufferList->NdisPoolHandle;
  if ( Context && (CloneNetBufferList->Flags & 0x400) != 0 )
    NdisFreeNetBufferListContext(CloneNetBufferList, Context->Size - Context->Offset);
  CloneNetBufferList->Flags &= ~0x100u;
  if ( ((unsigned __int64)CloneNetBufferList->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    LOBYTE(FreeCloneFlags) = 1;
    WfpNblInfoCleanup(CloneNetBufferList, *(_QWORD *)&FreeCloneFlags);
  }
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(CloneNetBufferList, 0LL, 4u, 0LL, 0);
  if ( (v13[1] & 1) != 0 )
  {
    if ( (unsigned __int64)CloneNetBufferList < 0x20 )
      ndisBugCheckEx(0x31uLL, 3uLL, (ULONG_PTR)CloneNetBufferList, 0LL);
    ExFreePoolWithTag(&CloneNetBufferList[-1].NetBufferListInfo[26], 0);
  }
  else
  {
    if ( ndisMaxNumberOfProcessors != 1 )
    {
      v14 = (unsigned __int64)LODWORD(CloneNetBufferList[-1].NetBufferListInfo[29]) << 8;
      v15 = (char *)v13 + v14 + 384;
      if ( !v15[216] )
        ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)((char *)v13 + v14 + 384), (__int64)(v13 + 32));
      if ( LODWORD(CloneNetBufferList[-1].NetBufferListInfo[29]) == KeGetPcr()->Prcb.Number )
        v16 = (_SLIST_HEADER *)*((_QWORD *)v15 + 24);
      else
        v16 = (_SLIST_HEADER *)*((_QWORD *)v15 + 25);
      ++*((_DWORD *)v15 + 7);
      if ( ExQueryDepthSList(v16) < *((_WORD *)v15 + 8) )
      {
        v17 = v16;
LABEL_22:
        ExpInterlockedPushEntrySList(v17, (PSLIST_ENTRY)CloneNetBufferList);
        return;
      }
      ++*((_DWORD *)v15 + 8);
    }
    v24 = (char *)(v13 + 32);
    ++*((_DWORD *)v24 + 7);
    if ( ExQueryDepthSList((PSLIST_HEADER)v24) < *((_WORD *)v24 + 8) )
    {
      v17 = (_SLIST_HEADER *)v24;
      goto LABEL_22;
    }
    ++*((_DWORD *)v24 + 8);
    (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))v24 + 7))(CloneNetBufferList, v24);
  }
}
