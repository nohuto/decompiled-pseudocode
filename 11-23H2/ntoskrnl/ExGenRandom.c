/*
 * XREFs of ExGenRandom @ 0x140317860
 * Callers:
 *     RtlRandomEx @ 0x140292830 (RtlRandomEx.c)
 *     KeStartThread @ 0x1402BE368 (KeStartThread.c)
 *     KiUpdateProcessConcurrencyCount @ 0x1402C3350 (KiUpdateProcessConcurrencyCount.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x140317818 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x14035618C (RtlpHpSegMgrApplyLargePagePolicy.c)
 *     MiBuildDynamicRegion @ 0x1403763AC (MiBuildDynamicRegion.c)
 *     MiInitializeColorTable @ 0x140397EDC (MiInitializeColorTable.c)
 *     MiAssignSoftwareWsleRegion @ 0x14039B5EC (MiAssignSoftwareWsleRegion.c)
 *     CcBcbProfiler @ 0x1403E3520 (CcBcbProfiler.c)
 *     RtlpLfhIncrementDataSlot @ 0x1404120AC (RtlpLfhIncrementDataSlot.c)
 *     VslpVerifySessionSpace @ 0x14054D690 (VslpVerifySessionSpace.c)
 *     IopInitializeInMemoryDumpData @ 0x140553A30 (IopInitializeInMemoryDumpData.c)
 *     KiAdaptThreadIdealProcessorForProcessIdealSetChange @ 0x140576D0C (KiAdaptThreadIdealProcessorForProcessIdealSetChange.c)
 *     RtlpAllocateHeap @ 0x1405AB7B8 (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x1405AC4D0 (RtlpCreateHeapEncoding.c)
 *     sub_14066D060 @ 0x14066D060 (sub_14066D060.c)
 *     sub_14067E010 @ 0x14067E010 (sub_14067E010.c)
 *     MiReserveDriverPtes @ 0x140696DF0 (MiReserveDriverPtes.c)
 *     MiSelectImageBase @ 0x1406AAA28 (MiSelectImageBase.c)
 *     MiMapViewOfImageSection @ 0x1406AEAF0 (MiMapViewOfImageSection.c)
 *     MiInitializeProcessTopDownEntropy @ 0x1406B3228 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x1406B32E8 (MiInitializeProcessBottomUpEntropy.c)
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 *     sub_1407643F4 @ 0x1407643F4 (sub_1407643F4.c)
 *     PspNotifyThreadCreation @ 0x14076F9F0 (PspNotifyThreadCreation.c)
 *     PspSetupUserStack @ 0x140774134 (PspSetupUserStack.c)
 *     PspWow64InitThreadGuestx86 @ 0x14079F4B8 (PspWow64InitThreadGuestx86.c)
 *     PspPrepareSystemDllInitBlock @ 0x1407A16B8 (PspPrepareSystemDllInitBlock.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CCE34 (MiAllocateNewSubAllocatedRegion.c)
 *     MiProcessLoadConfigForDriver @ 0x1407D4654 (MiProcessLoadConfigForDriver.c)
 *     RtlRandom @ 0x1407E66B0 (RtlRandom.c)
 *     CmpCmdInit @ 0x140842D94 (CmpCmdInit.c)
 *     MiGenerateSecureCookie @ 0x1408636F0 (MiGenerateSecureCookie.c)
 *     VslVerifySessionSpace @ 0x140943750 (VslVerifySessionSpace.c)
 *     PspWow64InitThreadGuestArm @ 0x1409B63D4 (PspWow64InitThreadGuestArm.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409F0C8C (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x1409F30A4 (EtwpCovSampStrideSamplerInitialize.c)
 *     MiSelectOverflowDllBase @ 0x140A4846C (MiSelectOverflowDllBase.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 *     MiInitializeUltraSpace @ 0x140B43950 (MiInitializeUltraSpace.c)
 *     MiInitializeSystemPtes @ 0x140B4420C (MiInitializeSystemPtes.c)
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 *     ExpTimerInitialization @ 0x140B49970 (ExpTimerInitialization.c)
 *     CcInitializeCacheManager @ 0x140B49A88 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140B4B2F8 (ObInitSystem.c)
 *     ExpInitSystemPhase0 @ 0x140B54AE0 (ExpInitSystemPhase0.c)
 *     ExInitializePoolTracker @ 0x140B54C88 (ExInitializePoolTracker.c)
 *     MiInitializeNonPagedPool @ 0x140B5E52C (MiInitializeNonPagedPool.c)
 *     MiInitializeTopLevelBitmap @ 0x140B5FB44 (MiInitializeTopLevelBitmap.c)
 *     MiAssignTopLevelRanges @ 0x140B5FC2C (MiAssignTopLevelRanges.c)
 *     MiAssignSystemVa @ 0x140B5FF04 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x140B60128 (MiAddSubRegionEntropy.c)
 *     PspTlsInitialize @ 0x140B66B84 (PspTlsInitialize.c)
 *     MiInitializeSharedUserData @ 0x140B6BC64 (MiInitializeSharedUserData.c)
 *     MiAssignSessionRanges @ 0x140B6F1D0 (MiAssignSessionRanges.c)
 *     MiInitializeRelocations @ 0x140B70C98 (MiInitializeRelocations.c)
 *     MiInitializeBootDefaults @ 0x140B7223C (MiInitializeBootDefaults.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x140571D88 (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ExGenRandom(int a1)
{
  __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned int v3; // ecx
  char *v4; // r9
  int v5; // edx
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // ebx
  unsigned int v10; // ebx
  int v11; // ecx
  _DWORD *SchedulerAssist; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int8 v18; // cl
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *v20; // rdi
  int v21; // eax
  bool v22; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v16) = 4;
    else
      v16 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v16;
  }
  KxAcquireSpinLock(&ExpLFGRngLock);
  if ( (_DWORD)v1 == 1 && ExpRemainingLeftoverBootRngData )
  {
    v17 = (unsigned int)(ExpRemainingLeftoverBootRngData - 1);
    v9 = ExpLeftoverBootRngData[v17];
    --ExpRemainingLeftoverBootRngData;
    memset(&ExpLeftoverBootRngData[v17], 0, sizeof(_DWORD));
  }
  else
  {
    v3 = 0;
    v4 = (char *)&ExpLFGRngState + 228 * v1;
    v5 = *((_DWORD *)v4 + 55);
    v6 = *((_DWORD *)v4 + 56);
    if ( v5 != 54 )
      v3 = v5 + 1;
    v7 = v3;
    v8 = 0LL;
    if ( v6 != 54 )
      v8 = (unsigned int)(v6 + 1);
    v9 = *(_DWORD *)&v4[4 * v7] - *(_DWORD *)&v4[4 * v8];
    *(_DWORD *)&v4[4 * v7] = v9;
    *((_DWORD *)v4 + 55) = v7;
    *((_DWORD *)v4 + 56) = v8;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ExpLFGRngLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)&ExpLFGRngLock, 0LL);
  if ( (_DWORD)KiIrqlFlags )
  {
    v18 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v20 = CurrentPrcb->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v22 = (v21 & v20[5]) == 0;
      v20[5] &= v21;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  v10 = ExpRNGAuxiliarySeed ^ v9;
  if ( _bittest64(&KeFeatureBits, 0x20u) )
  {
    v11 = 0;
    while ( 1 )
    {
      __asm { rdrand  edx }
      if ( _CF )
        break;
      if ( (unsigned int)++v11 >= 0xA )
        return v10;
    }
    v10 ^= _EDX;
  }
  return v10;
}
