/*
 * XREFs of NdisAllocateNetBufferAndNetBufferList @ 0x1C0002160
 * Callers:
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0064E00 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C00735D8 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C0073F60 (-ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ndisCopyPeriodicReceiveNbl @ 0x1C00A9B58 (ndisCopyPeriodicReceiveNbl.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00B08E8 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C00B3D50 (NdisAllocateFragmentNetBufferList.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1C00B4180 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     ndisPplLazyInitializeLookaside @ 0x1C00024CC (ndisPplLazyInitializeLookaside.c)
 *     NdisFreeNetBufferList @ 0x1C0003B20 (NdisFreeNetBufferList.c)
 *     NdisAllocateNetBufferListContext @ 0x1C0027FA0 (NdisAllocateNetBufferListContext.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D68 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00B47D8 (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z @ 0x1C00B4CA4 (-ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateNetBufferAndNetBufferList(
        NDIS_HANDLE PoolHandle,
        USHORT ContextSize,
        USHORT ContextBackFill,
        PMDL MdlChain,
        ULONG DataOffset,
        SIZE_T DataLength)
{
  unsigned int Number; // r12d
  unsigned int v11; // r13d
  unsigned __int64 v12; // rax
  char *v13; // r14
  _SLIST_HEADER *v14; // rcx
  PSLIST_ENTRY v15; // rbx
  __int16 v16; // r14
  int v17; // ecx
  struct _NET_BUFFER_LIST *v18; // rbp
  ULONG v19; // ecx
  ULONG ByteCount; // eax
  __int64 v22; // rax
  _SLIST_ENTRY *v23; // rax
  unsigned __int64 v24; // rax
  _SLIST_ENTRY *Pool2; // rax
  KIRQL v26; // al
  __int64 v27; // r8
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  KIRQL v30; // al
  __int64 v31; // r8

  if ( PoolHandle )
  {
    if ( (*((_DWORD *)PoolHandle + 11) & 5) == 1 )
    {
      if ( (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) != 0 )
        return 0LL;
      if ( (*((_DWORD *)PoolHandle + 1) & 1) != 0 )
      {
        v11 = 0;
        v15 = (PSLIST_ENTRY)ndisPplAllocateFromSpecialPool((const struct _NDIS_POOL_HEADER *)PoolHandle);
        goto LABEL_9;
      }
      Number = KeGetPcr()->Prcb.Number;
      v11 = 1;
      if ( ndisMaxNumberOfProcessors != 1 )
      {
        v12 = (unsigned __int64)Number << 8;
        v13 = (char *)PoolHandle + v12 + 384;
        if ( !v13[216] )
          ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)((char *)PoolHandle + v12 + 384));
        v14 = (_SLIST_HEADER *)*((_QWORD *)v13 + 24);
        ++*((_DWORD *)v13 + 5);
        v15 = ExpInterlockedPopEntrySList(v14);
        if ( v15 )
          goto LABEL_9;
        if ( ExQueryDepthSList(*((PSLIST_HEADER *)v13 + 25)) >= 0xAu )
        {
          v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13 + 26);
          v31 = *((_QWORD *)v13 + 24);
          *((_QWORD *)v13 + 24) = *((_QWORD *)v13 + 25);
          *((_QWORD *)v13 + 25) = v31;
          KeReleaseSpinLock((PKSPIN_LOCK)v13 + 26, v30);
          v15 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v13 + 24));
          if ( v15 )
            goto LABEL_9;
        }
        ++*((_DWORD *)v13 + 6);
      }
      ++*((_DWORD *)PoolHandle + 37);
      v15 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
      if ( v15 )
      {
LABEL_25:
        *((_DWORD *)&v15[-1].Next + 2) = Number;
        goto LABEL_9;
      }
      v24 = *((unsigned int *)PoolHandle + 43);
      ++*((_DWORD *)PoolHandle + 38);
      if ( v24 + 32 >= v24
        && (Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(66LL, v24 + 32, *((unsigned int *)PoolHandle + 42))) != 0LL )
      {
        v15 = Pool2 + 2;
        Pool2->Next = 0LL;
        if ( Pool2 != (_SLIST_ENTRY *)-32LL )
        {
          Pool2->Next = (_SLIST_ENTRY *)PoolHandle;
          v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
          v27 = *((_QWORD *)PoolHandle + 2);
          v28 = (char *)PoolHandle + 16;
          v29 = &v15[-2].Next + 1;
          if ( *(NDIS_HANDLE *)(v27 + 8) != (char *)PoolHandle + 16 )
            __fastfail(3u);
          v29[1] = v28;
          *v29 = v27;
          *(_QWORD *)(v27 + 8) = v29;
          *v28 = v29;
          KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v26);
          v11 = 0;
          goto LABEL_25;
        }
      }
      else
      {
        v15 = 0LL;
      }
      v11 = 0;
LABEL_9:
      if ( v15 )
      {
        v16 = *((_WORD *)&v15[3].Next + 5);
        memset(v15, 0, 8 * (v11 ^ 1LL) + 368);
        v15[2].Next = (_SLIST_ENTRY *)PoolHandle;
        *((_DWORD *)&v15[8].Next + 2) = 256;
        if ( v11 )
          *((_WORD *)&v15[3].Next + 5) = v16;
        if ( Microsoft_Windows_Networking_CorrelationEnabled )
          ndisGenerateNetBufferListCorrelationIds((struct _NET_BUFFER_LIST *)v15, 1u);
        *((_BYTE *)&v15[12].Next + 8) = *((_BYTE *)PoolHandle + 40);
        v17 = *((_DWORD *)PoolHandle + 11);
        if ( (v17 & 2) == 0 )
          goto LABEL_15;
        v22 = 24LL;
        if ( (v17 & 1) != 0 )
          v22 = 35LL;
        v23 = &v15[v22];
        v15[1].Next = v23;
        v23->Next = 0LL;
        *((_WORD *)&v15[1].Next->Next + 4) = *((_WORD *)PoolHandle + 21);
        *((_WORD *)&v15[1].Next->Next + 5) = *((_WORD *)PoolHandle + 21);
        if ( *((_WORD *)PoolHandle + 21) >= ContextSize )
        {
          v18 = (struct _NET_BUFFER_LIST *)v15;
          *((_WORD *)&v15[1].Next->Next + 5) -= ContextSize;
        }
        else
        {
LABEL_15:
          if ( ContextSize )
          {
            if ( NdisAllocateNetBufferListContext(
                   (PNET_BUFFER_LIST)v15,
                   ContextSize,
                   ContextBackFill,
                   *((_DWORD *)PoolHandle + 9)) )
            {
              NdisFreeNetBufferList((PNET_BUFFER_LIST)v15);
              v15 = 0LL;
            }
            else
            {
              *((_DWORD *)&v15[8].Next + 2) |= 0x400u;
            }
          }
          v18 = (struct _NET_BUFFER_LIST *)v15;
          if ( !v15 )
            return v18;
        }
        memset(&v15[24], 0, 0xB0uLL);
        v19 = DataOffset;
        *((_DWORD *)&v15[26].Next + 2) = DataOffset;
        *((_DWORD *)&v15[25].Next + 2) = DataLength;
        v15[26].Next = (_SLIST_ENTRY *)MdlChain;
        for ( *((_QWORD *)&v15[27].Next + 1) = PoolHandle; MdlChain; v19 -= ByteCount )
        {
          ByteCount = MdlChain->ByteCount;
          if ( v19 < ByteCount )
            break;
          MdlChain = MdlChain->Next;
        }
        *((_QWORD *)&v15[24].Next + 1) = MdlChain;
        LODWORD(v15[25].Next) = v19;
        *((_QWORD *)&v15->Next + 1) = v15 + 24;
        if ( *(int *)ndisNblTrackerMode >= 3 )
          ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v15, 0LL, 3u, 0LL, 0);
        return v18;
      }
      return 0LL;
    }
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", PoolHandle);
    return 0LL;
  }
  else
  {
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool is NULL\n");
    return 0LL;
  }
}
