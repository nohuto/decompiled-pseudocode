/*
 * XREFs of MmAllocateNonChargedSecurePages @ 0x14065750C
 * Callers:
 *     PspIumAllocatePartitionState @ 0x1405A59A0 (PspIumAllocatePartitionState.c)
 *     PspIumReplenishPartitionPages @ 0x1405A6290 (PspIumReplenishPartitionPages.c)
 * Callees:
 *     MiGetSlabPage @ 0x14023BD50 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14026D240 (MiGetPage.c)
 *     MiUpdatePageFileHighInPte @ 0x14028551C (MiUpdatePageFileHighInPte.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiInitializePageColorBase @ 0x1402E1690 (MiInitializePageColorBase.c)
 *     MiAcquireNonPagedResources @ 0x1402E4314 (MiAcquireNonPagedResources.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiPartitionObjectToPartition @ 0x1402F8AA4 (MiPartitionObjectToPartition.c)
 *     PsDereferencePartition @ 0x1402F9C4C (PsDereferencePartition.c)
 *     MiCheckSlabPfnBitmap @ 0x140324550 (MiCheckSlabPfnBitmap.c)
 *     MiInitializeMdlPfn @ 0x140389D10 (MiInitializeMdlPfn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MmAllocateNonChargedSecurePages(void **a1, int a2, unsigned int *a3, __int64 *a4)
{
  void ***v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // ebp
  unsigned int v9; // r13d
  signed __int32 v10; // ecx
  unsigned int v11; // ebx
  __int64 SlabPage; // rax
  __int64 Page; // r14
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  __int64 updated; // rax
  __int64 *v23; // r15
  unsigned __int64 v24; // rbx
  struct _KPRCB *v25; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v27; // eax
  __int128 v28; // [rsp+30h] [rbp-48h] BYREF
  char v29; // [rsp+88h] [rbp+10h] BYREF
  __int64 *v30; // [rsp+98h] [rbp+20h]

  v30 = a4;
  v28 = 0LL;
  v29 = 0;
  v6 = MiPartitionObjectToPartition(a1, 1, &v29);
  v7 = (__int64)v6;
  if ( a2 && (int)MiAcquireNonPagedResources((unsigned __int64)v6, *a3, 0LL, 2u) < 0 )
    *a3 = 0;
  v8 = 0;
  MiInitializePageColorBase(0LL, 0, (__int64)&v28);
  if ( *a3 )
  {
    do
    {
      v9 = 9;
      v10 = _InterlockedExchangeAdd((volatile signed __int32 *)v28, 1u);
      v11 = DWORD2(v28) & v10 | HIDWORD(v28);
      if ( (*(_DWORD *)(v7 + 4) & 8) == 0
        || (SlabPage = MiGetSlabPage(v7, 2u, v11, 10LL, (__int64 *)0xFFFFFFFFFFFFFFFFLL), Page = SlabPage,
                                                                                          SlabPage == -1) )
      {
        Page = MiGetPage(v7, v11, 0x200u);
        if ( Page == -1 )
          break;
      }
      else
      {
        v9 = 11;
        if ( (unsigned int)MiCheckSlabPfnBitmap(48 * SlabPage - 0x220000000000LL, 1LL, 1) )
          v9 = 15;
      }
      v14 = 48 * Page - 0x220000000000LL;
      *(_QWORD *)(v14 + 16) = ZeroPte;
      v15 = *(_QWORD *)(v14 + 40) & 0x7FFFFF0000000000LL;
      *(_QWORD *)v14 = 0LL;
      *(_QWORD *)(v14 + 40) = v15 | 0x3FFFFFFFFELL;
      if ( !a2 )
        _InterlockedIncrement64((volatile signed __int64 *)(v7 + 456));
      v16 = (unsigned __int8)MiLockPageInline(48 * Page - 0x220000000000LL);
      MiInitializeMdlPfn(48 * Page - 0x220000000000LL, 131584);
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v16 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
          v21 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v16);
      updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v14 + 16), v9);
      v23 = v30;
      ++v8;
      *(_QWORD *)(v14 + 16) = updated;
      *v23 = Page;
      v30 = v23 + 1;
    }
    while ( v8 < *a3 );
  }
  if ( a2 && v8 < *a3 )
  {
    v24 = *a3 - v8;
    MiReturnCommit(v7, v24);
    if ( (unsigned __int16 *)v7 == MiSystemPartition )
    {
      v25 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v25->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( v24 + CachedResidentAvailable <= 0x100 && v24 < 0x80000 )
        {
          do
          {
            v27 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v25->CachedResidentAvailable,
                    v24 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v21 = (_DWORD)CachedResidentAvailable == v27;
            LODWORD(CachedResidentAvailable) = v27;
            if ( v21 )
              goto LABEL_34;
          }
          while ( v27 != -1 && v24 + v27 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v25->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v24 += (int)CachedResidentAvailable - 192;
        }
      }
    }
    if ( v24 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 17280), v24);
  }
LABEL_34:
  *a3 = v8;
  if ( v29 )
    PsDereferencePartition(*(_QWORD *)(v7 + 200));
}
