/*
 * XREFs of InitializeSListHead @ 0x140221440
 * Callers:
 *     MiAbsorbPossibleEngineChanges @ 0x140221074 (MiAbsorbPossibleEngineChanges.c)
 *     ExInitializeLookasideListExInternal @ 0x140222240 (ExInitializeLookasideListExInternal.c)
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140343F94 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializePagedLookasideListInternal @ 0x140361260 (ExInitializePagedLookasideListInternal.c)
 *     RtlpHpVsContextInitialize @ 0x140362A88 (RtlpHpVsContextInitialize.c)
 *     MiInitializePageFaultResources @ 0x140375EE0 (MiInitializePageFaultResources.c)
 *     MiInitializeNuma @ 0x1403961D8 (MiInitializeNuma.c)
 *     RtlpDynamicLookasideInitialize @ 0x140398640 (RtlpDynamicLookasideInitialize.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403A81DC (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1403C2C70 (ExInitializeNPagedLookasideListInternal.c)
 *     HvlpSetupCachedHypercallPages @ 0x14054218C (HvlpSetupCachedHypercallPages.c)
 *     MmInitializeProcessAddressSpace @ 0x1406B2A9C (MmInitializeProcessAddressSpace.c)
 *     EtwpInitLoggerContext @ 0x1407B3A70 (EtwpInitLoggerContext.c)
 *     WdipSemInitializeGlobalState @ 0x14083449C (WdipSemInitializeGlobalState.c)
 *     MiCreatePagefile @ 0x1408355E4 (MiCreatePagefile.c)
 *     MiInitializePartition @ 0x140838DF0 (MiInitializePartition.c)
 *     MiInitializeSections @ 0x14083969C (MiInitializeSections.c)
 *     PfTInitialize @ 0x140848CBC (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x140848EF4 (PfFbBufferListInitialize.c)
 *     EtwpEnableStackCaching @ 0x1408A8718 (EtwpEnableStackCaching.c)
 *     RtlStdInitializeStackDatabase @ 0x1409BA5CC (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x1409DE0A0 (WdipSemFreePool.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409F0AAC (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x1409F2640 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1409F26D4 (EtwpCovSampLookasideInitialize.c)
 *     PfTAccessTracingInitialize @ 0x140A88A4C (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x140A8BD08 (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x140A8C3EC (KiInitPrcb.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140ACCA34 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x140ADB118 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x140B46F54 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0LL;
}
