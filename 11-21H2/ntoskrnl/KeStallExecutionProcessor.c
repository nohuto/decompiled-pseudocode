/*
 * XREFs of KeStallExecutionProcessor @ 0x140303560
 * Callers:
 *     KeFreezeExecution @ 0x1402DA0F0 (KeFreezeExecution.c)
 *     HalpInterruptWaitForProcessorStartUp @ 0x1403B2F9C (HalpInterruptWaitForProcessorStartUp.c)
 *     HalpApicStartProcessor @ 0x1403B5D40 (HalpApicStartProcessor.c)
 *     HalpTimerWaitForPhase0Interrupt @ 0x1403BB040 (HalpTimerWaitForPhase0Interrupt.c)
 *     HalpTimerMeasureFrequencies @ 0x1403BBEC4 (HalpTimerMeasureFrequencies.c)
 *     HalpInterruptResetThisProcessor @ 0x140508F00 (HalpInterruptResetThisProcessor.c)
 *     HalpPowerWriteResetCommand @ 0x14050A93C (HalpPowerWriteResetCommand.c)
 *     HalpTimerTestHypervisorTimer @ 0x14050E088 (HalpTimerTestHypervisorTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050F9E0 (HalpTimerMeasureProcessorsWorker.c)
 *     HalpNmiReboot @ 0x14051FA44 (HalpNmiReboot.c)
 *     HalpSfiTimerArm @ 0x140522AA0 (HalpSfiTimerArm.c)
 *     HalpSfiTimerInitialize @ 0x140522BA0 (HalpSfiTimerInitialize.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x14052448C (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x1405245B8 (HalpUsbLegacyStopUhciInterrupt.c)
 *     IvtUpdateGlobalCommand @ 0x14052FAA8 (IvtUpdateGlobalCommand.c)
 *     HsaGetPageFault @ 0x140532460 (HsaGetPageFault.c)
 *     HvlPrepareForRootCrashdump @ 0x140547AF4 (HvlPrepareForRootCrashdump.c)
 *     IoWriteCrashDump @ 0x140553244 (IoWriteCrashDump.c)
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x140578BB4 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiMcheckAlternateReturn @ 0x14057C3C0 (KiMcheckAlternateReturn.c)
 *     ExpWaitForBootDevices @ 0x14063A300 (ExpWaitForBootDevices.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14064E7FC (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14064E9C0 (BgpFwDisplayBugCheckScreen.c)
 *     IpmiLibpDelay @ 0x140652EC8 (IpmiLibpDelay.c)
 *     IvtInitializeIommu @ 0x140A63CE0 (IvtInitializeIommu.c)
 *     HdlspBugCheckProcessing @ 0x140AA8D9C (HdlspBugCheckProcessing.c)
 * Callees:
 *     KiCheckStall @ 0x140302560 (KiCheckStall.c)
 *     HalpTimerGetInternalData @ 0x140303720 (HalpTimerGetInternalData.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __stdcall KeStallExecutionProcessor(ULONG MicroSeconds)
{
  __int64 v1; // rbp
  ULONG_PTR v3; // rdi
  __int64 v4; // rsi
  char v5; // r12
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // r13
  unsigned int v13; // ebx
  unsigned __int128 v14; // rax
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  __int64 InternalData; // rax
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rax
  unsigned __int64 v21; // r11
  signed __int64 v22; // rax
  int v23; // r9d
  __int64 v24; // r8
  __int64 v25; // r10
  unsigned __int64 v26; // r8
  signed __int64 v27; // rcx
  unsigned int v28; // edx
  signed __int32 v29[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF
  int v32; // [rsp+70h] [rbp-8h]

  v1 = 0LL;
  if ( HalpTimerProcessorsFrozen )
  {
    v3 = HalpAlwaysOnCounter;
    if ( HalpAlwaysOnCounter )
    {
      if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpAlwaysOnCounter);
        (*(void (__fastcall **)(__int64))(v3 + 112))(InternalData);
      }
      else
      {
        do
        {
          v18 = *(_QWORD *)(v3 + 208);
          do
          {
            v19 = *(_QWORD *)(v3 + 200);
            v20 = HalpTimerGetInternalData(v3);
            v21 = (*(__int64 (__fastcall **)(__int64))(v3 + 112))(v20);
            _InterlockedOr(v29, 0);
            v22 = *(_QWORD *)(v3 + 200);
          }
          while ( v19 != v22 );
        }
        while ( v18 != *(_QWORD *)(v3 + 208) );
        v23 = *(_DWORD *)(v3 + 220);
        if ( ((v19 ^ v21) & (1LL << ((unsigned __int8)v23 - 1))) != 0 )
        {
          if ( v23 == 64 )
            v24 = -1LL;
          else
            v24 = (1LL << v23) - 1;
          v25 = 0LL;
          if ( v23 != 64 )
            v25 = 1LL << v23;
          v26 = v19 & v24;
          v27 = v21 | v19 ^ v26;
          if ( v21 < v26 )
            v27 += v25;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 200), v27, v22);
        }
      }
    }
    KiCheckStall((__int64)KeGetCurrentPrcb(), 0);
  }
  v4 = HalpStallCounter;
  v5 = 0;
  Affinity = 0LL;
  v6 = *(_DWORD *)(HalpStallCounter + 224);
  PreviousAffinity = 0LL;
  if ( (v6 & 1) != 0
    && KeQueryActiveProcessorCountEx(0xFFFFu) >= 2
    && KeGetCurrentIrql() < 2u
    && (v32 & 0x200) != 0
    && (*(_DWORD *)(v4 + 184) & 0x20) == 0 )
  {
    v5 = 1;
    v28 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v28 >> 6);
    Affinity.Mask = 1LL << (v28 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  if ( (*(_DWORD *)(v4 + 224) & 0x10000) != 0 )
    v7 = *(_QWORD *)(v4 + 72) + *(_DWORD *)(v4 + 80) * KeGetPcr()->Prcb.Number;
  else
    v7 = *(_QWORD *)(v4 + 72);
  v9 = (*(__int64 (__fastcall **)(__int64))(v4 + 112))(v7);
  v10 = __readcr2();
  __writecr2(v10);
  v11 = v9;
  v12 = 1LL << *(_DWORD *)(v4 + 220);
  v13 = 0;
  v14 = (*(_QWORD *)(v4 + 192) * (unsigned __int64)(10 * MicroSeconds) + 9999999)
      * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
  v15 = (*(_QWORD *)(v4 + 192) * (unsigned __int64)(10 * MicroSeconds) + 9999999) / 0x989680 + 1;
  if ( v15 )
  {
    do
    {
      if ( (++v13 & dword_140C4C47C) == 0 && qword_140C4C480 )
        qword_140C4C480(v13, *((_QWORD *)&v14 + 1), v8);
      else
        _mm_pause();
      v16 = HalpTimerGetInternalData(v4);
      *(_QWORD *)&v14 = (*(__int64 (__fastcall **)(__int64))(v4 + 112))(v16);
      if ( (unsigned __int64)v14 < v11 )
        v1 += v12;
      v11 = v14;
    }
    while ( (__int64)v14 + v1 - v9 < v15 );
  }
  if ( v5 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
