/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x14025BD60
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1402201BC (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x140220594 (MiComputeAgingPercent.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140222ED8 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiStoreUpdateMemoryConditions @ 0x140222F70 (MiStoreUpdateMemoryConditions.c)
 *     MiAgeWorkingSet @ 0x14025BA00 (MiAgeWorkingSet.c)
 *     MiGetHardFaultPages @ 0x1402DF504 (MiGetHardFaultPages.c)
 *     MiResolveMappedFileFault @ 0x1402E0870 (MiResolveMappedFileFault.c)
 *     MiComputeZeroClusterMaximum @ 0x1402F2B40 (MiComputeZeroClusterMaximum.c)
 *     MmGetAvailablePagesBelowPriority @ 0x1402F5C8C (MmGetAvailablePagesBelowPriority.c)
 *     MiPrefetchNormally @ 0x14033E8D0 (MiPrefetchNormally.c)
 *     MiTrimWorkingSetTail @ 0x14034FEB0 (MiTrimWorkingSetTail.c)
 *     MiPreUnlockWorkingSetShared @ 0x14035D710 (MiPreUnlockWorkingSetShared.c)
 *     MiForcedTrim @ 0x140634E30 (MiForcedTrim.c)
 *     MiGetExtendedStandbyPage @ 0x140650C00 (MiGetExtendedStandbyPage.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 *     MiAllocateCrcList @ 0x1407E52C4 (MiAllocateCrcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesBelowPriority(_QWORD *a1, unsigned int a2)
{
  __int64 *v2; // r8
  __int64 v3; // r10
  unsigned __int64 v4; // rax
  __int64 v5; // rcx

  v2 = a1 + 368;
  v3 = a1[320] + a1[336];
  v4 = (unsigned __int64)&a1[11 * a2 + 368];
  if ( (unsigned __int64)(a1 + 368) < v4 )
  {
    do
    {
      v5 = *v2;
      v2 += 11;
      v3 += v5;
    }
    while ( (unsigned __int64)v2 < v4 );
  }
  return v3;
}
