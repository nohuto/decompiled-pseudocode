/*
 * XREFs of NdisFreeCloneNetBufferList @ 0x1C0013560
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0004450 (NdisAllocateCloneNetBufferList.c)
 * Callees:
 *     ndisPplLazyInitializeLookaside @ 0x1C000439C (ndisPplLazyInitializeLookaside.c)
 *     NdisFreeNetBuffer @ 0x1C0008760 (NdisFreeNetBuffer.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0013A8C (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     NdisFreeNetBufferListContext @ 0x1C003AB70 (NdisFreeNetBufferListContext.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFreeCloneNetBufferList(PNET_BUFFER_LIST CloneNetBufferList, ULONG FreeCloneFlags)
{
  _BYTE *v2; // rbp
  bool v4; // r15
  _DWORD *NdisPoolHandle; // rsi
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r12
  __int64 v9; // r13
  PNET_BUFFER_LIST Alignment; // r14
  void *v11; // rbx
  char *SourceHandle; // rcx
  __int64 v13; // rax
  bool v14; // r14
  _NET_BUFFER *FirstNetBuffer; // rsi
  struct _MDL *MdlChain; // rcx
  struct _MDL *Next; // rbx
  _NET_BUFFER *v18; // rbx
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  char *v20; // r14
  unsigned int v21; // ecx
  unsigned __int64 v22; // rax
  char *v23; // rbx
  _SLIST_HEADER *v24; // rsi
  _SLIST_HEADER *v25; // rcx
  char *v26; // r14
  char v27; // [rsp+80h] [rbp+0h] BYREF

  v2 = (_BYTE *)((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (FreeCloneFlags & 2) != 0;
  NdisPoolHandle = CloneNetBufferList->NdisPoolHandle;
  CloneNetBufferList->Link.Alignment = 0LL;
  v6 = *(_DWORD *)ndisNblTrackerMode;
  *(_QWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = NdisPoolHandle;
  if ( v6 )
  {
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    *(_QWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    *(_BYTE *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 0;
    *v2 = 0;
    if ( v6 >= 3 )
    {
      ndisNblTrackerRecordEventInternal(CloneNetBufferList, 0LL, 6u, (void *)0x88, 0);
      v7 = 0LL;
    }
    Alignment = CloneNetBufferList;
    while ( 1 )
    {
      v11 = Alignment->NetBufferListInfo[27];
      while ( Alignment->NetBufferListInfo[27] == v11 )
      {
        if ( v11 )
        {
          if ( ((unsigned __int8)v11 & 4) != 0 )
            goto LABEL_43;
        }
        else if ( !Alignment->SourceHandle )
        {
          Alignment->SourceHandle = 0LL;
        }
        SourceHandle = (char *)Alignment->SourceHandle;
        if ( SourceHandle )
        {
          *(_QWORD *)&FreeCloneFlags = (unsigned __int8)*SourceHandle;
          if ( (unsigned __int8)(FreeCloneFlags - 17) <= 1u || (_BYTE)FreeCloneFlags == 5 )
          {
            if ( SourceHandle != (char *)136 || Alignment->ParentNetBufferList )
            {
              ++v8;
              v13 = 136LL;
            }
            else
            {
              ++v7;
              v13 = 24LL;
              *(_QWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v7;
              ++v8;
            }
            goto LABEL_15;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(FreeCloneFlags) = 3;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              FreeCloneFlags,
              27,
              12,
              (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
              (char)Alignment,
              *SourceHandle);
            goto LABEL_42;
          }
        }
        else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xBu,
            (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
            Alignment);
LABEL_42:
          v7 = *(_QWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        }
LABEL_43:
        v13 = 140LL;
LABEL_15:
        Alignment->NetBufferListInfo[27] = (void *)v13;
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
        if ( !Alignment )
          break;
      }
      if ( ((unsigned __int8)v11 & 1) != 0 )
        ndisNblTrackerUpdateOwnershipCount(v11, v9 - v8, v2 + 1, (unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL);
      v7 = *(_QWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      v9 = v8;
      if ( !Alignment )
      {
        NdisPoolHandle = *(_DWORD **)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
        break;
      }
    }
  }
  v14 = (NdisPoolHandle[15] & 1) == 0;
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
      v18 = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      if ( FirstNetBuffer != CloneNetBufferList->FirstNetBuffer || v14 )
        NdisFreeNetBuffer(FirstNetBuffer);
      FirstNetBuffer = v18;
    }
    while ( v18 );
  }
  Context = CloneNetBufferList->Context;
  v20 = (char *)CloneNetBufferList->NdisPoolHandle;
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
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v21 = (unsigned int)CloneNetBufferList[-1].NetBufferListInfo[29];
    v22 = (unsigned __int64)v21 << 8;
    v23 = &v20[v22 + 384];
    if ( !v23[216] )
    {
      ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)&v20[v22 + 384], (__int64)(v20 + 128));
      v21 = (unsigned int)CloneNetBufferList[-1].NetBufferListInfo[29];
    }
    if ( v21 == KeGetPcr()->Prcb.Number )
      v24 = (_SLIST_HEADER *)*((_QWORD *)v23 + 24);
    else
      v24 = (_SLIST_HEADER *)*((_QWORD *)v23 + 25);
    ++*((_DWORD *)v23 + 7);
    if ( ExQueryDepthSList(v24) < *((_WORD *)v23 + 8) )
    {
      v25 = v24;
LABEL_39:
      ExpInterlockedPushEntrySList(v25, (PSLIST_ENTRY)CloneNetBufferList);
      return;
    }
    ++*((_DWORD *)v23 + 8);
  }
  v26 = v20 + 128;
  ++*((_DWORD *)v26 + 7);
  if ( ExQueryDepthSList((PSLIST_HEADER)v26) < *((_WORD *)v26 + 8) )
  {
    v25 = (_SLIST_HEADER *)v26;
    goto LABEL_39;
  }
  ++*((_DWORD *)v26 + 8);
  (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))v26 + 7))(CloneNetBufferList, v26);
}
