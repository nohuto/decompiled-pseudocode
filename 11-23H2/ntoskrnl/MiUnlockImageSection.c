/*
 * XREFs of MiUnlockImageSection @ 0x14025A6F0
 * Callers:
 *     MiLockPagableImageSection @ 0x14025AA70 (MiLockPagableImageSection.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x140209468 (ExpUnblockPushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPfnReferenceCountIsZero @ 0x1402D9270 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x1402DC410 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiBadRefCount @ 0x14064DB90 (MiBadRefCount.c)
 */

void __fastcall MiUnlockImageSection(
        volatile signed __int32 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        ULONG_PTR a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v6; // rdi
  volatile signed __int32 *v7; // rbp
  __int64 CurrentIrql; // rsi
  signed __int32 v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rdx
  _DWORD *SchedulerAssist; // r8
  signed __int64 v13; // r15
  signed __int64 v14; // rbx
  unsigned __int8 v15; // r14
  __int16 v16; // cx
  bool v17; // zf
  __int16 v18; // cx
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // edx
  int v22; // esi
  unsigned __int64 v23; // rcx
  char v24; // al
  __int64 v25; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 v27; // rcx
  __int64 v28; // rbp
  __int64 v29; // r10
  unsigned __int64 v30; // r8
  struct _KPRCB *v31; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v33; // eax
  unsigned __int8 v34; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v36; // r9
  int v37; // eax
  signed __int32 v38[8]; // [rsp+0h] [rbp-78h] BYREF
  int v39; // [rsp+30h] [rbp-48h] BYREF
  __int64 v40; // [rsp+38h] [rbp-40h] BYREF
  struct _KTHREAD *v41; // [rsp+40h] [rbp-38h]
  __int64 v42; // [rsp+48h] [rbp-30h]

  CurrentThread = KeGetCurrentThread();
  v41 = CurrentThread;
  v6 = a2;
  v7 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v42 = CurrentIrql;
  if ( !(_BYTE)CurrentIrql )
    --CurrentThread->KernelApcDisable;
  v9 = _InterlockedDecrement(a1);
  if ( (unsigned int)(v9 + 1) <= 1 )
    KeBugCheckEx(0x1Au, 0x1010uLL, (__int64)(a2 << 25) >> 16, a4, v9);
  if ( v9 == 1 )
  {
    if ( a2 <= a3 )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)v6;
        if ( v6 >= 0xFFFFF6FB7DBED000uLL
          && v6 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v10 & 1) != 0
          && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v27 = *((_QWORD *)&Flink->Flink + ((v6 >> 3) & 0x1FF));
            if ( (v27 & 0x20) != 0 )
              v10 |= 0x20uLL;
            if ( (v27 & 0x42) != 0 )
              v10 |= 0x42uLL;
          }
        }
        v40 = v10;
        v13 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v40) >> 12) & 0xFFFFFFFFFFLL);
        v14 = v13 - 0x220000000000LL;
        v15 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v15 <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v15 == 2 )
            LODWORD(v25) = 4;
          else
            v25 = (-1LL << (v15 + 1)) & 4;
          v11 = (unsigned int)v25 | SchedulerAssist[5];
          SchedulerAssist[5] = v11;
        }
        v39 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v39);
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
        v16 = *(_WORD *)(v14 + 32);
        if ( !v16 )
          MiBadRefCount(v14, v11, SchedulerAssist);
        v17 = v16 == 1;
        v18 = v16 - 1;
        *(_WORD *)(v14 + 32) = v18;
        if ( !v17 || (*(_QWORD *)(v14 + 40) & 0x20000000000000LL) == 0 )
          break;
LABEL_56:
        MiPfnReferenceCountIsZero(v14, 0xAAAAAAAAAAAAAAABuLL * (v13 >> 4));
LABEL_24:
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          v34 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v34 <= 0xFu && v15 <= 0xFu && v34 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v36 = CurrentPrcb->SchedulerAssist;
            v37 = ~(unsigned __int16)(-1LL << (v15 + 1));
            v17 = (v37 & v36[5]) == 0;
            v36[5] &= v37;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v15);
        v6 += 8LL;
        if ( v6 > a3 )
        {
          v7 = a1;
          CurrentThread = v41;
          LOBYTE(CurrentIrql) = v42;
          goto LABEL_27;
        }
      }
      v19 = *(_QWORD *)(v14 + 40);
      if ( (v19 & 0x10000000000LL) != 0 || (v19 & 0x20000000000000LL) != 0 )
        goto LABEL_24;
      v20 = *(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      v21 = 0;
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          if ( v20 || (*(_BYTE *)(v14 + 34) & 8) != 0 )
            v21 = 1;
          if ( !v21 )
            goto LABEL_24;
        }
        else if ( v18 != 2 || !v20 || (*(_BYTE *)(v14 + 34) & 8) == 0 )
        {
          goto LABEL_24;
        }
        v22 = 0;
      }
      else
      {
        v22 = 1;
      }
      v23 = *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL;
      if ( v23 > 0xFFFFF6BFFFFFFF78uLL || v23 < 0xFFFFF68000000000uLL )
      {
        v24 = *(_BYTE *)(v14 + 35);
        if ( (v24 & 0x20) != 0 )
        {
          *(_BYTE *)(v14 + 35) = v24 & 0xDF;
          goto LABEL_23;
        }
      }
      v28 = *(_QWORD *)(qword_140C673C8 + 8 * (((unsigned __int64)v19 >> 43) & 0x3FF));
      if ( v19 < 0 && (*(_DWORD *)(v14 + 16) & 0x400LL) != 0
        || (unsigned int)MiIsPfnCommitNotCharged(v14)
        || v22 && (v29 & 0x4000000000000000LL) != 0 )
      {
        MiReturnCommit(v28, 1LL);
      }
      v30 = 1LL;
      if ( (_UNKNOWN *)v28 == &MiSystemPartition )
      {
        v31 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v31->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            while ( 1 )
            {
              v33 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v31->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v17 = (_DWORD)CachedResidentAvailable == v33;
              LODWORD(CachedResidentAvailable) = v33;
              if ( v17 )
                break;
              if ( v33 == -1 || (unsigned __int64)(v33 + 1LL) > 0x100 )
                goto LABEL_73;
            }
LABEL_23:
            if ( !v22 )
              goto LABEL_24;
            goto LABEL_56;
          }
LABEL_73:
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v31->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v30 = (int)CachedResidentAvailable - 192 + 1LL;
          }
          if ( !v30 )
            goto LABEL_23;
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 17280), v30);
      goto LABEL_23;
    }
LABEL_27:
    _InterlockedDecrement(v7);
    _InterlockedOr(v38, 0);
    if ( qword_140C65960 )
      ExpUnblockPushLock(&qword_140C65960, 0LL, 0);
  }
  if ( !(_BYTE)CurrentIrql )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
