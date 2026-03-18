/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x1402E14F0
 * Callers:
 *     MiInitializeImageProtos @ 0x14021A200 (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x14021A4D4 (MiGetPageForHeader.c)
 *     MmCheckCachedPageStates @ 0x140265320 (MmCheckCachedPageStates.c)
 *     MiIssueHardFault @ 0x1402A10B0 (MiIssueHardFault.c)
 *     MiUnlockWsle @ 0x1402A2700 (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x1402A3120 (NtLockVirtualMemory.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiInitializePfn @ 0x1402E1040 (MiInitializePfn.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MmCopyMemory @ 0x1402EDB50 (MmCopyMemory.c)
 *     MiPrefetchRestOfCluster @ 0x140367AFC (MiPrefetchRestOfCluster.c)
 *     MiSetPagesModified @ 0x1406288FC (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x14063318C (MiSwitchToTransition.c)
 *     MmPrefetchVirtualAddresses @ 0x1406819E0 (MmPrefetchVirtualAddresses.c)
 *     NtSetInformationVirtualMemory @ 0x1407A4020 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x1402E1520 (PsGetPagePriorityThread.c)
 */

__int64 __fastcall MiGetEffectivePagePriorityThread(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 1384);
  if ( (v1 & 0x100) != 0 )
    return (v1 >> 9) & 7;
  else
    return PsGetPagePriorityThread(a1);
}
