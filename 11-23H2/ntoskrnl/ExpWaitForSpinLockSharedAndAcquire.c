/*
 * XREFs of ExpWaitForSpinLockSharedAndAcquire @ 0x140317000
 * Callers:
 *     MiLocateCombineBlock @ 0x140215B20 (MiLocateCombineBlock.c)
 *     MiZeroFault @ 0x1402323F0 (MiZeroFault.c)
 *     MiProbeAndLockPrepare @ 0x140234E80 (MiProbeAndLockPrepare.c)
 *     MiUserFault @ 0x140235960 (MiUserFault.c)
 *     MiGetSlabPage @ 0x14023BE40 (MiGetSlabPage.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AFA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiSynchronizeSystemVa @ 0x140261C40 (MiSynchronizeSystemVa.c)
 *     MiAcquirePageListLock @ 0x140267630 (MiAcquirePageListLock.c)
 *     MiMakeSystemCacheRangeValid @ 0x140267AF0 (MiMakeSystemCacheRangeValid.c)
 *     MiAddWorkingSetEntries @ 0x14026BFB0 (MiAddWorkingSetEntries.c)
 *     MiSynchronizeFastPageInsert @ 0x14026E1A0 (MiSynchronizeFastPageInsert.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x140270C70 (MiSetVaAgeList.c)
 *     MiQueryAddressSpan @ 0x140273FF0 (MiQueryAddressSpan.c)
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiLockPageListAndLastPage @ 0x140279230 (MiLockPageListAndLastPage.c)
 *     MiEndingOffsetWithLock @ 0x14027A0E0 (MiEndingOffsetWithLock.c)
 *     MiRemoveWsle @ 0x14027B6E0 (MiRemoveWsle.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiGetControlAreaPtes @ 0x1402888A0 (MiGetControlAreaPtes.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     ExAcquireSpinLockShared @ 0x1403148B0 (ExAcquireSpinLockShared.c)
 *     ExpRemoveTagForBigPages @ 0x140323AA0 (ExpRemoveTagForBigPages.c)
 *     ExpAddTagForBigPages @ 0x140331DC0 (ExpAddTagForBigPages.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046B8F2 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 * Callees:
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD4A0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD4D0 (HvlNotifyLongSpinWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpWaitForSpinLockSharedAndAcquire(unsigned __int64 CurrentIrql, unsigned __int8 a2)
{
  volatile signed __int32 *v3; // rsi
  unsigned int v4; // ebx
  signed __int32 v5; // eax
  signed __int32 v6; // edx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  _DWORD *v12; // r9
  __int64 v13; // rdx

  v3 = (volatile signed __int32 *)CurrentIrql;
  v4 = 0;
  _m_prefetchw((const void *)CurrentIrql);
  v5 = *(_DWORD *)CurrentIrql;
  do
  {
    if ( v5 < 0 )
    {
      do
      {
        if ( (v5 & 0x40000000) == 0 )
          _InterlockedOr(v3, 0x40000000u);
        if ( a2 != 0xFF )
        {
          if ( (_DWORD)KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
              && (unsigned __int8)CurrentIrql <= 0xFu
              && a2 <= 0xFu
              && (unsigned __int8)CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              CurrentIrql = (unsigned int)a2 + 1;
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v10 = ~(unsigned __int16)(-1LL << (a2 + 1));
              v11 = (v10 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v10;
              if ( v11 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(a2);
        }
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql) )
        {
          HvlNotifyLongSpinWait(v4);
        }
        else
        {
          _mm_pause();
        }
        if ( a2 != 0xFF )
        {
          a2 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (_DWORD)KiIrqlFlags )
          {
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && a2 <= 0xFu )
            {
              v12 = KeGetCurrentPrcb()->SchedulerAssist;
              if ( a2 == 2 )
              {
                LODWORD(v13) = 4;
              }
              else
              {
                CurrentIrql = (unsigned int)a2 + 1;
                v13 = (-1LL << (a2 + 1)) & 4;
              }
              v12[5] |= v13;
            }
          }
        }
        v5 = *v3;
      }
      while ( *(int *)v3 < 0 );
    }
    CurrentIrql = (unsigned int)(v5 + 1);
    v6 = v5;
    LODWORD(CurrentIrql) = CurrentIrql & 0xBFFFFFFF;
    v5 = _InterlockedCompareExchange(v3, CurrentIrql, v5);
  }
  while ( v5 != v6 );
  return v4;
}
