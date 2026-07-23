/*
 * XREFs of MmAllocateSecureKernelPages @ 0x140657CFC
 * Callers:
 *     PspIumAllocatePhysicalPages @ 0x1405A6070 (PspIumAllocatePhysicalPages.c)
 * Callees:
 *     MiGetSlabPage @ 0x14023BE40 (MiGetSlabPage.c)
 *     MiUpdatePageFileHighInPte @ 0x1402858CC (MiUpdatePageFileHighInPte.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiInitializePageColorBase @ 0x1402E1920 (MiInitializePageColorBase.c)
 *     MiAcquireNonPagedResources @ 0x1402E45A4 (MiAcquireNonPagedResources.c)
 *     MiReplenishSlabAllocator @ 0x1402E6D54 (MiReplenishSlabAllocator.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1402F8A30 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiPartitionObjectToPartition @ 0x1402F8D34 (MiPartitionObjectToPartition.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     MiCheckSlabPfnBitmap @ 0x1403249C0 (MiCheckSlabPfnBitmap.c)
 *     MiInitializeMdlPfn @ 0x14038C400 (MiInitializeMdlPfn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void ***__fastcall MmAllocateSecureKernelPages(
        void **BugCheckParameter2,
        unsigned __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned __int64 v5; // r14
  void **v6; // r13
  unsigned __int64 v7; // rsi
  signed __int32 v8; // eax
  unsigned int v9; // r12d
  void ***result; // rax
  void ***v11; // rbp
  _QWORD *Pool; // rax
  _QWORD *PartitionNodePagesForMdl; // r15
  _QWORD *v14; // r13
  __int64 v15; // r12
  __int64 *v16; // r14
  __int64 v17; // rax
  __int64 SlabPage; // rax
  __int64 v19; // r13
  unsigned __int8 v20; // al
  __int64 v21; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf
  __int64 v27; // rdx
  __int64 v28; // r14
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rax
  struct _KPRCB *v31; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v33; // eax
  struct _KPRCB *v34; // r8
  __int64 v35; // rdx
  signed __int32 v36; // eax
  char v37[4]; // [rsp+40h] [rbp-88h] BYREF
  int v38; // [rsp+44h] [rbp-84h]
  unsigned int v39; // [rsp+48h] [rbp-80h]
  _QWORD *v40; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-70h]
  unsigned __int64 v42; // [rsp+60h] [rbp-68h]
  __int128 v43; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int8 v47; // [rsp+E8h] [rbp+20h]

  v40 = 0LL;
  v5 = a2;
  v6 = BugCheckParameter2;
  v37[0] = 0;
  v41 = 0LL;
  v43 = 0LL;
  v7 = 0LL;
  *a5 = 0;
  MiInitializePageColorBase(0LL, 0, (__int64)&v43);
  v8 = _InterlockedExchangeAdd((volatile signed __int32 *)v43, 1u);
  v9 = DWORD2(v43) & v8 | HIDWORD(v43);
  v39 = v9;
  result = MiPartitionObjectToPartition(v6, 0, v37);
  v11 = result;
  if ( !result )
    return result;
  if ( (*((_DWORD *)result + 1) & 8) == 0 || (int)MiAcquireNonPagedResources((unsigned __int64)result, v5, 0LL, 2u) < 0 )
    goto LABEL_46;
  v7 = v5;
  Pool = MiAllocatePool(64, 8 * v5 + 48, 0x69646D4Du);
  PartitionNodePagesForMdl = Pool;
  if ( !Pool )
    goto LABEL_30;
  v14 = Pool + 6;
  v38 = 64;
  v15 = v5;
  v16 = Pool + 6;
  v42 = (unsigned __int64)&Pool[v15 + 6];
  if ( (unsigned __int64)(Pool + 6) < v42 )
  {
    v17 = a3;
    do
    {
      SlabPage = MiGetSlabPage((__int64)v11, *((_DWORD *)MmSlabTypeToMiSlabType + v17), v39, 10LL, (__int64 *)&v40);
      *v16 = SlabPage;
      if ( SlabPage == -1 )
      {
        if ( !v40 )
          break;
        while ( !(unsigned int)MiReplenishSlabAllocator(v40, (v15 * 8) >> 3) )
        {
          if ( v16 != PartitionNodePagesForMdl + 6 )
            goto LABEL_26;
          if ( (v38 & 0x40) == 0 )
            break;
          v38 &= ~0x40u;
        }
        --v16;
        ++v15;
      }
      else
      {
        v19 = 48 * SlabPage - 0x220000000000LL;
        v20 = MiLockPageInline(v19);
        v21 = *(_QWORD *)(v19 + 40);
        v47 = v20;
        *(_QWORD *)v19 = 0LL;
        *(_QWORD *)(v19 + 40) = v21 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFELL;
        *(_QWORD *)(v19 + 16) = ZeroPte;
        MiInitializeMdlPfn(v19, 512);
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v47 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << (v47 + 1));
            v26 = (v25 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v25;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v47);
        if ( (unsigned int)MiCheckSlabPfnBitmap(v19, 1LL, 1) )
        {
          v27 = 7LL;
        }
        else
        {
          --v7;
          v27 = 3LL;
          ++v41;
        }
        *(_QWORD *)(v19 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v19 + 16), v27);
      }
      v17 = a3;
      ++v16;
      --v15;
    }
    while ( (unsigned __int64)v16 < v42 );
LABEL_26:
    v14 = PartitionNodePagesForMdl + 6;
  }
  v28 = v16 - v14;
  if ( !v28 )
  {
    v5 = a2;
    v9 = v39;
    v6 = BugCheckParameter2;
LABEL_30:
    if ( !v7 )
      goto LABEL_44;
    MiReturnCommit((__int64)v11, v7);
    if ( v11 != (void ***)MiSystemPartition )
      goto LABEL_42;
    v31 = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)v31->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_42;
    if ( v7 + CachedResidentAvailable <= 0x100 && v7 < 0x80000 )
    {
      do
      {
        v33 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&v31->CachedResidentAvailable,
                v7 + CachedResidentAvailable,
                CachedResidentAvailable);
        v26 = (_DWORD)CachedResidentAvailable == v33;
        LODWORD(CachedResidentAvailable) = v33;
        if ( v26 )
          goto LABEL_43;
      }
      while ( v33 != -1 && v7 + v33 <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v31->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v7 += (int)CachedResidentAvailable - 192;
    }
    if ( v7 )
LABEL_42:
      _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 2160, v7);
LABEL_43:
    v7 = 0LL;
LABEL_44:
    if ( PartitionNodePagesForMdl )
      ExFreePoolWithTag(PartitionNodePagesForMdl, 0);
LABEL_46:
    PartitionNodePagesForMdl = (_QWORD *)MmAllocatePartitionNodePagesForMdlEx(
                                           0,
                                           -1,
                                           0LL,
                                           v5 << 12,
                                           1,
                                           v9 >> byte_140C65A8D,
                                           513,
                                           (ULONG_PTR)v6);
    goto LABEL_47;
  }
  v29 = v28 << 12;
  *PartitionNodePagesForMdl = 0LL;
  PartitionNodePagesForMdl[4] = 0LL;
  *((_WORD *)PartitionNodePagesForMdl + 4) = 8 * ((v29 >> 12) + 6);
  *((_WORD *)PartitionNodePagesForMdl + 5) = 2;
  v30 = v41;
  PartitionNodePagesForMdl[5] = (unsigned int)v29;
  _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 2235, v30);
  *a5 = 1;
LABEL_47:
  if ( v7 )
  {
    MiReturnCommit((__int64)v11, v7);
    if ( v11 != (void ***)MiSystemPartition )
      goto LABEL_59;
    v34 = KeGetCurrentPrcb();
    v35 = (int)v34->CachedResidentAvailable;
    if ( (_DWORD)v35 == -1 )
      goto LABEL_59;
    if ( v7 + v35 <= 0x100 && v7 < 0x80000 )
    {
      do
      {
        v36 = _InterlockedCompareExchange((volatile signed __int32 *)&v34->CachedResidentAvailable, v7 + v35, v35);
        v26 = (_DWORD)v35 == v36;
        LODWORD(v35) = v36;
        if ( v26 )
          goto LABEL_60;
      }
      while ( v36 != -1 && v7 + v36 <= 0x100 );
    }
    if ( (int)v35 > 192
      && (_DWORD)v35 == _InterlockedCompareExchange((volatile signed __int32 *)&v34->CachedResidentAvailable, 192, v35) )
    {
      v7 += (int)v35 - 192;
    }
    if ( v7 )
LABEL_59:
      _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 2160, v7);
  }
LABEL_60:
  if ( v37[0] )
    PsDereferencePartition((__int64)v11[25]);
  return (void ***)PartitionNodePagesForMdl;
}
