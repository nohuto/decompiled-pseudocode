/*
 * XREFs of MiLocateAddress @ 0x140217240
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x1402159D4 (MiObtainReferencedSecureVad.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402170B0 (MiCaptureWriteWatchDirtyBit.c)
 *     MiVadSupportsCombine @ 0x1402171A0 (MiVadSupportsCombine.c)
 *     MiImagePageOk @ 0x14021858C (MiImagePageOk.c)
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     MiUserFault @ 0x140235960 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x1402386C0 (MiComputeMaximumFaultCluster.c)
 *     MiComputeFaultNode @ 0x14025D820 (MiComputeFaultNode.c)
 *     MiHandleTransitionFault @ 0x1402630E0 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x140263370 (MiMigratePfn.c)
 *     MiResolveProtoPteFault @ 0x140268160 (MiResolveProtoPteFault.c)
 *     MiCompleteProtoPteFault @ 0x140268E70 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140269FD0 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14026AC10 (MiCompletePrivateZeroFault.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     NtUnlockVirtualMemory @ 0x1402833F0 (NtUnlockVirtualMemory.c)
 *     MiReservePageFileSpace @ 0x140284C30 (MiReservePageFileSpace.c)
 *     NtLockVirtualMemory @ 0x1402A33B0 (NtLockVirtualMemory.c)
 *     MiInitializeReadInProgressPfn @ 0x1402DEDD0 (MiInitializeReadInProgressPfn.c)
 *     MiResolveMappedFileFault @ 0x1402E0870 (MiResolveMappedFileFault.c)
 *     MiSharedVaToPartition @ 0x1402E2A18 (MiSharedVaToPartition.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MiValidFault @ 0x140333770 (MiValidFault.c)
 *     MiUpdatePrefetchPriority @ 0x140333C6C (MiUpdatePrefetchPriority.c)
 *     MiDeleteEmptyPageTables @ 0x140357940 (MiDeleteEmptyPageTables.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x1403584FC (MiAdvanceToLastUntrimmableVa.c)
 *     MiProcessCommitIntact @ 0x140369958 (MiProcessCommitIntact.c)
 *     MiLockStealUserVm @ 0x1403BE0F8 (MiLockStealUserVm.c)
 *     MiCanGrantExecute @ 0x140646014 (MiCanGrantExecute.c)
 *     MmOutSwapVirtualAddresses @ 0x14065319C (MmOutSwapVirtualAddresses.c)
 *     MmStoreDecommitVirtualMemory @ 0x14065D4C4 (MmStoreDecommitVirtualMemory.c)
 *     MiFindPlaceholderVadToReplace @ 0x140661250 (MiFindPlaceholderVadToReplace.c)
 *     MiCloneVads @ 0x1406637C8 (MiCloneVads.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 *     MiUnlockVadRange @ 0x1406AFF94 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1406B0064 (MiLockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A322E8 (MiCoalescePlaceholderAllocations.c)
 *     MmCheckForSafeExecution @ 0x140A3C7C0 (MmCheckForSafeExecution.c)
 *     MiMapChildLargePageVads @ 0x140A4952C (MiMapChildLargePageVads.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall MiLocateAddress(unsigned __int64 a1)
{
  _KPROCESS *Process; // r9
  __int64 **result; // rax
  unsigned __int64 v3; // r8
  __int64 **v4; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  result = *(__int64 ***)&Process[1].Spare2[23];
  if ( !result )
    return 0LL;
  v3 = a1 >> 12;
  if ( a1 >> 12 < (*((unsigned int *)result + 6) | ((unsigned __int64)*((unsigned __int8 *)result + 32) << 32))
    || v3 > (*((unsigned int *)result + 7) | ((unsigned __int64)*((unsigned __int8 *)result + 33) << 32)) )
  {
    v4 = *(__int64 ***)&Process[1].Spare2[15];
    if ( v4 )
    {
      do
      {
        if ( v3 > (*((unsigned int *)v4 + 7) | ((unsigned __int64)*((unsigned __int8 *)v4 + 33) << 32)) )
        {
          v4 = (__int64 **)v4[1];
        }
        else
        {
          if ( v3 >= (*((unsigned int *)v4 + 6) | ((unsigned __int64)*((unsigned __int8 *)v4 + 32) << 32)) )
            break;
          v4 = (__int64 **)*v4;
        }
      }
      while ( v4 );
      if ( v4 )
      {
        *(_QWORD *)&Process[1].Spare2[23] = v4;
        return v4;
      }
    }
    return 0LL;
  }
  return result;
}
