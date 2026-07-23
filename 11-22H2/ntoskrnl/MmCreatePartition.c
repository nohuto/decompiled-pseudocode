/*
 * XREFs of MmCreatePartition @ 0x1403ABECC
 * Callers:
 *     DifGetAvailableSystemPages @ 0x1405F8684 (DifGetAvailableSystemPages.c)
 *     PspAllocatePartition @ 0x14085A080 (PspAllocatePartition.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     MiGetPartitionLargePageListCount @ 0x140376234 (MiGetPartitionLargePageListCount.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x1403A0C40 (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403AE98C (MiInitializeWorkingSetManagerParameters.c)
 *     MiDeletePartition @ 0x14062941C (MiDeletePartition.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x140792770 (ExAllocateCacheAwareRundownProtection.c)
 *     MiInitializeMemoryEvents @ 0x14081E318 (MiInitializeMemoryEvents.c)
 *     MiCreatePfnBitMaps @ 0x14081E81C (MiCreatePfnBitMaps.c)
 *     MiInitializePartition @ 0x140838DF0 (MiInitializePartition.c)
 *     MiAllocatePartitionId @ 0x140A2F8F0 (MiAllocatePartitionId.c)
 *     MiInitializePartitionThreads @ 0x140A2FB50 (MiInitializePartitionThreads.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmCreatePartition(_SLIST_HEADER **a1, char a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // r14
  unsigned int PartitionLargePageListCount; // eax
  __int64 v7; // r11
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // r12
  SIZE_T v11; // r14
  _SLIST_HEADER *Pool; // rax
  _SLIST_HEADER *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r14
  unsigned __int16 PartitionId; // ax
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  int v22; // edi

  if ( (a2 & 1) != 0 )
  {
    *a1 = (_SLIST_HEADER *)&MiSystemPartition;
    result = 0LL;
    qword_140C6B5C8 = (__int64)a1;
    return result;
  }
  v5 = 16LL * (unsigned int)(2 * dword_140C65BFC)
     + ((88LL * (unsigned int)(6 * dword_140C65BFC) + 25408LL * (unsigned __int16)KeNumberNodes + 22031) & 0xFFFFFFFFFFFFFFF0uLL);
  PartitionLargePageListCount = MiGetPartitionLargePageListCount();
  v8 = 24576 * v7;
  v9 = v7 * (16LL * (unsigned int)dword_140C65C80[0] + 8);
  v10 = 24LL * PartitionLargePageListCount;
  v11 = 24576 * v7 + ((v10 + v9 + 15 + v5) & 0xFFFFFFFFFFFFFFF0uLL);
  Pool = (_SLIST_HEADER *)MiAllocatePool(64, v11, 0x6150694Du);
  v13 = Pool;
  if ( !Pool )
    return 3221225626LL;
  qword_140C67ED8 = v11;
  Pool[1].Alignment = (unsigned __int64)&Pool[1376];
  v14 = (__int64)&Pool[1588 * (unsigned __int16)KeNumberNodes + 1376];
  Pool[156].Alignment = v14;
  v15 = v14 + 88LL * (unsigned int)(3 * dword_140C65BFC);
  Pool[156].Region = v15;
  v16 = (v15 + 88LL * (unsigned int)(3 * dword_140C65BFC) + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  Pool[425].Region = v16;
  v17 = v16 + 16LL * (unsigned int)dword_140C65BFC;
  Pool[426].Alignment = v17;
  v18 = v17 + 16LL * (unsigned int)dword_140C65BFC;
  v13[12].Region = (unsigned __int64)a1;
  v13[1002].Region = v18;
  v19 = v18 + v10;
  v13[1013].Alignment = v18 + v10;
  PartitionId = MiAllocatePartitionId(v13);
  if ( !PartitionId )
  {
    ExFreePoolWithTag(v13, 0);
    return 3221225495LL;
  }
  MiInitializePartition(v13, PartitionId);
  MiPopulateFreeKernelShadowStackCacheEntries(v13, (_SLIST_ENTRY *)((v19 + v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v8);
  if ( !(unsigned int)MiInitializeMemoryEvents(v13)
    || !(unsigned int)MiCreatePfnBitMaps(v13, 0LL)
    || !(unsigned int)MiInitializeWorkingSetManagerParameters(v13)
    || (CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x7270694Du),
        (v13[152].Alignment = (unsigned __int64)CacheAwareRundownProtection) == 0) )
  {
    v22 = -1073741670;
    goto LABEL_14;
  }
  v22 = MiInitializePartitionThreads(v13);
  if ( v22 < 0 )
  {
LABEL_14:
    MiDeletePartition(v13);
    goto LABEL_15;
  }
  *a1 = v13;
LABEL_15:
  if ( (a2 & 2) != 0 )
  {
    *((_DWORD *)&v13->HeaderX64 + 1) |= 0x80u;
    v13[1059] = 0LL;
    v13[1060] = 0LL;
    v13[1061] = 0LL;
    v13[1062].Alignment = 0LL;
  }
  return (unsigned int)v22;
}
