/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x14032E700
 * Callers:
 *     MiDeprioritizeVad @ 0x1402598CC (MiDeprioritizeVad.c)
 *     MiObtainReferencedSecureVad @ 0x140281620 (MiObtainReferencedSecureVad.c)
 *     MiProbeAndLockPages @ 0x14029C5B0 (MiProbeAndLockPages.c)
 *     NtGetWriteWatch @ 0x1402CF630 (NtGetWriteWatch.c)
 *     MiObtainReferencedVadEx @ 0x14030E7C0 (MiObtainReferencedVadEx.c)
 *     IopProbeAndLockPages_1 @ 0x1403198A0 (IopProbeAndLockPages_1.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     MiProbeAndLockPrepare @ 0x140319F70 (MiProbeAndLockPrepare.c)
 *     MiCheckLockUnlockByVa @ 0x140584258 (MiCheckLockUnlockByVa.c)
 *     MmUpdateUserShadowStackValue @ 0x1405A7A98 (MmUpdateUserShadowStackValue.c)
 *     MiScrubProcessLargePages @ 0x1405C5930 (MiScrubProcessLargePages.c)
 *     MmRotatePhysicalView @ 0x140660170 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140693498 (MiMapLockedPagesInUserSpace.c)
 *     MmSecureVirtualMemoryEx @ 0x1406A2440 (MmSecureVirtualMemoryEx.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1406E2C14 (MiUnmapLockedPagesInUserSpace.c)
 *     MiLockVadRange @ 0x1406F7D78 (MiLockVadRange.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 *     MiCleanVad @ 0x1406F8C0C (MiCleanVad.c)
 *     MiUnmapViewOfSection @ 0x1406F8D30 (MiUnmapViewOfSection.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     NtResetWriteWatch @ 0x140700F70 (NtResetWriteWatch.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140709A08 (MiAllocateFromSubAllocatedRegion.c)
 *     MiProcessVaRangesInfoClass @ 0x140753B20 (MiProcessVaRangesInfoClass.c)
 *     MiCfgMarkValidEntries @ 0x140753C58 (MiCfgMarkValidEntries.c)
 *     MiCommitInitialVadMetadataBits @ 0x140755920 (MiCommitInitialVadMetadataBits.c)
 *     MiFreeToSubAllocatedRegion @ 0x14079EF3C (MiFreeToSubAllocatedRegion.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1407A4A8C (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 *     MmFreeVirtualMemory @ 0x1407B99C0 (MmFreeVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1407B9FA0 (MmProtectVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1407BE3C0 (MiAllocateVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1407FABA0 (MmStoreAllocateVirtualMemory.c)
 *     MmSetGraphicsPtes @ 0x14096B560 (MmSetGraphicsPtes.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x14096D7DC (MmAdjustSecuredVirtualMemorySize.c)
 *     MiApplyImageHotPatchRequest @ 0x140971DC0 (MiApplyImageHotPatchRequest.c)
 *     MiGetVadForHotPatchInProgress @ 0x140973534 (MiGetVadForHotPatchInProgress.c)
 *     MiCreateEnclave @ 0x140979918 (MiCreateEnclave.c)
 *     MiInitializeEnclave @ 0x14097A120 (MiInitializeEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14097A714 (MiLoadSectionIntoVsmEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x14097AC7C (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x14097B500 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x14097BB30 (NtTerminateEnclave.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140A6A570 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVad(char *P)
{
  signed __int32 v2; // edx
  unsigned int SessionId; // ebp
  BOOL v4; // r12d
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v6; // r14
  char *p_Process; // rbx
  __int64 v8; // rdx
  int v9; // r9d
  bool v10; // zf

  v2 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
  SessionId = -1;
  if ( v2 == -1 )
    __fastfail(0xEu);
  v4 = !v2 && (*((_DWORD *)P + 12) & 4) != 0;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(CurrentThread[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 40);
  v6 = KeGetCurrentThread();
  if ( (unsigned __int64)&P[-qword_140C50630 + 40] < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
  _disable();
  p_Process = (char *)&v6[1].Process;
  v8 = 0LL;
  do
  {
    if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)(P + 40) & 0x7FFFFFFFFFFFFFFCLL)
      && p_Process[18]
      && (*(_DWORD *)p_Process & 1) == 0
      && *((_DWORD *)p_Process + 2) == SessionId )
    {
      p_Process[18] = 0;
      if ( *(__int64 *)p_Process < 0 )
      {
        *p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process, v8, 0x7FFFFFFFFFFFFFFCLL);
        _disable();
      }
      v9 = *((_DWORD *)p_Process + 22);
      *((_DWORD *)p_Process + 22) = 0;
      p_Process[17] = 0;
      *(_QWORD *)p_Process = 0LL;
      v6->AbEntrySummary |= 1 << p_Process[16];
      _enable();
      if ( v9 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v6, (__int64)(P + 40), v9);
      goto LABEL_18;
    }
    v8 = (unsigned int)(v8 + 1);
    p_Process += 96;
  }
  while ( (unsigned int)v8 < 6 );
  if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v6, (ULONG_PTR)(P + 40), SessionId, 0LL);
  _enable();
LABEL_18:
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v4 )
    ExFreePoolWithTag(P, 0);
}
