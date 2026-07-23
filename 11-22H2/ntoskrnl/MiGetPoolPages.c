/*
 * XREFs of MiGetPoolPages @ 0x1402E3304
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x1402867E0 (MiInitializePoolCommitPacket.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetPage @ 0x14026D240 (MiGetPage.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E1630 (MiSetPfnTbFlushStamp.c)
 *     MiInitializePageColorBase @ 0x1402E1690 (MiInitializePageColorBase.c)
 *     MiRetryNonPagedAllocation @ 0x1402E3508 (MiRetryNonPagedAllocation.c)
 *     MiSufficientAvailablePages @ 0x1402E35AC (MiSufficientAvailablePages.c)
 *     MiFillPhysicalPages @ 0x1403390F0 (MiFillPhysicalPages.c)
 *     MiReturnPhysicalPoolPages @ 0x14034000C (MiReturnPhysicalPoolPages.c)
 *     MiReturnPoolCharges @ 0x140340278 (MiReturnPoolCharges.c)
 *     MiObtainPoolCharges @ 0x14035A380 (MiObtainPoolCharges.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiGetPoolPages(int a1, unsigned int a2, unsigned __int64 a3)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // r15
  int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r14d
  signed __int32 v12; // ecx
  __int64 Page; // rax
  _QWORD *v14; // rbx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  unsigned __int64 OldIrql; // r15
  _QWORD *i; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf
  __int128 v27; // [rsp+20h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v29[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v30; // [rsp+68h] [rbp-18h]
  __int64 v31; // [rsp+78h] [rbp-8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v27 = 0LL;
  v4 = 0LL;
  v5 = (_QWORD *)(qword_140C65BA0 + 376LL * a2);
  if ( v5[9] )
  {
    KeAcquireInStackQueuedSpinLock(v5 + 10, &LockHandle);
    v16 = v5[9];
    v17 = v16;
    if ( v16 > a3 )
      v17 = a3;
    if ( v17 )
    {
      v18 = (_QWORD *)v5[11];
      a3 -= v17;
      v4 = v18;
      v5[9] = v16 - v17;
      do
      {
        v19 = v18;
        v18 = (_QWORD *)*v18;
        --v17;
      }
      while ( v17 );
      *v19 = 0LL;
      v5[11] = v18;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v26 = (v25 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    v8 = a1 & 0x40000000;
    if ( v8 )
    {
      for ( i = v4; i; i = (_QWORD *)*i )
        MiFillPhysicalPages(0xAAAAAAAAAAAAAAABuLL * ((__int64)(i + 0x44000000000LL) >> 4));
    }
    if ( !a3 )
      return v4;
  }
  else
  {
    v8 = a1 & 0x40000000;
  }
  if ( (unsigned int)MiObtainPoolCharges(a3, 0LL) )
  {
    MiInitializePageColorBase(0LL, a2 + 1, (__int64)&v27);
    v11 = v8 != 0 ? 0x102 : 0;
    if ( a3 )
    {
      while ( a3 <= 1
           || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
           || (unsigned int)MiSufficientAvailablePages(&MiSystemPartition, a3 + 160, v9, v10) )
      {
        MiRetryNonPagedAllocation();
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v27, 1u);
        Page = MiGetPage((__int64)&MiSystemPartition, HIDWORD(v27) | (unsigned int)v12 & DWORD2(v27), v11 + 524);
        if ( Page == -1 )
        {
          if ( !(unsigned int)MiRetryNonPagedAllocation() )
          {
LABEL_10:
            if ( !a3 )
              return v4;
            break;
          }
        }
        else
        {
          v14 = (_QWORD *)(48 * Page - 0x220000000000LL);
          MiSetPfnTbFlushStamp((__int64)v14, 0, 0);
          *v14 = v4;
          --a3;
          v4 = v14;
        }
        if ( !a3 )
          goto LABEL_10;
      }
      v31 = 0LL;
      memset(v29, 0, sizeof(v29));
      v30 = 0LL;
      if ( v4 )
      {
        MiReturnPhysicalPoolPages(v4, 0LL);
        v4 = 0LL;
      }
      *(_QWORD *)&v29[0] = a3;
      *(_QWORD *)&v30 = a3;
      MiReturnPoolCharges(v29, 0LL, 0LL);
    }
    return v4;
  }
  if ( v4 )
    MiReturnPhysicalPoolPages(v4, 0LL);
  return 0LL;
}
