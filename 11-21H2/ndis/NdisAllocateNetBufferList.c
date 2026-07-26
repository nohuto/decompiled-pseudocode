/*
 * XREFs of NdisAllocateNetBufferList @ 0x1C0003CA0
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0004450 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C00ADE60 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     ndisPplLazyInitializeLookaside @ 0x1C000439C (ndisPplLazyInitializeLookaside.c)
 *     NdisFreeNetBufferList @ 0x1C0005150 (NdisFreeNetBufferList.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     NdisAllocateNetBufferListContext @ 0x1C003A9D0 (NdisAllocateNetBufferListContext.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00AE8FC (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
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
  __int16 v12; // r13
  _SLIST_ENTRY *v13; // r15
  int v14; // ecx
  __int64 v15; // rax
  _SLIST_ENTRY *v16; // rax
  int v17; // eax
  __int64 v18; // rax
  struct _MDL *v19; // r14
  __int64 v20; // rcx
  int v21; // eax
  KIRQL v23; // al
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  _SLIST_ENTRY *Pool2; // rax
  KIRQL v27; // al
  __int64 v28; // r8
  _QWORD *v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // r9
  unsigned __int64 v32; // r8
  __int16 v33; // dx
  int v34; // edx
  __int64 v35; // rax

  if ( !PoolHandle || (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) != 0 )
    return 0LL;
  Number = KeGetPcr()->Prcb.Number;
  v7 = 1;
  if ( ndisMaxNumberOfProcessors == 1 )
  {
LABEL_32:
    ++*((_DWORD *)PoolHandle + 37);
    v11 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
    if ( v11 )
    {
LABEL_33:
      *((_DWORD *)&v11[-1].Next + 2) = Number;
      goto LABEL_7;
    }
    v25 = *((unsigned int *)PoolHandle + 43);
    ++*((_DWORD *)PoolHandle + 38);
    if ( v25 + 32 >= v25 )
    {
      Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(66LL, v25 + 32, *((unsigned int *)PoolHandle + 42));
      if ( Pool2 )
      {
        v11 = Pool2 + 2;
        Pool2->Next = 0LL;
        if ( Pool2 != (_SLIST_ENTRY *)-32LL )
        {
          Pool2->Next = (_SLIST_ENTRY *)PoolHandle;
          v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
          v28 = *((_QWORD *)PoolHandle + 2);
          v29 = (char *)PoolHandle + 16;
          v30 = &v11[-2].Next + 1;
          if ( *(NDIS_HANDLE *)(v28 + 8) != (char *)PoolHandle + 16 )
            __fastfail(3u);
          v30[1] = v29;
          *v30 = v28;
          *(_QWORD *)(v28 + 8) = v30;
          *v29 = v30;
          KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v27);
          v7 = 0;
          goto LABEL_33;
        }
      }
    }
    return 0LL;
  }
  v8 = (unsigned __int64)Number << 8;
  v9 = (char *)PoolHandle + v8 + 384;
  if ( !v9[216] )
    ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)((char *)PoolHandle + v8 + 384));
  v10 = (_SLIST_HEADER *)*((_QWORD *)v9 + 24);
  ++*((_DWORD *)v9 + 5);
  v11 = ExpInterlockedPopEntrySList(v10);
  if ( !v11 )
  {
    if ( ExQueryDepthSList(*((PSLIST_HEADER *)v9 + 25)) < 0xAu
      || (v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v9 + 26),
          v24 = *((_QWORD *)v9 + 24),
          *((_QWORD *)v9 + 24) = *((_QWORD *)v9 + 25),
          *((_QWORD *)v9 + 25) = v24,
          KeReleaseSpinLock((PKSPIN_LOCK)v9 + 26, v23),
          (v11 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v9 + 24))) == 0LL) )
    {
      ++*((_DWORD *)v9 + 6);
      goto LABEL_32;
    }
  }
LABEL_7:
  v12 = *((_WORD *)&v11[3].Next + 5);
  v13 = v11;
  memset(v11, 0, 8 * (v7 ^ 1LL) + 368);
  v11[2].Next = (_SLIST_ENTRY *)PoolHandle;
  *((_DWORD *)&v11[8].Next + 2) = 256;
  if ( v7 )
    *((_WORD *)&v11[3].Next + 5) = v12;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds((struct _NET_BUFFER_LIST *)v11, 1u);
  *((_BYTE *)&v11[12].Next + 8) = *((_BYTE *)PoolHandle + 32);
  v14 = *((_DWORD *)PoolHandle + 15);
  if ( (v14 & 2) != 0 )
  {
    v15 = 24LL;
    if ( (v14 & 1) != 0 )
      v15 = 35LL;
    v16 = &v11[v15];
    v11[1].Next = v16;
    v16->Next = 0LL;
    *((_WORD *)&v11[1].Next->Next + 4) = *((_WORD *)PoolHandle + 17);
    *((_WORD *)&v11[1].Next->Next + 5) = *((_WORD *)PoolHandle + 17);
    if ( *((_WORD *)PoolHandle + 17) >= ContextSize )
    {
      *((_WORD *)&v11[1].Next->Next + 5) -= ContextSize;
LABEL_18:
      v17 = *((_DWORD *)PoolHandle + 15);
      if ( (v17 & 1) != 0 )
      {
        *((_QWORD *)&v11->Next + 1) = v11 + 24;
        v17 = *((_DWORD *)PoolHandle + 15);
      }
      if ( (v17 & 4) != 0 )
      {
        v18 = *((unsigned __int16 *)PoolHandle + 17);
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
          v31 = *((unsigned int *)PoolHandle + 22);
          v32 = (unsigned __int64)v19 + *((unsigned int *)PoolHandle + 23);
          v33 = (_WORD)v19 + *((_DWORD *)PoolHandle + 23);
          v19->Next = 0LL;
          v19->MdlFlags = 0;
          v19->ByteCount = v31;
          v19->StartVa = (PVOID)(v32 & 0xFFFFFFFFFFFFF000uLL);
          v34 = v33 & 0xFFF;
          v19->ByteOffset = v34;
          v19->Size = 8 * ((((unsigned __int64)(unsigned __int16)v34 + v31 + 4095) >> 12) + 6);
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
        v35 = *((_QWORD *)&v11->Next + 1);
        if ( v35 )
        {
          *(_QWORD *)v35 = 0LL;
          *(_QWORD *)(v35 + 56) = PoolHandle;
          *(_QWORD *)(v35 + 8) = 0LL;
          *(_DWORD *)(v35 + 16) = 0;
          *(_QWORD *)(v35 + 32) = 0LL;
          *(_DWORD *)(v35 + 40) = 0;
          *(_DWORD *)(v35 + 24) = 0;
          *(_DWORD *)(v35 + 48) = 0;
          *(_QWORD *)(v35 + 72) = 0LL;
          *(_QWORD *)(v35 + 64) = 0LL;
          *(_QWORD *)(v35 + 136) = 0LL;
          *(_QWORD *)(v35 + 128) = 0LL;
          *(_QWORD *)(v35 + 168) = 0LL;
        }
      }
      if ( *(int *)ndisNblTrackerMode >= 3 )
        ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v11, 0LL, 2u, 0LL, 0);
      return (PNET_BUFFER_LIST)v11;
    }
  }
  if ( ContextSize )
  {
    if ( NdisAllocateNetBufferListContext(
           (PNET_BUFFER_LIST)v11,
           ContextSize,
           ContextBackFill,
           *((_DWORD *)PoolHandle + 14)) )
    {
      NdisFreeNetBufferList((PNET_BUFFER_LIST)v11);
      v13 = 0LL;
    }
    else
    {
      *((_DWORD *)&v11[8].Next + 2) |= 0x400u;
    }
  }
  v11 = v13;
  if ( v13 )
    goto LABEL_18;
  return (PNET_BUFFER_LIST)v11;
}
