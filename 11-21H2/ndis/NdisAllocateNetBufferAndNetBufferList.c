/*
 * XREFs of NdisAllocateNetBufferAndNetBufferList @ 0x1C0004090
 * Callers:
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C005FE70 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C006E218 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C006EBA0 (-ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ndisCopyPeriodicReceiveNbl @ 0x1C00A313C (ndisCopyPeriodicReceiveNbl.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00AAEA0 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C00ADE60 (NdisAllocateFragmentNetBufferList.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1C00AE280 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     ndisPplLazyInitializeLookaside @ 0x1C000439C (ndisPplLazyInitializeLookaside.c)
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0004980 (--1KAcquireSpinLock@@QEAA@XZ.c)
 *     NdisFreeNetBufferList @ 0x1C0005150 (NdisFreeNetBufferList.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     NdisAllocateNetBufferListContext @ 0x1C003A9D0 (NdisAllocateNetBufferListContext.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00AE8FC (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
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
  unsigned int v11; // r15d
  unsigned __int64 v12; // rax
  char *v13; // rsi
  _SLIST_HEADER *v14; // rcx
  PSLIST_ENTRY v15; // rbx
  __int16 v16; // r12
  _SLIST_ENTRY *v17; // rsi
  int v18; // eax
  ULONG v19; // ecx
  ULONG ByteCount; // eax
  unsigned __int64 v22; // rax
  _SLIST_ENTRY *Pool2; // rax
  KIRQL v24; // al
  _QWORD *v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // rdx
  KIRQL v28; // al
  __int64 v29; // r8
  _SLIST_HEADER *v30; // rcx
  bool v31; // zf
  _SLIST_ENTRY *v32; // rax
  KAcquireSpinLock v33; // [rsp+30h] [rbp-38h] BYREF

  if ( PoolHandle )
  {
    if ( (*((_DWORD *)PoolHandle + 15) & 5) == 1 )
    {
      if ( (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) != 0 )
        return 0LL;
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
          goto LABEL_8;
        if ( ExQueryDepthSList(*((PSLIST_HEADER *)v13 + 25)) >= 0xAu )
        {
          v33.m_lock = (KSpinLockBase *)(v13 + 208);
          v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13 + 26);
          v29 = *((_QWORD *)v13 + 24);
          *((_QWORD *)v13 + 24) = *((_QWORD *)v13 + 25);
          *((_QWORD *)v13 + 25) = v29;
          KeReleaseSpinLock((PKSPIN_LOCK)v13 + 26, v28);
          v30 = (_SLIST_HEADER *)*((_QWORD *)v13 + 24);
          v33.m_oldIrql = -1;
          v15 = ExpInterlockedPopEntrySList(v30);
          KAcquireSpinLock::~KAcquireSpinLock(&v33);
          if ( v15 )
            goto LABEL_8;
        }
        ++*((_DWORD *)v13 + 6);
      }
      ++*((_DWORD *)PoolHandle + 37);
      v15 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
      if ( !v15 )
      {
        v22 = *((unsigned int *)PoolHandle + 43);
        ++*((_DWORD *)PoolHandle + 38);
        if ( v22 + 32 < v22 )
          return 0LL;
        Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(66LL, v22 + 32, *((unsigned int *)PoolHandle + 42));
        if ( !Pool2 )
          return 0LL;
        Pool2->Next = 0LL;
        v15 = Pool2 + 2;
        if ( Pool2 == (_SLIST_ENTRY *)-32LL )
          return 0LL;
        Pool2->Next = (_SLIST_ENTRY *)PoolHandle;
        v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
        v25 = (char *)PoolHandle + 16;
        v26 = *((_QWORD *)PoolHandle + 2);
        v27 = &v15[-2].Next + 1;
        if ( *(NDIS_HANDLE *)(v26 + 8) != (char *)PoolHandle + 16 )
          __fastfail(3u);
        v27[1] = v25;
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
        *v25 = v27;
        KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v24);
        v11 = 0;
      }
      *((_DWORD *)&v15[-1].Next + 2) = Number;
LABEL_8:
      v16 = *((_WORD *)&v15[3].Next + 5);
      v17 = v15;
      memset(v15, 0, 8 * (v11 ^ 1LL) + 368);
      v15[2].Next = (_SLIST_ENTRY *)PoolHandle;
      *((_DWORD *)&v15[8].Next + 2) = 256;
      if ( v11 )
        *((_WORD *)&v15[3].Next + 5) = v16;
      if ( Microsoft_Windows_Networking_CorrelationEnabled )
        ndisGenerateNetBufferListCorrelationIds((struct _NET_BUFFER_LIST *)v15, 1u);
      *((_BYTE *)&v15[12].Next + 8) = *((_BYTE *)PoolHandle + 32);
      v18 = *((_DWORD *)PoolHandle + 15);
      if ( (v18 & 2) == 0 )
        goto LABEL_13;
      v31 = (v18 & 1) == 0;
      v32 = v15 + 35;
      if ( v31 )
        v32 = v15 + 24;
      v15[1].Next = v32;
      v32->Next = 0LL;
      *((_WORD *)&v15[1].Next->Next + 4) = *((_WORD *)PoolHandle + 17);
      *((_WORD *)&v15[1].Next->Next + 5) = *((_WORD *)PoolHandle + 17);
      if ( *((_WORD *)PoolHandle + 17) >= ContextSize )
      {
        *((_WORD *)&v15[1].Next->Next + 5) -= ContextSize;
      }
      else
      {
LABEL_13:
        if ( ContextSize )
        {
          if ( NdisAllocateNetBufferListContext(
                 (PNET_BUFFER_LIST)v15,
                 ContextSize,
                 ContextBackFill,
                 *((_DWORD *)PoolHandle + 14)) )
          {
            NdisFreeNetBufferList((PNET_BUFFER_LIST)v15);
            v17 = 0LL;
          }
          else
          {
            *((_DWORD *)&v15[8].Next + 2) |= 0x400u;
          }
        }
        v15 = v17;
        if ( !v17 )
          return (PNET_BUFFER_LIST)v15;
      }
      memset(&v15[24], 0, 0xB0uLL);
      v19 = DataOffset;
      *((_DWORD *)&v15[26].Next + 2) = DataOffset;
      *((_DWORD *)&v15[25].Next + 2) = DataLength;
      v15[26].Next = (_SLIST_ENTRY *)MdlChain;
      *((_QWORD *)&v15[27].Next + 1) = PoolHandle;
      while ( MdlChain )
      {
        ByteCount = MdlChain->ByteCount;
        if ( v19 < ByteCount )
          break;
        MdlChain = MdlChain->Next;
        v19 -= ByteCount;
      }
      *((_QWORD *)&v15[24].Next + 1) = MdlChain;
      LODWORD(v15[25].Next) = v19;
      *((_QWORD *)&v15->Next + 1) = v15 + 24;
      if ( *(int *)ndisNblTrackerMode >= 3 )
        ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v15, 0LL, 3u, 0LL, 0);
      return (PNET_BUFFER_LIST)v15;
    }
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", PoolHandle);
  }
  else
  {
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool is NULL\n");
  }
  return 0LL;
}
