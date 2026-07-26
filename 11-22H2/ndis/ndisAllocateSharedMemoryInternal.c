/*
 * XREFs of ndisAllocateSharedMemoryInternal @ 0x1C00CC290
 * Callers:
 *     NdisAllocateSharedMemory @ 0x1C00CDD40 (NdisAllocateSharedMemory.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 */

__int64 __fastcall ndisAllocateSharedMemoryInternal(
        _QWORD *a1,
        __int64 a2,
        _NDIS_SHARED_MEMORY_PARAMETERS *a3,
        _QWORD *a4)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // r15
  __int64 v5; // rsi
  __int64 v6; // r12
  unsigned int v7; // eax
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // r13
  int v10; // esi
  __int64 Pool2; // rax
  _QWORD *v12; // rbx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  unsigned int PreferredNode; // esi
  __int128 v17; // xmm1
  USHORT HighestNodeNumber; // ax
  __int64 v19; // r9
  unsigned int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rcx
  _LIST_ENTRY *p_SharedMemoryBlockList; // rax
  _LIST_ENTRY *Flink; // rcx
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  __int64 v30; // rdx
  KIRQL v31; // dl
  int (__fastcall *AllocateSharedMemoryHandler)(void *, _NDIS_SHARED_MEMORY_PARAMETERS *, void **); // rax
  void *AllocateSharedMemoryContext; // rcx
  _DMA_ADAPTER *DmaAdapterObject; // rcx
  char v35; // al
  _DMA_OPERATIONS *DmaOperations; // rdx
  __int64 v37; // rax
  void *ContiguousNodeMemory; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  char v41; // [rsp+40h] [rbp-29h]
  KIRQL NewIrql[3]; // [rsp+41h] [rbp-28h] BYREF
  USHORT Count[6]; // [rsp+44h] [rbp-25h] BYREF
  __int64 v44; // [rsp+50h] [rbp-19h]
  _QWORD *v45; // [rsp+58h] [rbp-11h]
  _GROUP_AFFINITY Affinity; // [rsp+60h] [rbp-9h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+70h] [rbp+7h] BYREF

  v4 = (struct _NDIS_MINIPORT_BLOCK *)a1[1];
  v5 = a1[3];
  v6 = a1[2];
  v7 = a3->SGListBufferLength + 184;
  v45 = a4;
  v44 = v5;
  NewIrql[0] = 0;
  v41 = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  MiniportSGDmaBlock = v4->MiniportSGDmaBlock;
  if ( v7 >= 0xB8 )
  {
    Pool2 = ExAllocatePool2(64LL, v7, 1650738254);
    v12 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
      v10 = -1073741670;
      goto LABEL_52;
    }
    v13 = *(_OWORD *)&a3->Header.Type;
    *(_QWORD *)(Pool2 + 56) = v4;
    v14 = *(_OWORD *)&a3->SharedMemoryHandle;
    *(_QWORD *)(Pool2 + 64) = v6;
    *(_OWORD *)(Pool2 + 112) = v13;
    *(_QWORD *)(Pool2 + 72) = v5;
    v15 = *(_OWORD *)&a3->Length;
    PreferredNode = a3->PreferredNode;
    *(_OWORD *)(Pool2 + 128) = v14;
    v17 = *(_OWORD *)&a3->SGListBufferLength;
    *(_OWORD *)(Pool2 + 144) = v15;
    *(_QWORD *)&v15 = *(_QWORD *)&a3->VPortId;
    *(_OWORD *)(Pool2 + 160) = v17;
    *(_QWORD *)(Pool2 + 176) = v15;
    *(_QWORD *)(Pool2 + 168) = Pool2 + 184;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    v20 = 0x80000000;
    if ( PreferredNode != 0x80000000 )
    {
      if ( PreferredNode > HighestNodeNumber
        || (Count[0] = 0, KeQueryNodeActiveAffinity(PreferredNode, &Affinity, Count), v20 = PreferredNode, !Count[0]) )
      {
LABEL_10:
        v10 = 0;
        if ( a3->QueueId && !v6 && (v21 = *(_QWORD *)(v44 + 72)) != 0 && *(_QWORD *)(v21 + 776) )
        {
          v12[10] = *(_QWORD *)(v21 + 784);
          v22 = *(_QWORD *)(v21 + 792);
          v12[11] = v22;
          v10 = (*(__int64 (__fastcall **)(__int64, _NDIS_SHARED_MEMORY_PARAMETERS *, _QWORD *))(v21 + 776))(
                  v22,
                  a3,
                  v12 + 12);
          if ( v10 < 0 )
            goto LABEL_19;
          if ( (a3->Flags & 1) != 0 && a3->SGListBuffer->NumberOfElements > 1 )
          {
            ((void (__fastcall *)(_QWORD, _QWORD))v12[10])(v12[11], v12[12]);
LABEL_18:
            v10 = -1073741670;
            goto LABEL_19;
          }
          memmove((void *)v12[21], a3->SGListBuffer, a3->SGListBufferLength);
          *((_DWORD *)v12 + 12) |= 4u;
        }
        else
        {
          AllocateSharedMemoryHandler = v4->AllocateSharedMemoryHandler;
          if ( AllocateSharedMemoryHandler )
          {
            v12[10] = v4->FreeSharedMemoryHandler;
            AllocateSharedMemoryContext = v4->AllocateSharedMemoryContext;
            v12[11] = AllocateSharedMemoryContext;
            v10 = AllocateSharedMemoryHandler(AllocateSharedMemoryContext, a3, (void **)v12 + 12);
            if ( v10 >= 0 )
            {
              if ( (a3->Flags & 1) != 0 && a3->SGListBuffer->NumberOfElements > 1 )
              {
                v4->FreeSharedMemoryHandler((void *)v12[11], (void *)v12[12]);
                goto LABEL_18;
              }
              memmove((void *)v12[21], a3->SGListBuffer, a3->SGListBufferLength);
              *((_DWORD *)v12 + 12) |= 8u;
            }
          }
          else if ( MiniportSGDmaBlock )
          {
            DmaAdapterObject = MiniportSGDmaBlock->DmaAdapterObject;
            if ( !ndisDmaUseNumaAwareAllocator || (v35 = 1, (MiniportSGDmaBlock->Flags & 2) == 0) )
              v35 = 0;
            DmaOperations = DmaAdapterObject->DmaOperations;
            if ( v35 )
            {
              v37 = (__int64)DmaOperations->AllocateCommonBufferEx(
                               DmaAdapterObject,
                               0LL,
                               a3->Length,
                               (_LARGE_INTEGER *)v12 + 13,
                               1u,
                               a3->PreferredNode);
            }
            else
            {
              LOBYTE(v19) = 1;
              v37 = (__int64)DmaOperations->AllocateCommonBuffer(
                               DmaAdapterObject,
                               a3->Length,
                               (_LARGE_INTEGER *)v12 + 13,
                               v19);
            }
            a3->VirtualAddress = (void *)v37;
            if ( !v37 )
              goto LABEL_18;
            _InterlockedIncrement(&MiniportSGDmaBlock->DmaAdapterRefCount);
            *((_DWORD *)v12 + 12) |= 1u;
          }
          else
          {
            ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(a3->Length, 0LL, -1LL, 0LL, 4, v20);
            a3->VirtualAddress = ContiguousNodeMemory;
            if ( !ContiguousNodeMemory )
              goto LABEL_18;
            PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
            *((_DWORD *)v12 + 12) |= 2u;
            v12[13] = PhysicalAddress.QuadPart;
          }
        }
LABEL_19:
        if ( v41 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        if ( v10 < 0 )
        {
          ExFreePoolWithTag(v12, 0);
          if ( v10 != -1073741670 )
            return (unsigned int)v10;
LABEL_52:
          _InterlockedExchangeAdd64(&qword_1C00F7910, a3->Length);
          return (unsigned int)v10;
        }
        v12[19] = a3->VirtualAddress;
        if ( (v12[6] & 3) != 0 )
        {
          if ( a3->SGListBufferLength >= 0x28 )
          {
            a3->SGListBuffer->NumberOfElements = 1;
            a3->SGListBuffer->Elements[0].Address.QuadPart = v12[13];
            a3->SGListBuffer->Elements[0].Length = a3->Length;
          }
          a3->SharedMemoryHandle = 0LL;
        }
        _InterlockedExchangeAdd64(&qword_1C00F7908, a3->Length);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, NewIrql);
        p_SharedMemoryBlockList = &v4->SharedMemoryBlockList;
        Flink = v4->SharedMemoryBlockList.Flink;
        if ( Flink->Blink == &v4->SharedMemoryBlockList )
        {
          *v12 = Flink;
          v12[1] = p_SharedMemoryBlockList;
          Flink->Blink = (_LIST_ENTRY *)v12;
          p_SharedMemoryBlockList->Flink = (_LIST_ENTRY *)v12;
          if ( v6 )
          {
            v25 = (_QWORD *)(v6 + 760);
            v26 = *(_QWORD *)(v6 + 760);
            v27 = v12 + 2;
            if ( *(_QWORD *)(v26 + 8) != v6 + 760 )
              goto LABEL_50;
            *v27 = v26;
            v12[3] = v25;
            *(_QWORD *)(v26 + 8) = v27;
            *v25 = v27;
          }
          v28 = v12 + 4;
          v29 = (_QWORD *)(v44 + 88);
          v30 = *(_QWORD *)(v44 + 88);
          if ( *(_QWORD *)(v30 + 8) == v44 + 88 )
          {
            *v28 = v30;
            v12[5] = v29;
            *(_QWORD *)(v30 + 8) = v28;
            v31 = NewIrql[0];
            *v29 = v28;
            v4->MiniportThread = 0LL;
            KeReleaseSpinLock(&v4->Lock, v31);
            *v45 = v12;
            return (unsigned int)v10;
          }
        }
LABEL_50:
        __fastfail(3u);
      }
      v41 = 1;
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    }
    v20 = PreferredNode;
    goto LABEL_10;
  }
  return (unsigned int)-1073741811;
}
