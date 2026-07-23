/*
 * XREFs of MiDeleteProcessShadow @ 0x1402919BC
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140291844 (MiDeleteFinalPageTables.c)
 *     MmCreateProcessAddressSpace @ 0x140706060 (MmCreateProcessAddressSpace.c)
 *     PspDisablePrimaryTokenExchange @ 0x14076FAD0 (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x1408531AC (PsCreateMinimalProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     KeMakeUserDirectoryTableBase @ 0x140291CC8 (KeMakeUserDirectoryTableBase.c)
 *     MiDeleteTopLevelPage @ 0x140292D54 (MiDeleteTopLevelPage.c)
 *     KeFlushProcessTb @ 0x140292EF0 (KeFlushProcessTb.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CE60 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 */

void __fastcall MiDeleteProcessShadow(__int64 a1, int a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rdi
  __int64 v5; // rbp
  volatile LONG *SharedVm; // rbx
  KIRQL v7; // al
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 v10; // r12
  unsigned __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v22; // zf
  signed __int32 v23; // eax
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v30; // [rsp+98h] [rbp+20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (MiFlags & 0x600000) != 0 && *(_QWORD *)(a1 + 1928) )
  {
    v3 = a1 + 1664;
    v4 = 1LL;
    v5 = *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(a1 + 1838));
    if ( a2 )
    {
      SharedVm = (volatile LONG *)MiGetSharedVm(v3);
      v7 = ExAcquireSpinLockExclusive(SharedVm);
      *((_DWORD *)SharedVm + 1) = 0;
      v10 = v7;
      if ( !*(_QWORD *)(a1 + 1928) )
      {
        MiUnlockWorkingSetExclusive(v3, v7, v8, v9);
        return;
      }
      v11 = 0xFFFFF6FB7DBED000uLL;
      v12 = 256LL;
      do
      {
        v13 = *(_QWORD *)v11;
        if ( MiPteInShadowRange(v11)
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v13 & 1) != 0
          && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v27 = *((_QWORD *)&Flink->Flink + ((v11 >> 3) & 0x1FF));
            v28 = v13 | 0x20;
            if ( (v27 & 0x20) == 0 )
              v28 = v13;
            v13 = v28;
            if ( (v27 & 0x42) != 0 )
              v13 = v28 | 0x42;
          }
        }
        v30 = v13;
        if ( (v13 & 1) != 0 )
        {
          v24 = v13;
          do
          {
            if ( v13 >= 0 )
              break;
            v30 = v24 & 0x7FFFFFFFFFFFFFFFLL;
            if ( (MiFlags & 0x2000000) != 0 )
              _mm_lfence();
            v25 = v24;
            v24 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, v24 & 0x7FFFFFFFFFFFFFFFLL, v24);
            v13 = v24;
            if ( v25 == v24 )
              break;
            v30 = v24;
          }
          while ( (v24 & 1) != 0 );
        }
        v11 += 8LL;
        --v12;
      }
      while ( v12 );
    }
    else
    {
      v10 = 17;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140C697C0, &LockHandle);
    v14 = ((*(_QWORD *)(a1 + 1928) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v30 = MI_READ_PTE_LOCK_FREE(v14);
    v15 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v30);
    *(_QWORD *)(a1 + 1928) = 0LL;
    v16 = (v15 >> 12) & 0xFFFFFFFFFFLL;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    *(_QWORD *)(a1 + 904) = KeMakeUserDirectoryTableBase(0LL);
    if ( v10 != 17 )
      MiUnlockWorkingSetExclusive(v3, v10, v17, v18);
    MiReleasePtes(&qword_140C69940, v14, 1LL);
    KeFlushProcessTb(v16 << 12);
    if ( (unsigned int)MiDeleteTopLevelPage(v19, v16) != 3 )
    {
      MiReturnCommit(v5, 1LL);
      if ( (_UNKNOWN *)v5 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            do
            {
              v23 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v22 = (_DWORD)CachedResidentAvailable == v23;
              LODWORD(CachedResidentAvailable) = v23;
              if ( v22 )
                return;
            }
            while ( v23 != -1 && (unsigned __int64)(v23 + 1LL) <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v4 = (int)CachedResidentAvailable - 192 + 1LL;
          }
          if ( !v4 )
            return;
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 17280), v4);
    }
  }
}
