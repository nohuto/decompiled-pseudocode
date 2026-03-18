/*
 * XREFs of MiLockVad @ 0x14029C7D0
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x1402159D4 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVadEx @ 0x140274CB0 (MiObtainReferencedVadEx.c)
 *     MiDeleteEmptyPageTables @ 0x1403577A0 (MiDeleteEmptyPageTables.c)
 *     MiReleaseCommitForResetPages @ 0x1406190E8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140619278 (MiReleaseOutSwappedProcessCommit.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14061C0A4 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiInsertViewOfPhysicalSection @ 0x140630C30 (MiInsertViewOfPhysicalSection.c)
 *     MiCanDeleteEnclave @ 0x140647148 (MiCanDeleteEnclave.c)
 *     MiWaitForVadDeletion @ 0x140660C58 (MiWaitForVadDeletion.c)
 *     MiFindPlaceholderVadToReplace @ 0x140660D00 (MiFindPlaceholderVadToReplace.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406AB290 (MiAllocateFromSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     MiAllocateVirtualMemory @ 0x1406F7220 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8350 (MmQueryVirtualMemory.c)
 *     MiReserveUserMemory @ 0x14071F3E0 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14071FA58 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfDataSection @ 0x140720280 (MiMapViewOfDataSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748574 (MiMapLockedPagesInUserSpace.c)
 *     MiCommitInitialVadMetadataBits @ 0x1407A3E5C (MiCommitInitialVadMetadataBits.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CCB64 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfPhysicalSection @ 0x140A30CE0 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A32038 (MiCoalescePlaceholderAllocations.c)
 *     MiApplyImageHotPatchRequest @ 0x140A355E0 (MiApplyImageHotPatchRequest.c)
 *     MiDeleteVadHotPatchState @ 0x140A369DC (MiDeleteVadHotPatchState.c)
 *     MiPrepareToHotPatchVad @ 0x140A3AEEC (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x140A3B018 (MiProcessPatchImageCfg.c)
 *     MiAllocateEnclaveVad @ 0x140A3CC88 (MiAllocateEnclaveVad.c)
 *     MiInitializeVsmEnclave @ 0x140A3DFA0 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3E498 (MiLoadSectionIntoVsmEnclave.c)
 *     MiTerminateEnclave @ 0x140A3E8F0 (MiTerminateEnclave.c)
 *     MiDeleteInsertedCloneVads @ 0x140A48CB8 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A1720 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FA68 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockVad(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rdi
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 result; // rax
  unsigned int v7; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned int v13; // [rsp+40h] [rbp+8h]

  --*(_WORD *)(a1 + 486);
  v2 = (volatile signed __int32 *)(a2 + 40);
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  _disable();
  LODWORD(result) = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (result = KiAbTryReclaimOrphanedEntries(a1, CurrentThread), (_DWORD)result) )
  {
    _BitScanForward(&v7, result);
    v13 = v7;
    CurrentThread->AbEntrySummary = result & ~(1 << v7);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v11 = *SchedulerAssist;
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v3 = (__int64)(&CurrentThread[1].Process + 12 * v13);
    if ( (unsigned __int64)v2 - qword_140C659E8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v3 + 8) = SessionId;
    result = (unsigned __int64)v2 & 0x7FFFFFFFFFFFFFFCLL;
    *(_QWORD *)v3 = (unsigned __int64)v2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64(v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, v3, v2);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  *(_BYTE *)(a1 + 1384) |= 0x80u;
  return result;
}
