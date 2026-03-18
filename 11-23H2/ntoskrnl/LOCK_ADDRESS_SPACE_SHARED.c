/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x1402752C0
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x1402159D4 (MiObtainReferencedSecureVad.c)
 *     MmOutSwapWorkingSet @ 0x140342000 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14061C0A4 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x140652C4C (MmOutSwapVirtualAddresses.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     MmQueryVirtualMemory @ 0x1406F8350 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14071FA58 (MmCleanProcessAddressSpace.c)
 *     MmGetImageInformation @ 0x14077E280 (MmGetImageInformation.c)
 *     MiCommitInitialVadMetadataBits @ 0x1407A3E5C (MiCommitInitialVadMetadataBits.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1407A4CF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiHotPatchProcess @ 0x140A374C4 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x140A3C510 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x140A3C5EC (MmIsFileMapped.c)
 *     MiAllocateUserPhysicalPages @ 0x140A40358 (MiAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x140A495E8 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x140A49AA0 (MiFreeLargePageView.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A1720 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FA68 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int AbEntrySummary; // eax
  unsigned int v7; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  __int64 result; // rax
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  unsigned int v14; // [rsp+40h] [rbp+8h]

  --*(_WORD *)(a1 + 486);
  v2 = (volatile signed __int64 *)(a2 + 1224);
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1, CurrentThread)) != 0 )
  {
    _BitScanForward(&v7, AbEntrySummary);
    v14 = v7;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v12 = *SchedulerAssist;
      do
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
      }
      while ( v13 != v12 );
      if ( (v12 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v3 = (__int64)(&CurrentThread[1].Process + 12 * v14);
    if ( (unsigned __int64)v2 - qword_140C659E8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v3 + 8) = SessionId;
    *(_QWORD *)v3 = (unsigned __int64)v2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(v2, 0LL, v3, v2);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  *(_BYTE *)(a1 + 1384) |= 2u;
  return result;
}
