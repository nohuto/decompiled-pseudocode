/*
 * XREFs of MiGetPoolPages @ 0x140284A20
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x1403523C0 (MiInitializePoolCommitPacket.c)
 * Callees:
 *     MiReturnPhysicalPoolPages @ 0x1402287C8 (MiReturnPhysicalPoolPages.c)
 *     MiReturnPoolCharges @ 0x140228AA0 (MiReturnPoolCharges.c)
 *     MiFillPhysicalPages @ 0x140235AAC (MiFillPhysicalPages.c)
 *     MiObtainPoolCharges @ 0x14026A718 (MiObtainPoolCharges.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiRetryNonPagedAllocation @ 0x140284C74 (MiRetryNonPagedAllocation.c)
 *     MiSufficientAvailablePages @ 0x140285380 (MiSufficientAvailablePages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140339C20 (MiInitializePageColorBase.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

volatile signed __int32 *__fastcall MiGetPoolPages(int a1, unsigned int a2, unsigned __int64 a3)
{
  volatile signed __int32 *v4; // rsi
  _QWORD *v5; // rbp
  unsigned int v8; // ebx
  signed __int32 v9; // ecx
  __int64 Page; // rax
  __int64 v11; // r9
  signed __int64 v12; // rdx
  signed __int64 v13; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  volatile signed __int32 *v17; // rax
  volatile signed __int32 *v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 OldIrql; // rbp
  volatile signed __int32 *i; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf
  signed __int64 v27; // rcx
  __int128 v28; // [rsp+20h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-50h] BYREF
  __int128 v31; // [rsp+50h] [rbp-48h]
  __int64 v32; // [rsp+60h] [rbp-38h]
  unsigned __int64 v33; // [rsp+68h] [rbp-30h]
  __int128 v34; // [rsp+70h] [rbp-28h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v28 = 0LL;
  v4 = 0LL;
  v5 = (_QWORD *)(qword_140C506E0 + 120LL * a2);
  if ( v5[9] )
  {
    KeAcquireInStackQueuedSpinLock(v5 + 10, &LockHandle);
    v15 = v5[9];
    v16 = v15;
    if ( v15 > a3 )
      v16 = a3;
    if ( v16 )
    {
      v17 = (volatile signed __int32 *)v5[11];
      a3 -= v16;
      v4 = v17;
      v5[9] = v15 - v16;
      do
      {
        v18 = v17;
        v17 = *(volatile signed __int32 **)v17;
        --v16;
      }
      while ( v16 );
      *(_QWORD *)v18 = 0LL;
      v5[11] = v17;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = -1LL << (LockHandle.OldIrql + 1);
          v25 = ~(unsigned __int16)v19;
          v26 = (v25 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v25;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (a1 & 0x40000000) != 0 )
    {
      for ( i = v4; i; i = *(volatile signed __int32 **)i )
        MiFillPhysicalPages(0xAAAAAAAAAAAAAAABuLL * ((__int64)(i + 0x88000000000LL) >> 4), v19, 0LL);
    }
    if ( !a3 )
      return v4;
  }
  if ( (unsigned int)MiObtainPoolCharges(a3, 0) )
  {
    MiInitializePageColorBase(0LL, a2 + 1, &v28);
    v8 = 782;
    if ( (a1 & 0x40000000) == 0 )
      v8 = 524;
    if ( a3 )
    {
      while ( a3 <= 1
           || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
           || (unsigned int)MiSufficientAvailablePages(&MiSystemPartition, a3 + 160) )
      {
        MiRetryNonPagedAllocation();
        v9 = _InterlockedExchangeAdd((volatile signed __int32 *)v28, 1u);
        Page = MiGetPage(&MiSystemPartition, HIDWORD(v28) | (unsigned int)v9 & DWORD2(v28), v8);
        if ( Page == -1 )
        {
          if ( !(unsigned int)MiRetryNonPagedAllocation() )
            break;
        }
        else
        {
          v11 = 48 * Page - 0x220000000000LL;
          v12 = *(_QWORD *)(v11 + 24);
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 24), v12 & 0xC7FFFFFFFFFFFFFFuLL, v12);
          if ( v12 != v13 )
          {
            do
            {
              v27 = v13;
              v13 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v11 + 24),
                      v13 & 0xC7FFFFFFFFFFFFFFuLL,
                      v13);
            }
            while ( v27 != v13 );
          }
          *(_QWORD *)v11 = v4;
          --a3;
          v4 = (volatile signed __int32 *)(48 * Page - 0x220000000000LL);
        }
        if ( !a3 )
          return v4;
      }
      v32 = 0LL;
      v31 = 0LL;
      v34 = 0LL;
      if ( v4 )
      {
        MiReturnPhysicalPoolPages(v4, 0);
        v4 = 0LL;
      }
      v30 = a3;
      v33 = a3;
      MiReturnPoolCharges(&v30, 0, 0);
    }
    return v4;
  }
  if ( v4 )
    MiReturnPhysicalPoolPages(v4, 0);
  return 0LL;
}
