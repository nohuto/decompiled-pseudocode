/*
 * XREFs of NdisAllocateNetBufferList @ 0x1C0001D40
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0001180 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C00B3D30 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     ndisPplLazyInitializeLookaside @ 0x1C00024CC (ndisPplLazyInitializeLookaside.c)
 *     NdisFreeNetBufferList @ 0x1C0003990 (NdisFreeNetBufferList.c)
 *     NdisAllocateNetBufferListContext @ 0x1C0027E10 (NdisAllocateNetBufferListContext.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D48 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00B47B8 (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateNetBufferList(
        NDIS_HANDLE PoolHandle,
        USHORT ContextSize,
        USHORT ContextBackFill)
{
  unsigned int Number; // r13d
  unsigned int v7; // r12d
  unsigned __int64 v8; // rax
  char *v9; // r15
  _SLIST_HEADER *v10; // rcx
  PSLIST_ENTRY v11; // rbx
  __int16 v12; // r15
  int v13; // ecx
  __int64 v14; // rax
  unsigned __int16 *v15; // rdx
  _SLIST_ENTRY *v16; // rax
  struct _NET_BUFFER_LIST *v17; // rbp
  __int64 v18; // rax
  struct _MDL *v19; // r14
  __int64 v20; // rcx
  int v21; // eax
  KIRQL v23; // r8
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  _SLIST_ENTRY *v26; // rax
  KIRQL v27; // al
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  KIRQL v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // r9
  unsigned __int64 v33; // r8
  __int16 v34; // dx
  int v35; // edx
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  _SLIST_ENTRY *Pool2; // rax

  if ( !PoolHandle || (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) != 0 )
    return 0LL;
  if ( (*((_DWORD *)PoolHandle + 1) & 1) != 0 )
  {
    v37 = *((unsigned int *)PoolHandle + 8);
    v7 = 0;
    if ( v37 + 32 >= v37 )
    {
      Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(0x100000042LL, v37 + 32, *((unsigned int *)PoolHandle + 9));
      if ( Pool2 )
      {
        Pool2->Next = (_SLIST_ENTRY *)PoolHandle;
        v11 = Pool2 + 2;
      }
      else
      {
        v11 = 0LL;
      }
    }
    else
    {
      v11 = 0LL;
    }
    goto LABEL_8;
  }
  Number = KeGetPcr()->Prcb.Number;
  v7 = 1;
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v8 = (unsigned __int64)Number << 8;
    v9 = (char *)PoolHandle + v8 + 384;
    if ( !v9[216] )
      ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)((char *)PoolHandle + v8 + 384));
    v10 = (_SLIST_HEADER *)*((_QWORD *)v9 + 24);
    ++*((_DWORD *)v9 + 5);
    v11 = ExpInterlockedPopEntrySList(v10);
    if ( v11 )
      goto LABEL_8;
    if ( ExQueryDepthSList(*((PSLIST_HEADER *)v9 + 25)) >= 0xAu )
    {
      v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v9 + 26);
      v24 = *((_QWORD *)v9 + 25);
      *((_QWORD *)v9 + 25) = *((_QWORD *)v9 + 24);
      *((_QWORD *)v9 + 24) = v24;
      KeReleaseSpinLock((PKSPIN_LOCK)v9 + 26, v23);
      v11 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v9 + 24));
      if ( v11 )
        goto LABEL_8;
    }
    ++*((_DWORD *)v9 + 6);
  }
  ++*((_DWORD *)PoolHandle + 37);
  v11 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
  if ( v11 )
  {
LABEL_35:
    *((_DWORD *)&v11[-1].Next + 2) = Number;
    goto LABEL_8;
  }
  v25 = *((unsigned int *)PoolHandle + 43);
  ++*((_DWORD *)PoolHandle + 38);
  if ( v25 + 32 >= v25
    && (v26 = (_SLIST_ENTRY *)ExAllocatePool2(66LL, v25 + 32, *((unsigned int *)PoolHandle + 42))) != 0LL )
  {
    v11 = v26 + 2;
    v26->Next = 0LL;
    if ( v26 != (_SLIST_ENTRY *)-32LL )
    {
      v26->Next = (_SLIST_ENTRY *)PoolHandle;
      v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
      v28 = *((_QWORD *)PoolHandle + 2);
      v29 = (char *)PoolHandle + 16;
      v30 = v27;
      v31 = &v11[-2].Next + 1;
      if ( *(NDIS_HANDLE *)(v28 + 8) != (char *)PoolHandle + 16 )
        __fastfail(3u);
      *v31 = v28;
      v31[1] = v29;
      *(_QWORD *)(v28 + 8) = v31;
      *v29 = v31;
      KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v30);
      v7 = 0;
      goto LABEL_35;
    }
  }
  else
  {
    v11 = 0LL;
  }
  v7 = 0;
LABEL_8:
  if ( !v11 )
    return 0LL;
  v12 = *((_WORD *)&v11[3].Next + 5);
  memset(v11, 0, 8 * (v7 ^ 1LL) + 368);
  v11[2].Next = (_SLIST_ENTRY *)PoolHandle;
  *((_DWORD *)&v11[8].Next + 2) = 256;
  if ( v7 )
    *((_WORD *)&v11[3].Next + 5) = v12;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds((struct _NET_BUFFER_LIST *)v11, 1u);
  *((_BYTE *)&v11[12].Next + 8) = *((_BYTE *)PoolHandle + 40);
  v13 = *((_DWORD *)PoolHandle + 11);
  if ( (v13 & 2) != 0 )
  {
    v14 = 24LL;
    if ( (v13 & 1) != 0 )
      v14 = 35LL;
    v15 = (unsigned __int16 *)((char *)PoolHandle + 42);
    v16 = &v11[v14];
    v11[1].Next = v16;
    v16->Next = 0LL;
    *((_WORD *)&v11[1].Next->Next + 4) = *((_WORD *)PoolHandle + 21);
    *((_WORD *)&v11[1].Next->Next + 5) = *((_WORD *)PoolHandle + 21);
    if ( *((_WORD *)PoolHandle + 21) >= ContextSize )
    {
      *((_WORD *)&v11[1].Next->Next + 5) -= ContextSize;
      v17 = (struct _NET_BUFFER_LIST *)v11;
LABEL_20:
      if ( (*((_DWORD *)PoolHandle + 11) & 1) != 0 )
        *((_QWORD *)&v11->Next + 1) = v11 + 24;
      if ( (*((_DWORD *)PoolHandle + 11) & 4) != 0 )
      {
        v18 = *v15;
        if ( (_WORD)v18 )
          v19 = (struct _MDL *)((char *)&v11[36] + v18);
        else
          v19 = (struct _MDL *)&v11[35];
        if ( v7 )
        {
          v19->ByteCount = *((_DWORD *)PoolHandle + 22);
          v19->Next = 0LL;
        }
        else
        {
          v32 = *((unsigned int *)PoolHandle + 22);
          v33 = (unsigned __int64)v19 + *((unsigned int *)PoolHandle + 23);
          v34 = (_WORD)v19 + *((_DWORD *)PoolHandle + 23);
          v19->Next = 0LL;
          v19->MdlFlags = 0;
          v19->ByteCount = v32;
          v19->StartVa = (PVOID)(v33 & 0xFFFFFFFFFFFFF000uLL);
          v35 = v34 & 0xFFF;
          v19->ByteOffset = v35;
          v19->Size = 8 * ((((unsigned __int64)(unsigned __int16)v35 + v32 + 4095) >> 12) + 6);
          MmBuildMdlForNonPagedPool(v19);
        }
        v20 = *((_QWORD *)&v11->Next + 1);
        if ( v20 )
        {
          v21 = *((_DWORD *)PoolHandle + 22);
          *(_QWORD *)v20 = 0LL;
          *(_QWORD *)(v20 + 56) = PoolHandle;
          *(_QWORD *)(v20 + 8) = v19;
          *(_DWORD *)(v20 + 16) = v21;
          *(_QWORD *)(v20 + 32) = v19;
          *(_DWORD *)(v20 + 40) = v21;
          *(_DWORD *)(v20 + 24) = 0;
          *(_DWORD *)(v20 + 48) = 0;
          *(_QWORD *)(v20 + 72) = 0LL;
          *(_QWORD *)(v20 + 64) = 0LL;
          *(_QWORD *)(v20 + 136) = 0LL;
          *(_QWORD *)(v20 + 128) = 0LL;
          *(_QWORD *)(v20 + 168) = 0LL;
        }
      }
      else
      {
        v36 = *((_QWORD *)&v11->Next + 1);
        if ( v36 )
        {
          *(_QWORD *)v36 = 0LL;
          *(_QWORD *)(v36 + 56) = PoolHandle;
          *(_QWORD *)(v36 + 8) = 0LL;
          *(_DWORD *)(v36 + 16) = 0;
          *(_QWORD *)(v36 + 32) = 0LL;
          *(_DWORD *)(v36 + 40) = 0;
          *(_DWORD *)(v36 + 24) = 0;
          *(_DWORD *)(v36 + 48) = 0;
          *(_QWORD *)(v36 + 72) = 0LL;
          *(_QWORD *)(v36 + 64) = 0LL;
          *(_QWORD *)(v36 + 136) = 0LL;
          *(_QWORD *)(v36 + 128) = 0LL;
          *(_QWORD *)(v36 + 168) = 0LL;
        }
      }
      if ( *(int *)ndisNblTrackerMode >= 3 )
        ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v11, 0LL, 2u, 0LL, 0);
      return v17;
    }
  }
  if ( ContextSize )
  {
    if ( NdisAllocateNetBufferListContext(
           (PNET_BUFFER_LIST)v11,
           ContextSize,
           ContextBackFill,
           *((_DWORD *)PoolHandle + 9)) )
    {
      NdisFreeNetBufferList((PNET_BUFFER_LIST)v11);
      v11 = 0LL;
    }
    else
    {
      *((_DWORD *)&v11[8].Next + 2) |= 0x400u;
    }
  }
  v15 = (unsigned __int16 *)((char *)PoolHandle + 42);
  v17 = (struct _NET_BUFFER_LIST *)v11;
  if ( v11 )
    goto LABEL_20;
  return v17;
}
