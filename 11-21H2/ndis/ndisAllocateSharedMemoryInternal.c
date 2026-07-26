/*
 * XREFs of ndisAllocateSharedMemoryInternal @ 0x1C00C7534
 * Callers:
 *     NdisAllocateSharedMemory @ 0x1C00C9070 (NdisAllocateSharedMemory.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 */

__int64 __fastcall ndisAllocateSharedMemoryInternal(_QWORD *a1, _NDIS_SHARED_MEMORY_PARAMETERS *a2, _QWORD *a3)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // r15
  __int64 v4; // rsi
  __int64 v5; // r12
  unsigned int v6; // eax
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // r13
  int v9; // esi
  __int64 Pool2; // rax
  _QWORD *v11; // rbx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  unsigned int PreferredNode; // esi
  __int128 v16; // xmm1
  USHORT HighestNodeNumber; // ax
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  int (__fastcall *AllocateSharedMemoryHandler)(void *, _NDIS_SHARED_MEMORY_PARAMETERS *, void **); // rax
  void *AllocateSharedMemoryContext; // rcx
  __int64 v23; // rax
  void *ContiguousNodeMemory; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  _LIST_ENTRY *p_SharedMemoryBlockList; // rax
  _LIST_ENTRY *Flink; // rcx
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  __int64 v33; // rdx
  KIRQL v34; // dl
  char v36; // [rsp+30h] [rbp-50h]
  KIRQL NewIrql[3]; // [rsp+31h] [rbp-4Fh] BYREF
  USHORT Count[6]; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 v39; // [rsp+40h] [rbp-40h]
  _QWORD *v40; // [rsp+48h] [rbp-38h]
  _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-30h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-20h] BYREF

  v3 = (struct _NDIS_MINIPORT_BLOCK *)a1[1];
  v4 = a1[3];
  v5 = a1[2];
  v6 = a2->SGListBufferLength + 184;
  v40 = a3;
  v39 = v4;
  NewIrql[0] = 0;
  v36 = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  MiniportSGDmaBlock = v3->MiniportSGDmaBlock;
  if ( v6 >= 0xB8 )
  {
    Pool2 = ExAllocatePool2(64LL, v6, 1650738254);
    v11 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
      v9 = -1073741670;
      goto LABEL_46;
    }
    v12 = *(_OWORD *)&a2->Header.Type;
    *(_QWORD *)(Pool2 + 56) = v3;
    v13 = *(_OWORD *)&a2->SharedMemoryHandle;
    *(_QWORD *)(Pool2 + 64) = v5;
    *(_OWORD *)(Pool2 + 112) = v12;
    *(_QWORD *)(Pool2 + 72) = v4;
    v14 = *(_OWORD *)&a2->Length;
    PreferredNode = a2->PreferredNode;
    *(_OWORD *)(Pool2 + 128) = v13;
    v16 = *(_OWORD *)&a2->SGListBufferLength;
    *(_OWORD *)(Pool2 + 144) = v14;
    *(_QWORD *)&v14 = *(_QWORD *)&a2->VPortId;
    *(_OWORD *)(Pool2 + 160) = v16;
    *(_QWORD *)(Pool2 + 176) = v14;
    *(_QWORD *)(Pool2 + 168) = Pool2 + 184;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    if ( PreferredNode != 0x80000000 )
    {
      if ( PreferredNode <= HighestNodeNumber )
      {
        Count[0] = 0;
        KeQueryNodeActiveAffinity(PreferredNode, &Affinity, Count);
        if ( Count[0] )
        {
          v36 = 1;
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        }
      }
      else
      {
        PreferredNode = 0x80000000;
      }
    }
    if ( a2->QueueId && !v5 && (v19 = *(_QWORD *)(v39 + 72)) != 0 && *(_QWORD *)(v19 + 776) )
    {
      v11[10] = *(_QWORD *)(v19 + 784);
      v20 = *(_QWORD *)(v19 + 792);
      v11[11] = v20;
      v9 = (*(__int64 (__fastcall **)(__int64, _NDIS_SHARED_MEMORY_PARAMETERS *, _QWORD *))(v19 + 776))(
             v20,
             a2,
             v11 + 12);
      if ( v9 < 0 )
        goto LABEL_19;
      if ( (a2->Flags & 1) != 0 && a2->SGListBuffer->NumberOfElements > 1 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD))v11[10])(v11[11], v11[12]);
LABEL_18:
        v9 = -1073741670;
        goto LABEL_19;
      }
      memmove((void *)v11[21], a2->SGListBuffer, a2->SGListBufferLength);
      *((_DWORD *)v11 + 12) |= 4u;
    }
    else
    {
      AllocateSharedMemoryHandler = v3->AllocateSharedMemoryHandler;
      if ( AllocateSharedMemoryHandler )
      {
        v11[10] = v3->FreeSharedMemoryHandler;
        AllocateSharedMemoryContext = v3->AllocateSharedMemoryContext;
        v11[11] = AllocateSharedMemoryContext;
        v9 = AllocateSharedMemoryHandler(AllocateSharedMemoryContext, a2, (void **)v11 + 12);
        if ( v9 >= 0 )
        {
          if ( (a2->Flags & 1) != 0 && a2->SGListBuffer->NumberOfElements > 1 )
          {
            v3->FreeSharedMemoryHandler((void *)v11[11], (void *)v11[12]);
            goto LABEL_18;
          }
          memmove((void *)v11[21], a2->SGListBuffer, a2->SGListBufferLength);
          *((_DWORD *)v11 + 12) |= 8u;
        }
      }
      else if ( MiniportSGDmaBlock )
      {
        LOBYTE(v18) = 1;
        v23 = (__int64)MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->AllocateCommonBuffer(
                         MiniportSGDmaBlock->DmaAdapterObject,
                         a2->Length,
                         (_LARGE_INTEGER *)v11 + 13,
                         v18);
        v9 = 0;
        a2->VirtualAddress = (void *)v23;
        if ( !v23 )
          goto LABEL_18;
        _InterlockedIncrement(&MiniportSGDmaBlock->DmaAdapterRefCount);
        *((_DWORD *)v11 + 12) |= 1u;
      }
      else
      {
        ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(a2->Length, 0LL, -1LL, 0LL, 4, PreferredNode);
        v9 = 0;
        a2->VirtualAddress = ContiguousNodeMemory;
        if ( !ContiguousNodeMemory )
          goto LABEL_18;
        PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
        *((_DWORD *)v11 + 12) |= 2u;
        v11[13] = PhysicalAddress.QuadPart;
      }
    }
LABEL_19:
    if ( v36 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    if ( v9 < 0 )
    {
      ExFreePoolWithTag(v11, 0);
      if ( v9 != -1073741670 )
        return (unsigned int)v9;
LABEL_46:
      _InterlockedExchangeAdd64(&qword_1C00EE840, a2->Length);
      return (unsigned int)v9;
    }
    v11[19] = a2->VirtualAddress;
    if ( (v11[6] & 3) != 0 )
    {
      if ( a2->SGListBufferLength >= 0x28 )
      {
        a2->SGListBuffer->NumberOfElements = 1;
        a2->SGListBuffer->Elements[0].Address.QuadPart = v11[13];
        a2->SGListBuffer->Elements[0].Length = a2->Length;
      }
      a2->SharedMemoryHandle = 0LL;
    }
    _InterlockedExchangeAdd64(&qword_1C00EE838, a2->Length);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, NewIrql);
    p_SharedMemoryBlockList = &v3->SharedMemoryBlockList;
    Flink = v3->SharedMemoryBlockList.Flink;
    if ( Flink->Blink == &v3->SharedMemoryBlockList )
    {
      *v11 = Flink;
      v11[1] = p_SharedMemoryBlockList;
      Flink->Blink = (_LIST_ENTRY *)v11;
      p_SharedMemoryBlockList->Flink = (_LIST_ENTRY *)v11;
      if ( v5 )
      {
        v28 = (_QWORD *)(v5 + 760);
        v29 = *(_QWORD *)(v5 + 760);
        v30 = v11 + 2;
        if ( *(_QWORD *)(v29 + 8) != v5 + 760 )
          goto LABEL_44;
        *v30 = v29;
        v11[3] = v28;
        *(_QWORD *)(v29 + 8) = v30;
        *v28 = v30;
      }
      v31 = v11 + 4;
      v32 = (_QWORD *)(v39 + 88);
      v33 = *(_QWORD *)(v39 + 88);
      if ( *(_QWORD *)(v33 + 8) == v39 + 88 )
      {
        *v31 = v33;
        v11[5] = v32;
        *(_QWORD *)(v33 + 8) = v31;
        v34 = NewIrql[0];
        *v32 = v31;
        v3->MiniportThread = 0LL;
        KeReleaseSpinLock(&v3->Lock, v34);
        *v40 = v11;
        return (unsigned int)v9;
      }
    }
LABEL_44:
    __fastfail(3u);
  }
  return (unsigned int)-1073741811;
}
