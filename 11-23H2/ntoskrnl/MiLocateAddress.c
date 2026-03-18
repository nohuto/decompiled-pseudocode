/*
 * XREFs of MiLocateAddress @ 0x140217240
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x1402159D4 (MiObtainReferencedSecureVad.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402170B0 (MiCaptureWriteWatchDirtyBit.c)
 *     MiVadSupportsCombine @ 0x1402171A0 (MiVadSupportsCombine.c)
 *     MiImagePageOk @ 0x14021858C (MiImagePageOk.c)
 *     MmAccessFault @ 0x140235370 (MmAccessFault.c)
 *     MiUserFault @ 0x140235890 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x1402385F0 (MiComputeMaximumFaultCluster.c)
 *     MiComputeFaultNode @ 0x14025D590 (MiComputeFaultNode.c)
 *     MiHandleTransitionFault @ 0x140262E50 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x1402630E0 (MiMigratePfn.c)
 *     MiResolveProtoPteFault @ 0x140267ED0 (MiResolveProtoPteFault.c)
 *     MiCompleteProtoPteFault @ 0x140268BE0 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140269D40 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14026A980 (MiCompletePrivateZeroFault.c)
 *     MiCopyOnWrite @ 0x14026FDA0 (MiCopyOnWrite.c)
 *     NtUnlockVirtualMemory @ 0x140283160 (NtUnlockVirtualMemory.c)
 *     MiReservePageFileSpace @ 0x1402849A0 (MiReservePageFileSpace.c)
 *     NtLockVirtualMemory @ 0x1402A3120 (NtLockVirtualMemory.c)
 *     MiInitializeReadInProgressPfn @ 0x1402DEB40 (MiInitializeReadInProgressPfn.c)
 *     MiResolveMappedFileFault @ 0x1402E05E0 (MiResolveMappedFileFault.c)
 *     MiSharedVaToPartition @ 0x1402E2788 (MiSharedVaToPartition.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiValidFault @ 0x1403334E0 (MiValidFault.c)
 *     MiUpdatePrefetchPriority @ 0x1403339DC (MiUpdatePrefetchPriority.c)
 *     MiDeleteEmptyPageTables @ 0x1403577A0 (MiDeleteEmptyPageTables.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x14035835C (MiAdvanceToLastUntrimmableVa.c)
 *     MiProcessCommitIntact @ 0x1403697B8 (MiProcessCommitIntact.c)
 *     MiLockStealUserVm @ 0x1403BDF18 (MiLockStealUserVm.c)
 *     MiCanGrantExecute @ 0x140645AC4 (MiCanGrantExecute.c)
 *     MmOutSwapVirtualAddresses @ 0x140652C4C (MmOutSwapVirtualAddresses.c)
 *     MmStoreDecommitVirtualMemory @ 0x14065CF74 (MmStoreDecommitVirtualMemory.c)
 *     MiFindPlaceholderVadToReplace @ 0x140660D00 (MiFindPlaceholderVadToReplace.c)
 *     MiCloneVads @ 0x140663278 (MiCloneVads.c)
 *     MiResolvePageFileFault @ 0x14066B4BC (MiResolvePageFileFault.c)
 *     MiUnlockVadRange @ 0x1406AFF64 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A32038 (MiCoalescePlaceholderAllocations.c)
 *     MmCheckForSafeExecution @ 0x140A3C510 (MmCheckForSafeExecution.c)
 *     MiMapChildLargePageVads @ 0x140A4927C (MiMapChildLargePageVads.c)
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
