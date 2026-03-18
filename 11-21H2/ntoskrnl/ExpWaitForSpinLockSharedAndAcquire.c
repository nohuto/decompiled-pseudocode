/*
 * XREFs of ExpWaitForSpinLockSharedAndAcquire @ 0x140366A20
 * Callers:
 *     ExpAddTagForBigPages @ 0x140214C50 (ExpAddTagForBigPages.c)
 *     MiAllocateCombineProto @ 0x14026AB70 (MiAllocateCombineProto.c)
 *     MiSynchronizeSystemVa @ 0x140279DB0 (MiSynchronizeSystemVa.c)
 *     MiZeroFault @ 0x1402AD610 (MiZeroFault.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiSynchronizeFastPageInsert @ 0x1402C0900 (MiSynchronizeFastPageInsert.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiTrimOrAgeWorkingSet @ 0x14030C260 (MiTrimOrAgeWorkingSet.c)
 *     MiRemoveVad @ 0x14030DA80 (MiRemoveVad.c)
 *     MiQueryAddressSpan @ 0x14030EC70 (MiQueryAddressSpan.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiSetVaAgeList @ 0x1403171A0 (MiSetVaAgeList.c)
 *     MiMakeHyperRangeAccessible @ 0x1403199E0 (MiMakeHyperRangeAccessible.c)
 *     MiProbeAndLockPrepare @ 0x140319F70 (MiProbeAndLockPrepare.c)
 *     MiUserFault @ 0x14031CD90 (MiUserFault.c)
 *     MiAddWorkingSetEntries @ 0x1403234A0 (MiAddWorkingSetEntries.c)
 *     MiAcquirePageListLock @ 0x1403277D0 (MiAcquirePageListLock.c)
 *     MiCommitExistingVad @ 0x14032C1B0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiDeletePagablePteRange @ 0x140330080 (MiDeletePagablePteRange.c)
 *     MiRemoveWsle @ 0x140331CC0 (MiRemoveWsle.c)
 *     MiMakeSystemCacheRangeValid @ 0x140333AC0 (MiMakeSystemCacheRangeValid.c)
 *     MiEndingOffsetWithLock @ 0x14033DFC0 (MiEndingOffsetWithLock.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140461B20 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpWaitForSpinLockSharedAndAcquire(
        signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist)
{
  unsigned __int8 v4; // bl
  volatile signed __int32 *v5; // r14
  unsigned int v6; // esi
  signed __int32 v7; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v10; // eax
  bool v11; // zf
  struct _KPRCB *v12; // rbp
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // eax

  v4 = a2;
  v5 = a1;
  v6 = 0;
  _m_prefetchw(a1);
  v7 = *a1;
  while ( 1 )
  {
    if ( v7 < 0 )
    {
      do
      {
        if ( (v7 & 0x40000000) == 0 )
          _InterlockedOr(v5, 0x40000000u);
        if ( v4 != 0xFF )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                a1 = (signed __int32 *)((unsigned int)v4 + 1);
                a2 = -1LL << (v4 + 1);
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v10 = ~(unsigned __int16)a2;
                v11 = (v10 & SchedulerAssist[5]) == 0;
                a3 = (unsigned int)v10 & SchedulerAssist[5];
                SchedulerAssist[5] = a3;
                if ( v11 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v4);
        }
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, SchedulerAssist) )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
        if ( v4 != 0xFF )
        {
          v4 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && v4 <= 0xFu )
            {
              a1 = (signed __int32 *)((unsigned int)v4 + 1);
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              a2 = (-1LL << (v4 + 1)) & 4;
              a3 = (unsigned int)a2 | SchedulerAssist[5];
              SchedulerAssist[5] = a3;
            }
          }
        }
        v7 = *v5;
      }
      while ( *(int *)v5 < 0 );
    }
    v12 = KeGetCurrentPrcb();
    v13 = v12->SchedulerAssist;
    if ( v13 )
    {
      if ( v12->NestingLevel <= 1u )
      {
        v14 = v13[6];
        v13[6] = v14 + 1;
        if ( v14 == -1 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    a2 = (unsigned int)v7;
    v7 = _InterlockedCompareExchange(v5, (v7 + 1) & 0xBFFFFFFF, v7);
    if ( v7 == (_DWORD)a2 )
      break;
    a1 = (signed __int32 *)v12->SchedulerAssist;
    if ( a1 && v12->NestingLevel <= 1u )
    {
      v15 = a1[6] - 1;
      a1[6] = v15;
      if ( !v15 )
        KiRemoveSystemWorkPriorityKick(v12);
    }
  }
  return v6;
}
