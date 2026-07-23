/*
 * XREFs of MiReplenishUltraPageTables @ 0x1406620CC
 * Callers:
 *     MiCreateUltraThreadContextHelper @ 0x1402EC6FC (MiCreateUltraThreadContextHelper.c)
 *     MiReassessZeroThreads @ 0x14035179C (MiReassessZeroThreads.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiInitializePageColorBase @ 0x1402E1920 (MiInitializePageColorBase.c)
 *     MiAcquireNonPagedResources @ 0x1402E45A4 (MiAcquireNonPagedResources.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     MiGetUltraPage @ 0x1402EC800 (MiGetUltraPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiReplenishUltraPageTables(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13
  __int64 v3; // rsi
  volatile LONG *v4; // r13
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  char v7; // r14
  unsigned __int8 v8; // cl
  struct _KPRCB *v9; // r10
  _DWORD *v10; // r9
  int v11; // edx
  bool v12; // zf
  __int64 UltraPage; // rax
  _QWORD *v14; // r14
  _QWORD *v15; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v18; // eax
  _DWORD *SchedulerAssist; // r8
  struct _KPRCB *v20; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v22; // eax
  signed __int32 v23; // eax
  _OWORD v24[3]; // [rsp+20h] [rbp-38h] BYREF

  v1 = a1;
  v24[0] = 0LL;
  MiInitializePageColorBase(0LL, a1 + 1, (__int64)v24);
  v2 = *(_QWORD *)(qword_140C65AA0 + 376 * v1 + 368);
  v3 = v2 + 520;
  if ( *(_QWORD *)(v2 + 536) >= 0x100uLL )
    return;
  v4 = (volatile LONG *)(v2 + 552);
  v5 = ExAcquireSpinLockExclusive(v4);
  v6 = 1LL;
  if ( *(_QWORD *)(v3 + 16) >= 0x100uLL )
  {
LABEL_16:
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v5 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v5);
    return;
  }
  v7 = v5 + 1;
  while ( 1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( (_DWORD)KiIrqlFlags )
    {
      v8 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v8 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v8 >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = v9->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << v7);
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v9);
      }
    }
    __writecr8(v5);
    if ( (int)MiAcquireNonPagedResources((unsigned __int64)MiSystemPartition, 1uLL, 0LL, 0) < 0 )
      return;
    UltraPage = MiGetUltraPage((__int64)v24, 1);
    if ( UltraPage == -1 )
      break;
    v14 = (_QWORD *)(48 * UltraPage - 0x220000000000LL);
    if ( *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((48 * UltraPage) >> 4)) + 2) != (_DWORD)v1 )
    {
      MiReleaseFreshPage((__int64)v14);
      MiReturnCommit((__int64)MiSystemPartition, 1LL);
      v20 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v20->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v22 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v20->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v12 = (_DWORD)CachedResidentAvailable == v22;
            LODWORD(CachedResidentAvailable) = v22;
            if ( v12 )
              return;
          }
          while ( v22 != -1 && (unsigned __int64)(v22 + 1LL) <= 0x100 );
        }
LABEL_37:
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v20->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v6 = (int)CachedResidentAvailable - 192 + 1LL;
        }
        if ( !v6 )
          return;
      }
LABEL_41:
      _InterlockedExchangeAdd64(&qword_140C6F7C0, v6);
      return;
    }
    ExAcquireSpinLockExclusive(v4);
    v15 = *(_QWORD **)(v3 + 8);
    if ( *v15 != v3 )
      __fastfail(3u);
    *v14 = v3;
    v14[1] = v15;
    *v15 = v14;
    *(_QWORD *)(v3 + 8) = v14;
    ++*(_QWORD *)(v3 + 16);
    v7 = v5 + 1;
    if ( *(_QWORD *)(v3 + 16) >= 0x100uLL )
      goto LABEL_16;
  }
  MiReturnCommit((__int64)MiSystemPartition, 1LL);
  v20 = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)v20->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_41;
  if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
    goto LABEL_37;
  while ( 1 )
  {
    v23 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&v20->CachedResidentAvailable,
            CachedResidentAvailable + 1,
            CachedResidentAvailable);
    v12 = (_DWORD)CachedResidentAvailable == v23;
    LODWORD(CachedResidentAvailable) = v23;
    if ( v12 )
      break;
    if ( v23 == -1 || (unsigned __int64)(v23 + 1LL) > 0x100 )
      goto LABEL_37;
  }
}
