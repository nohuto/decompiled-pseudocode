/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x14025BAD0
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1402201BC (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x140220594 (MiComputeAgingPercent.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140222ED8 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiStoreUpdateMemoryConditions @ 0x140222F70 (MiStoreUpdateMemoryConditions.c)
 *     MiAgeWorkingSet @ 0x14025B770 (MiAgeWorkingSet.c)
 *     MiGetHardFaultPages @ 0x1402DF274 (MiGetHardFaultPages.c)
 *     MiResolveMappedFileFault @ 0x1402E05E0 (MiResolveMappedFileFault.c)
 *     MiComputeZeroClusterMaximum @ 0x1402F28B0 (MiComputeZeroClusterMaximum.c)
 *     MmGetAvailablePagesBelowPriority @ 0x1402F59FC (MmGetAvailablePagesBelowPriority.c)
 *     MiPrefetchNormally @ 0x14033E640 (MiPrefetchNormally.c)
 *     MiTrimWorkingSetTail @ 0x14034FD10 (MiTrimWorkingSetTail.c)
 *     MiPreUnlockWorkingSetShared @ 0x14035D570 (MiPreUnlockWorkingSetShared.c)
 *     MiForcedTrim @ 0x1406348E0 (MiForcedTrim.c)
 *     MiGetExtendedStandbyPage @ 0x1406506B0 (MiGetExtendedStandbyPage.c)
 *     MiResolvePageFileFault @ 0x14066B4BC (MiResolvePageFileFault.c)
 *     MiAllocateCrcList @ 0x1407E4FF4 (MiAllocateCrcList.c)
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
