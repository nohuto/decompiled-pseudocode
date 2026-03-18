/*
 * XREFs of ExGenRandom @ 0x1403175D0
 * Callers:
 *     RtlRandomEx @ 0x1402925A0 (RtlRandomEx.c)
 *     KeStartThread @ 0x1402BE0D8 (KeStartThread.c)
 *     KiUpdateProcessConcurrencyCount @ 0x1402C30C0 (KiUpdateProcessConcurrencyCount.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x140317588 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x140355FEC (RtlpHpSegMgrApplyLargePagePolicy.c)
 *     MiBuildDynamicRegion @ 0x14037620C (MiBuildDynamicRegion.c)
 *     MiInitializeColorTable @ 0x140397CFC (MiInitializeColorTable.c)
 *     MiAssignSoftwareWsleRegion @ 0x14039B40C (MiAssignSoftwareWsleRegion.c)
 *     CcBcbProfiler @ 0x1403E3340 (CcBcbProfiler.c)
 *     RtlpLfhIncrementDataSlot @ 0x140411E6C (RtlpLfhIncrementDataSlot.c)
 *     VslpVerifySessionSpace @ 0x14054CFD0 (VslpVerifySessionSpace.c)
 *     IopInitializeInMemoryDumpData @ 0x140553370 (IopInitializeInMemoryDumpData.c)
 *     KiAdaptThreadIdealProcessorForProcessIdealSetChange @ 0x14057681C (KiAdaptThreadIdealProcessorForProcessIdealSetChange.c)
 *     RtlpAllocateHeap @ 0x1405AB248 (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x1405ABF60 (RtlpCreateHeapEncoding.c)
 *     sub_14066CB10 @ 0x14066CB10 (sub_14066CB10.c)
 *     sub_14067E010 @ 0x14067E010 (sub_14067E010.c)
 *     MiReserveDriverPtes @ 0x140696DF0 (MiReserveDriverPtes.c)
 *     MiSelectImageBase @ 0x1406AAA28 (MiSelectImageBase.c)
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiInitializeProcessTopDownEntropy @ 0x1406B31F8 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x1406B32B8 (MiInitializeProcessBottomUpEntropy.c)
 *     NtQueryInformationProcess @ 0x1406FCA90 (NtQueryInformationProcess.c)
 *     sub_140764204 @ 0x140764204 (sub_140764204.c)
 *     PspNotifyThreadCreation @ 0x14076F800 (PspNotifyThreadCreation.c)
 *     PspSetupUserStack @ 0x140773F44 (PspSetupUserStack.c)
 *     PspWow64InitThreadGuestx86 @ 0x14079F2C8 (PspWow64InitThreadGuestx86.c)
 *     PspPrepareSystemDllInitBlock @ 0x1407A14C8 (PspPrepareSystemDllInitBlock.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CCB64 (MiAllocateNewSubAllocatedRegion.c)
 *     MiProcessLoadConfigForDriver @ 0x1407D4384 (MiProcessLoadConfigForDriver.c)
 *     RtlRandom @ 0x1407E63E0 (RtlRandom.c)
 *     CmpCmdInit @ 0x140842A94 (CmpCmdInit.c)
 *     MiGenerateSecureCookie @ 0x1408634B0 (MiGenerateSecureCookie.c)
 *     VslVerifySessionSpace @ 0x140943550 (VslVerifySessionSpace.c)
 *     PspWow64InitThreadGuestArm @ 0x1409B61D4 (PspWow64InitThreadGuestArm.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409F09FC (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x1409F2E14 (EtwpCovSampStrideSamplerInitialize.c)
 *     MiSelectOverflowDllBase @ 0x140A481BC (MiSelectOverflowDllBase.c)
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
 *     KxAcquireSpinLock @ 0x1402515B0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x140571848 (KiReleaseSpinLockInstrumented.c)
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
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
  if ( KiIrqlFlags )
  {
    v18 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
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
