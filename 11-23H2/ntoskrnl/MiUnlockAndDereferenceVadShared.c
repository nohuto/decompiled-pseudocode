/*
 * XREFs of MiUnlockAndDereferenceVadShared @ 0x140275700
 * Callers:
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1BE4 (MiGetWorkingSetInfoList.c)
 *     MiCleanCfg @ 0x140363F14 (MiCleanCfg.c)
 *     MiPrefetchPreallocatePages @ 0x140632678 (MiPrefetchPreallocatePages.c)
 *     MiWaitForRotateToComplete @ 0x140634154 (MiWaitForRotateToComplete.c)
 *     MmGetEnclaveModuleList @ 0x140649270 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x14065DF04 (MiProcessVaContiguityInformation.c)
 *     MiCopyVirtualMemory @ 0x1406F7B20 (MiCopyVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8560 (MmQueryVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1407B4538 (MmFlushVirtualMemory.c)
 *     MiCheckForUserStackOverflow @ 0x1407BDC68 (MiCheckForUserStackOverflow.c)
 *     NtAreMappedFilesTheSame @ 0x1408718D0 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x1408ABF5E (MmGetFileNameForAddress.c)
 *     MiHotPatchProcess @ 0x140A37774 (MiHotPatchProcess.c)
 *     MiHandleEnclaveFault @ 0x140A3CED4 (MiHandleEnclaveFault.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3FC00 (MiQueryMemoryPhysicalContiguity.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A47FA8 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVadShared(char *P)
{
  signed __int32 v2; // eax
  BOOL v3; // esi
  struct _KTHREAD *CurrentThread; // rdi
  bool v5; // zf

  v2 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
  if ( v2 == -1 )
    __fastfail(0xEu);
  v3 = !v2 && (*((_DWORD *)P + 12) & 4) != 0;
  CurrentThread = KeGetCurrentThread();
  BYTE1(CurrentThread[1].Queue) &= ~0x40u;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)P + 5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(P + 40);
  KeAbPostRelease((ULONG_PTR)(P + 40));
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v3 )
    ExFreePoolWithTag(P, 0);
}
